#include<iostream>
using namespace std;
const int maxn = 2e5;
int a[maxn];
bool check1(int mid, int x) {
    return a[mid] >= x;
}
bool check2(int mid,int x){
    return a[mid] > x;
}
// 模版1,把区间[l,r]划分成[l,mid]和[mid+1,r]其更新操作时r=mid或者l=mid+1;
int search1(int left, int right, int x) { // 参数代表了左边界,右边界,查找的值
    while (left < right) {
        // 得到中间值
        int mid = (left + right) / 2;
        if (check1(mid, x)) {
            right = mid; // 如果中间值满足条件，则调整右边界
        } else {
            left = mid + 1; // 否则调整左边界
        }
    }
    return left; // 循环结束时，left == right，为符合条件的左边界
}

// 模版2
// 把区间[l,r]划分为[l,mid-1]和[mid,r]时,其更新操作时r = mid,或者l=mid
int search2(int left, int right, int x) {
    while (left < right) {
        int mid = (left + right + 1) / 2; // 防止left和right过大时相加溢出
        if (check2(mid, x)) {
            right = mid - 1; // 如果中间值满足条件，则调整右边界为mid-1
        } else {
            left = mid; // 否则调整左边界为mid
        }
    }
    return left; // 循环结束时，left == right，为符合条件的左边界
}int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1;i<=n; ++i) {
        cin >> a[i];
    }
    while(m--){
        int x;
        cin>>x;
        int l1 = search1(1, n, x);
        if(a[l1] == x) cout<<l1<<' ';
        else cout<<"-1 ";
    }
    return 0;
}