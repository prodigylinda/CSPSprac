#include<bits/stdc++.h>
int h[];
void up(int x){
  while(x>1&&h[x]>h[x/2]){
    swap(h[x],h[x/2]);
  }
  x/=2;
}
voiddown(int x){
  int t=x*2;
  while(t<=n&&h[t]<h[t+1]){
    t++;
  }
  if(h[t]<h[x]){
    break;
  }
  swap(h[t],h[x]);
  x=t;
}
    
