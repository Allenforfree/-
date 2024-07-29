#include<bits/stdc++.h> 
using namespace std; 
const int maxn = 3e5+5; 
string op(string a,string b){ 
    reverse(a.begin(),a.end()); 
    reverse(b.begin(),b.end()); 
    int jw = 0; string ans = ""; 
    for(int i= 0;i<max(a.size(),b.size());i++){ 
        int num1 = 0,num2 = 0; 
        if(i<a.size()) num1 = a[i]-'0'; 
        if(i<b.size()) num2 = b[i]-'0'; 
        int now = num1+num2+jw; 
        ans+=char(now%10+'0'); 
        if(now>=10) jw = 1; else jw = 0; 
    }
    if(jw==1) ans+=char(jw+'0');
    reverse(ans.begin(),ans.end());
    return ans;
}
string mul(string a,int b){ 
    reverse(a.begin(),a.end()); 
    int jw = 0; string ans = ""; 
    for(int i = 0;i<a.size();i++){ 
        int num1 = a[i]-'0'; 
        int now = num1*b+jw; 
        ans+=char(now%10+'0'); 
        jw = now/10; }
        while(jw){ 
            ans+=char(jw%10+'0'); 
            jw/=10;
        }
        reverse(ans.begin(),ans.end()); 
        while(ans.size()>1 && ans[0]=='0') 
        ans.erase(0,1); 
        return ans; 
} 
string a[maxn]; 
int main(){ 
    int n; 
    cin>>n; 
    a[1] = '0'; 
    a[2] = '1'; 
    a[3] = '1'; 
    for(int i = 4;i<=n;i++){ 
        string h = mul(a[i-2],2); 
        string k = op(a[i-3],h); 
        a[i] = op(k,a[i-1]); 
        } 
        cout<<a[n]; 
    return 0; 
}