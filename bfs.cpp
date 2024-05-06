#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

void bfs(int node,vector<vector<int>> &adjmat,vector<int> &visited){
    queue<int> q;
    q.push(node);
    while(!q.empty()){
        int front = q.front();
        q.pop();
        cout<<front<<" ";
        visited[front] = 1;
        for(int i = 0;i<adjmat[front].size();i++){
            if(visited[adjmat[front][i]] == 0){
                visited[adjmat[front][i]] = 1;
                q.push(adjmat[front][i]);
            }
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
    vector<vector<int>> adjmat(n+1);
    for(int i = 0;i<n;i++){
        int a,b;
        cout<<"Enter the "<<i+1<<" edge: ";
        cin>>a>>b;
        adjmat[a].push_back(b);
        adjmat[b].push_back(a);
    }
    vector<int> visited(n+1,0);
    bfs(1,adjmat,visited);
}