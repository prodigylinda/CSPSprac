#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> g(n);
int dis[n];
void bfs(int s,int n){
  fill(dis,dis+n+1,-1);
  queue<int> q;
  q.push_back(s);
  dis[s]=0;
  while(!q.empty()){
    int u=q.top();
    q.pop();
    for(int k:g[u]){
      if(dis[k]!=-1){
        continue;
      }else{
        dis[k]=dis[u]+1;
        q.push(v);
      }
    }
  }
}
int main(){
  int n,m;
  for(int i=0;i<m;i++){
    int i,j;
    cin>>i>>j;
    g[i].push_back(j);
    g[j].push_back(i);
  }
  bfs(1,n);
  return 0;
}
