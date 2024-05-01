#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void DFS(vector<vector<int>> adj_list, vector<int> &visited, stack<int> &st, int start)
{
    visited[start] = 1;
    st.push(start);

    for(int i: adj_list[start])
    {
        if(!visited[i])
        {
            DFS(adj_list, visited, st, i);
        }
    }
        cout << start << " ";
}

int main()
{
    vector<vector<int>> adj_list = {
        {1, 2},     // Node 0 is connected to nodes 1 and 2
        {0, 2},     // Node 1 is connected to nodes 0 and 3
        {1, 5, 3},  // Node 2 is connected to nodes 0, 3, and 4
        {2, 4},  // Node 3 is connected to nodes 1, 2, and 4
        {5, 3},
        {2,4}      // Node 4 is connected to nodes 2 and 3
    };
    stack<int> st;
    int n = adj_list.size();
    vector<int> visited(n,0);

    DFS(adj_list, visited, st, 0);

    return 0;
}