#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    long long n;
    cin>>n;
    stack<int> st;
    vector<int> ans(n+1,0);
    int alls[n+1];
    for(int i=1;i<=n;i++){
        cin>>alls[i];
    }
    for(int i=1;i<=n;i++){
        while(!st.empty()&&alls[st.top()]<alls[i]){
            ans[st.top()]=i;
            st.pop();
        }
        st.push(i);
        }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
    }
    
