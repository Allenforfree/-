#include<iostream>
using namespace std;


const int maxn = 10;
int a[maxn],n,to[101];


void count(int a[],int v){
    for(int i = 0;i<n;i++){
        to[a[i]]++;
    }

    for(int i = 0;i<v;i++){

        if(to[i]>0)cout<<to[i]<<endl;
    }
}

int main(){ 
    cin>>n;
    int v;cin>>v;
    for(int i= 0;i<n;i++){
        cin>>a[i];
    }

    count(a,v);
    return 0;
}