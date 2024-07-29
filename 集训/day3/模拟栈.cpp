#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5+10;
int sizest = 0;
int stk[maxn];
void push(int x){
    stk[++sizest]  = x;
}
void pop(){
    if(sizest>0)
        --sizest;
}
int top(){
    if(sizest>0)
        return  stk[sizest];
}
int empty(){
    return sizest > 0 ? 0 : 1;
}
int size(){
    return sizest;
}
int main(){
    int n;cin>>n;
    for(int i = 1;i<=n;i++){
        int op,x;
        cin>>op;
        if(op==1){
            cin>>x;
            push(x);
        }else if(op==2){
            pop();
        }else if(op==3){
            cout<<top()<<endl;
        }else if(op==4){
            cout<<size()<<endl;
        }else if(op==5){
            cout<<empty()<<endl;
        }
    }
    return 0;
}