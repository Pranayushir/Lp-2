#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void dfs(int node,vector<vector<int>> &adjList,vector<int> &visited){
    visited[node] = 1;
    cout<<node<<" ";
    for(int i = 0;i<adjList[node].size();i++){
        if(visited[adjList[node][i]] == 0){
            dfs(adjList[node][i],adjList,visited);
        }
    }
    return;
}
int main(){
    int m,n;
    cout<<"Enter the no of vertices: ";
    cin>>m;
    cout<<"Enter the no of edges: ";
    cin>>n;
    vector<vector<int>> adjList(n+1);
    vector<int> visited(n+1,0);
    for(int i = 0;i<n;i++){
        int a,b;
        cout<<"Enter the "<<i+1<<" th edge: ";
        cin>>a>>b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    dfs(1,adjList,visited);
}
