#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> generate_next_min(vector<int> arr, int n)
{
    vector<int> ans;
    stack<int> stack;
    for(int i=n-1; i>=0; i--)
    {
        if(stack.empty() || arr[i]<=arr[stack.top()])
        {
            while(!stack.empty() && arr[i]<=arr[stack.top()])
                stack.pop();
            ans.push_back(stack.empty()?n:stack.top());
            stack.push(i);
        }
        else
        {
            ans.push_back(stack.top());
            stack.push(i);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

vector<int> generate_previous_min(vector<int> arr, int n)
{
    vector<int> ans;
    stack<int> stack;
    for(int i=0; i<=n; i++)
    {
        if(stack.empty() || arr[i]<=arr[stack.top()])
        {
            while(!stack.empty() && arr[i]<=arr[stack.top()])
                stack.pop();
            ans.push_back(stack.empty()?-1:stack.top());
            stack.push(i);
        }
        else
        {
            ans.push_back(stack.top());
            stack.push(i);
        }
    }
    return ans;
}



int max_area_(vector<int> arr, int n)
{
    vector<int> next_min, previous_min, ans;
    next_min = generate_next_min(arr, n);
    previous_min = generate_previous_min(arr, n);

    for(int i=0; i<n; i++)
    {
        int area = ((next_min[i]-1)-(previous_min[i]+1)+1)*arr[i];
        ans.push_back(area);
    }

    return *max_element(ans.begin(), ans.end());
}

int main()
{
    int arr[][4] = {{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,0,0}};
    int n = sizeof(arr)/sizeof(arr[0]), m = sizeof(arr[0])/sizeof(arr[0][0]), max_area = 0;
    vector<int> histogram(m, 0);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]==1)
                histogram[j] += arr[i][j];
            else
                histogram[j] = 0;
        }

        cout << endl;
        for(int x: histogram)
            cout << x << " ";
        cout << endl;

        int area = max_area_(histogram, n);
        cout << area << endl;
        if(max_area<area)
            max_area = area;
    }
    cout << max_area;
    return 0;
}