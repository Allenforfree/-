#include<iostream>
using namespace std;
const int maxn = 1005;
int a[maxn];

int main(){

    int n;cin>>n;
    int targt = 0;
    for(int i = 1;i<=n;i++){
        cin>>a[i];
    }
    cin>>targt;
    for(int i = 1;i<=n;i++){
        for(int j = i+1;i<=n;i++){
            if(a[i]+a[j]==targt){
                printf("a[%d]%d%d",a[i],a[j],targt);
            }
        }
    }
    return 0;
}