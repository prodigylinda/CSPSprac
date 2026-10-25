#include<bits/stdc++.h>
using namespace std;
struct treenode(){
  int key;
  int left;
  int right;
  int size;
  int count;
}
treenode(int x){
  key=x;
  left=0;
  right =0;
  size=1;
  count =1;
}
//中序
void zhong(treenode* root){
  if(root==nullptr){
    return;
  }
  zhong(root->left);
  cout<<(root->key)<<" ";
  zhong(root->right);
}
  
