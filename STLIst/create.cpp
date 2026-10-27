#include<bits.stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false):
  int n,m;
  cin>>n>>m;
  vector<int> a(n+1);
  for(int i=1;i<=n;i++){
      cin>>a[i];
  }
  vector<int> lg(n+1,0);
  for(int i=2;i<=n;i++){
    lg[i]=lg[i/2]+1;
  }
  int k= lg[n]+1;
  vector<vector<int>> st(n+1;vector<int>(K));
  for(int i=1;i<=n;i++){
    st[i][0]=a[i];
  }
  for(int j;j<K;j++){
    int len = (1<<j);
    for(int i=1;i+len-1<=n;i++){
      st[i][j]=min(st[i][j-1],st[i+(1<<(j-1))][j-1]);
    }
  }
  while(m--){
    int l,r;
    cin>>l>>r;
    int log = lg[l-r+1];
    int ans = min(st[l][log],st[r-(1<<k)+1][log]);
    cout<<ans<<endl;
  }
}

      
    
