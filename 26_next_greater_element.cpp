#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    stack<int> stack_;
    vector<int> ans;
    for(int i=n-1; i>=0; i--)
    {
        if(stack_.empty() || arr[i]<arr[stack_.top()]){
            while(!stack_.empty() && arr[i]<arr[stack_.top()])
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
    reverse(ans.begin(), ans.end());
    for(int i=0; i<n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}