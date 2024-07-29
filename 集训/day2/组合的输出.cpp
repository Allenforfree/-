#include<iostream>
using namespace std;
int st[30],n,r;
void dfs(int u){
    if(u==n+1){ 
        int cnt = 0;
        for(int i = 1;i<=n;i++){
            if(st[i]==1)cnt++;
        }
        if(cnt==r){
            for(int i = 1;i<=n;i++){
                if(st[i]==1)cout<<i<<" ";
            }
            puts("");
        }
        
        return;
    }
    st[u] = 1;
    dfs(u+1);
    st[u] = 2;
    dfs(u+1);
}
int main(){
    cin>>n>>r;
    dfs(1);
}