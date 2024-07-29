#include<iostream>
using namespace std;

int gcd(int a,int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
int gcd2(int a,int b){
    return b==0?a:gcd2(b,a%b);
}

int main(){
    int a,b;cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    cout<<gcd2(a,b)<<endl;
     return 0;
}