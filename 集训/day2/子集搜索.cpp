#include<iostream>
using namespace std;
int st[15],n;
//0没考虑，1选，2不选
void dfs(int u){
    if(u==n+1){
        for(int i = 1;i<=n;i++){
            if(st[i]==1)cout<<i<<" ";
        }
        puts("");
        return;
    }
    st[u] = 1;
    dfs(u+1);
    st[u] = 0;//回溯，公平
    st[u] = 2;
    dfs(u+1);
}
int main(){
    cin>>n;
    dfs(1);
    return 0;
}