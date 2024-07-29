#include<iostream>
using namespace std;
int a[1005],t[200];

int main(){
    int n;cin>>n;
    int minv = 1e9,maxv = -1e9;
    for(int i = 1;i<=n;i++){
        cin>>a[i];
        minv = min(minv,a[i]);
        maxv = max(maxv,a[i]);
        
}
    int target;cin>>target;
    int py = -minv;
    for(int i = 1;i<=n;i++){
        int cou=target - a[i];
        if(cou>minv&&cou<=maxv&&t[cou+py]){
            printf("%d + %d = %d",a[i],cou,target);
        }
        t[a[i]+py]++;
    }
    return 0;
}