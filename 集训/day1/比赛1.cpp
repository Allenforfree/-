#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int x){
    if(x==1)return false;
    if(x==2)return true;
    for(int i = 2;i<sqrt(x);i++){
        if(x%i==0)return false;
    }
    return true;
}
int main(){
    int n;cin>>n;
    int a[1000];
    for(int i = 0;i<n;i++){
        if(n%i==0){
            a[i] = i;
        }
    }
    int count = 0;
    for(int i = 0;i<n;i++){
        if(isPrime(a[i]))count++;
    }
    cout<<count;
    return 0;
}