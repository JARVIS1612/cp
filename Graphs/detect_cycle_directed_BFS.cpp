#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//kahn's algorithm      
void usingBFS(vector<vector<int>> adj_list, int n)
{
    vector<bool> visited(n,false), in_same_path(n,false);
    queue<int> q;

    for(int i=0; i<n; i++)
    {
        if(!visited[i])
        {
            q.push(i);
            visited[i] = true;
            in_same_path[i] = true;

            while(!q.empty()){
                int current_node = q.front();
                q.pop();
                visited[i] = true;
                in_same_path[i] = true;
            }

        }
    }
 }


 void print(vector<bool> visited)
 {
    cout << endl;
    for(int i: visited)
        cout << i << " ";
    cout << endl;
 }

void DFS(vector<vector<int>> adj_list, vector<bool> &visited, stack<int> &s, vector<bool> &in_same_path, int start)
{
    cout << start << " ";
    s.push(start);
    visited[start] = true;
    in_same_path[start] = true;
    for(int i: adj_list[start])
    {
        print(visited);
        print(in_same_path);
        if (visited[i] && in_same_path[i])
        {
            cout << "CYCLE !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
            return;
        }
        if(!visited[i])
            DFS(adj_list, visited, s, in_same_path, i);
        in_same_path[i] = false;
    }
}

void usingDFS(vector<vector<int>> adj_list, int n)
{
    vector<bool> visited(n,false), in_same_path(n,false);
    stack<int> s;
    
    for(int i=0; i<n; i++){
        if (!visited[i]) 
            DFS(adj_list, visited, s, in_same_path, i);
    }
}

int main() {
    vector<vector<int>> adj_list = {
        {1},
        {2},
        {3,6},
        {4},
        {5},
        {},
        {4},
        {8},
        {9},
        {7}
    };
    int n = adj_list.size();
    usingDFS(adj_list, n);
    return 0;
}