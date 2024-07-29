#include<iostream>
using namespace std;
int n,k,ans;
void dfs(int u,int start,int sy){
    if(u==k+1){
        if(sy==0)ans++;
        return ;
    }
    for(int i = start;i<=sy;i++){
        dfs(u+1,i,sy-i);
    }
}
int main(){
    cin>>n>>k;
    dfs(1,1,n);
    cout<<ans;
    return 0;
}