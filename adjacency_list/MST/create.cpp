#include<bits/stdc++.h>
using namespace std;
struct edge {
  int f,ne,w;
}
struct DSU {
  vector<int> fa,sz;
  DSU(int n){
    fa.resize(n+1);
    sz.resize(n+1,1);
    for(int i=1;i<=n;i++){
      fa[i]=i;
    }
  }
  int find(int x){
    if(fa[x]==x){
      return x;
    }
    return find[fa[x]];
  }
  bool merge(int a,int b){
    int x=find(a);
    int y=find(b);
    if(x==y){
      return false;
    }
    if(sz[x]>sz[y]){
      fa[y]=x;
      sz[x]+=sz[y];
    }else{
      fa[x]=y;
      sz[y]+=sz[x];
    }
    return true;
  }
}

int main(){
  vector<edge> all;
  int n.m;
  cin>>n>>m;
  for(int i=0;i<m;i++){
    cin>>all[i].f;
    cin>>all[i].ne;
    cin>>all[i].w;
  }
  sort(all.begin(),all.end(),[](const edge& a,const edge& b){return a.w<b.w});
  DSU dsu(n);
  long long ans=0;
  long long cnt =0;
  for(const edge& a:all){
    if(dsu.merge(a.f,a.ne)){
      ans+=a.w;
      cnt+=1;
    }
    if(cnt ==n-1){
      break;
    }
  }
  if(cnt!=n-1){
    cout<<"no"<<endl;
  }else{
    cout<<"yes"<<endl;
  }
  return 0;
}


  

    
