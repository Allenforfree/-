#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;cin>>n;
    vector<string>ans;
    for(int i = 0;i<(1<<n);i++){
        string fh;
        for(int j = 0;j<n;j++){
            if(i&(1<<j))fh+='Y';
            else fh+='N';
        }
        ans.push_back(fh);
    }
    sort(ans.begin(),ans.end());
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<"\n";
    }
    return 0;
}