#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void print(vector<int> arr)
{
    cout << endl;
    for(int i: arr)
        cout << i << " ";
    cout << endl;
}

vector<int> find_right_min(vector<int> arr, int n)
{
    vector<int> ans;
    stack<int> stack_;
    for(int i=n-1; i>=0; i--)
    {
        if(stack_.empty() || arr[i]<arr[stack_.top()]){
            while(!stack_.empty() && arr[i]<arr[stack_.top()])
                stack_.pop();
            ans.push_back(stack_.empty()?n:stack_.top());
            stack_.push(i);
        }
        else
        {
            ans.push_back(stack_.top());
            stack_.push(i);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

vector<int> find_left_min(vector<int> arr, int n)
{
    vector<int> ans;
    stack<int> stack_;
    for(int i=0; i<n; i++)
    {
        if(stack_.empty() || arr[i]<=arr[stack_.top()])
        {
            while(!stack_.empty() && arr[i]<=arr[stack_.top()])
                stack_.pop();
            ans.push_back(stack_.empty()?-1:stack_.top());
            stack_.push(i);
        }
        else
        {
            ans.push_back(stack_.top());
            stack_.push(i);
        }
    }
    return ans;
}


int main()
{
    vector<int> arr{1,2,3,4}, area, left_min, right_min;
    int n=arr.size();
    right_min = find_right_min(arr,n);
    left_min = find_left_min(arr,n);
    print(right_min);
    print(left_min);
    for(int i=0; i<n; i++)
    {
        int range = (right_min[i]-1) - (left_min[i]+1) + 1;
        area.push_back(range*arr[i]);   
    }
    cout << *max_element(area.begin(), area.end());
}