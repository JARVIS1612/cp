// Bipartite graph

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void printVector(const vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<vector<int>> adj_list = {
        {1},
        {0,2,3},
        {1,5},
        {1,4},
        {3,7,5},
        {4,2        },
        {4,7},
        {7}
    };
    queue<pair<int, int>> q;
    vector<int> visited(8); 

    q.push(make_pair(0, 1));
    visited[0] = 1;

    while(!q.empty())
    {
        pair<int,int> current_node = q.front();
        q.pop();
        for(int i: adj_list[current_node.first]){
            printVector(visited);
            if (!visited[i]){
                q.push(make_pair(i, 3-current_node.second));
                visited[i] = 3-current_node.second%2;
            }
            else if(visited[i]==current_node.second)
            {
                cout << "NOT BIPARTED !!!!!!!!!!";
                return 1;
            }
        }
    }  

    return 0;
}