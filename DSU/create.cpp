#include<bits/stdc++.h>
using namespace std;

struct DSU{
  int fa[num];
  int sz[num2];
  DSU(int n){
    fa.resize(n);
    sz.resize(n);
    for(int i=0;i<n;i++){
      fa[i]=i;
    }
  int find(int n){
    if(fa[n]==n){
      return n;
    }else{
      return find(fa[n]);
    }
  }
  void merge(int x,int y){
    int a = find(x);
    int b = find(y);
    if(a==b){
      return;
    }
    fa[a]=b;
  }  
  bool same(int x,int y){
    return find(x)==find(y);
  }
}
int main(){
  int n,m;
  cin>>n>>m;
  DSU(n);
  for(int i=0;i<m;i++){
    int i,j;
    cin>>i>>j;
    merge(i,j);
  }
  return 0;
}
