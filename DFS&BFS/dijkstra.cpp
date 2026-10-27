#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n,m;
  cin>>n>>m;
  vector<vector<pair<int,int>>> g(n+1);
  for(int i=1;i<=n;i++){
    int i,j,k;
    cin>>i>>j>>k;
    g[i].push_back({j,k});
    g[j].push_back({i,k});
  }
  vector<long long> ans = INT_MAX;
  priority_queue<pair<int,int>,vector<pair<int,int>>>,greater<pair<int,int>>> pq;
  ans[1]=0;
  pq.push_back({0,1});
  while(!pq.empty()){
    long long d = pq.top().first;
    int u=pq.top().second;
    pq.pop();
    if(d!=ans[u]){
      continue;
    }
    for（auto a:g[u]){
      int i=a.second;
      int v = a.first;
      if(ans[u]+v<ans[i]){
        ans[i]=ans[u]+v;
        pq.push_back({ans[i],i});
      }
    }
  }
  for(int i=1;i<=n;i++){
    if(ans[i]==INT_MAX){
      cout<<"NO"<<endl;
    }else{
      cout<<ans[i];
    }
  }
  return 0;
}
  
}
