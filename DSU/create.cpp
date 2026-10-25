#include<bits/stdc++.h>
int fa[num];
int point[num2];
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
