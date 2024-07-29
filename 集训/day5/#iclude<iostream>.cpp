#include <iostream>
using namespace std;
const int N = 1e6 + 10;
int n, m;
int a[N];
int main() {
	cout << "请你输入要查找的数：";
	int x;
	cin >> x;
	cout << "请你输入要猜的数所在的范围：";
	int left, right;
	cin >> left >> right;
	while(left <= right) {
		int mid = left + (right - left) / 2;
		cout << "我猜当前的数是：" << mid << "  ";
		if(mid == x) {
			cout << "恭喜你，猜对啦！！！";
			return 0;
		} else if(mid > x) {
			right = mid - 1;
			cout << "你说：猜大了" << endl;
		} else {
			left = mid + 1;
			cout << "你说：猜小了" << endl;
		}
	}
	cout << "/(ㄒoㄒ)/~~你的数不在猜数范围" << endl;

	return 0;
}