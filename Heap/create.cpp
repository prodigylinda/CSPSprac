#include<bits/stdc++.h>
using namespace std;
int n[num];
//1
void buildheap(){
  for(int i=1;i<=n;i++){
    up(n[i]);
  }
}
//2
void buildheap2(){
  for(int i=n;;i>0;i--){
    down(n[i]);
  }
}
