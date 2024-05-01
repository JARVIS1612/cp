#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int adj_mat[][6] = {{0,1,0,0,0,0},{1,0,0,0,0,1},{0,0,0,1,1,1},{0,0,1,0,1,0},{0,0,1,1,0,0},{0,1,1,0,0,0}};
    int visited[6] = {0,0,0,0,0,0};
    queue<int> qu;
    visited[0] = 1;
    qu.push(0);
    
    while(!qu.empty()){
        int curr_node = qu.front();
        cout<<curr_node<<" ";
        qu.pop();
        for(int i=0; i<6; i++)
        {
            if (adj_mat[curr_node][i] && !visited[i])
            {
                qu.push(i);
                visited[i]=1;
            }
        }
    }


    return 0;
}