#include<bits/stdc++.h>
using namespace std;
vector<int> g[n];
bool visit[n];
void dfs(int n){
  visit[n]=true;
  for(int k:g[n]){
    if(visited[k]){
      continue;
    }
    dfs(k);
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
  dfs(1);
  return 0;
}
  
