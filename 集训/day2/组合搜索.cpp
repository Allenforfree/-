#include<iostream>
#include<vector>
using namespace std;

bool vis[25];
#define ing long long
int n,r;
vector<int>v;
void dfs(int u,int start){
    if(u == r+1){
        for(auto x:v)cout<<x<<" ";
        puts("");
        return ;
    }
    for(int i = start;i<=n;i++){
        if(!vis[i]){
            vis[i] = true;
            v.push_back(i);
            dfs(u+1,i+1);
            //回溯，恢复现场
            vis[i] = false;
            v.pop_back();
        }
    }
}

#undef int long long
int main(){
   #define int long long
    cin>>n>>r;
    


    return 0;
}