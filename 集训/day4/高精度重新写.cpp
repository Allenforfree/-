#include<iostream>
using namespace std;
string add(string a,string b){
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int jw = 0;
    string ans = "";
    for(int i = 0;i<max(a.size(),b.size());i++){
        int num1 = 0,num2 = 0;
        if(i<a.size())num1 += a[i]-'0';//如果当前位置小雨字符串a的长度,去除a的第i位数字
        if(i<b.size())num2 += b[i]-'0';//如果当前位置小雨字符串b的长度,去除b的第i位数字
        int now = num1+num2+jw;
        ans+=char(now%10+'0');
        if(now>=10)jw = 1;
        else jw = 0;
        
    }
    if(jw==1)ans+=char(jw+'0');
    reverse(ans.begin(),ans.end());
    return ans;
}
bool cmp(string a,string b){
    if(a.size()!=b.size())return a.size()>b.size();
    for(int i = 0;i<a.size();i++){
        if(a[i]!=b[i])return a[i]>b[i];
    }
    return true;
}
string sub(string a,string b){
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int jw = 0;
    string ans = "";
    for(int i = 0;i<a.size();i++){
        int num1 = 0,num2 = 0;
        if(a.size())num1 = a[i]-'0';
        if(b.size())num2 = b[i]-'0';
        int now = num1-num2-jw;
        if(now>0)ans+=char(10+now+'0');
        else ans+=char(now+'0');
    }
}
string mul(string a,int b){
    reverse(a.begin(),a.end());
    int jw = 0;
    string ans = "";
    for(int i = 0;i<a.size();i++){
        int num1 = a[i]-'0';
        int now = num1*b+jw;
        ans+=char(now%10+'0');
        jw = now/10;
    }
    while(jw){
        ans+=char(jw%10+'0');
        jw/=10;
    }
    reverse(ans.begin(),ans.end())
    while(ans.size>1&&ans[0]=='0')ans.erase(0,1);
    return ans;
}
int main(){

    return 0;
}