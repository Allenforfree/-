#include<iostream>
using namespace std;
long long a[105];
long long fib[105];
int memory_fib(int x){return fib[x];}
int force_fib(int x){
    a[1] = 0,a[2] = 1;
    for(int i = 3;i<=100;i++){
        fib[i] = fib[i-1]+fib[i-2];
    }
    return a[x];
}
int main(){
    
    fib[1] = 0;
    fib[2] = 1;
    for(int i = 3;i<=100;i++){
        fib[i] = fib[i-1]+fib[i-2];
    }
    int k;cin>>k;
    while(k--){
        int x;cin>>x;

        int ans1 = force_fib(x);
        int ans2 = memory_fib(x);
        cout<<ans1<<endl<<ans2<<endl;
    }
}