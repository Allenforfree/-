#include<iostream>
using namespace std;

int main(){
    int a[1005];
    //int a,b,c;cin>>a>>b>>c;
    int n;cin>>n;
    int target;
    bool found;
    for(int i = 1;i<=n;i++){
        cin>>a[i];
    }
    cin>>target;
    for(int i = 1;i<=n;i++){
        if(found)break;
        for(int j = i+1;j<=n;j++){
            for(int k = j+1;k<=n;k++){
                if(a[i]+a[j]+a[k]==target){
                    cout<<a[i]<<"+"<<a[j]<<"+"<<a[k]<<"="<<target<<endl;
                    found = true;
                    break;
                }
            }
        }
    }
    return 0;
}