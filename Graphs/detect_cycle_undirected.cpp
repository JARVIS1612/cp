// Detect cycle in undirected graph using BFS

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<vector<int>> adj_list = {
        {1},     // Node 0 is connected to nodes 1 and 2
        {0, 2},     // Node 1 is connected to nodes 0 and 3
        {1, 5, 3},  // Node 2 is connected to nodes 0, 3, and 4
        {2, 4},  // Node 3 is connected to nodes 1, 2, and 4
        {3,5},
        {2,4}      // Node 4 is connected to nodes 2 and 3
    };
    int n = adj_list.size(), start = 0;
    bool visited[n] = {false};
    queue<pair<int,int>> q;

    q.push(make_pair(0,-1));
    visited[0] = true;

    while(!q.empty()){
        pair<int,int> node = q.front();
        cout << node.first << endl;
        q.pop();

        for(auto i: adj_list[node.first]){
            if (visited[i] && node.second!=i) {
                cout << "Cycle detected" << endl;
                return 0;
            }
            else if(!visited[i]){
                q.push(make_pair(i, node.first));
                visited[i] = true;
            }
        }
    }
    return 0;
}