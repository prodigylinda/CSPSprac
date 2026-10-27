#include<bits/stdc++.h>
using namespace std;
int mian(){
  ios::sync_with_stdio(false);
  int n,m;
  cin>>n>>m;
  vector<vector<int>> g(n+1);
  vector<int> inde(n);
  for(int k=1;k<=m;k++){
    int i,j;
    cin>>i>>j;
    g[i].push_back(j);
    inde[j]+=1;
  }
  queue<int> q;
  for(int i=1;i<=n;i++){
    if(inde[i]==0){
      q.push_back(i);
    }
  }  
  vector<int> ans;
  while(!q.empty()){
    int u=q.top();
    q.pop();
    ans.push_back(u);
    for(int s:g[u]){
      inde[s]-=1;
      if(inde[s]==0){
        q.push_back(s);
      }
    }
  }
  if((int)ans.size()!=n){
    cout<<-1<<endl;
  }else{
    for(int d:ans){
      cout<<d<<" ";
    }
  }
  return 0;
}


  
  return 0;
}
