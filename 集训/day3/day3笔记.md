```cpp
#include <bits/stdc++.h>
using namespace std;
int s[1000005];//定义栈数组
int top=0;//定义栈顶数
void push(int x){
	s[++top]=x;
}//入栈
void pop (){
	if(top>0) top--;
}//出栈
int ding(){
	return s[top];
}//获知栈顶元素
int pd(){
	if(top>=1){
		return 1;
	}else{
		return 0;
	}//判断栈是否为空
}
int size(){
	return top;
}//获知栈的大小(高度)
int main(){
	
	return 0;
} 

```



比赛的第一题:[小可参加特殊拍卖会](https://kedaoi.cn/d/SummerCamp24/p/719?tid=66a4b77518da57222f401536)

这一道题其实要用结构体排序来解决,但是我用的最简单的方法,不需要动脑子

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>a(n+1);//用vector的原因是在使用sort的时候会简单一些
    vector<int>b(n+1);
    for(int i = 1;i<=n;i++){
        cin>>a[i];//输入数组
        b[i] = a[i];//然后把a数组赋值给b数组
    }
    sort(a.begin(),a.end());//将a数组进行排序,这个时候b数组就有价值了
    
    int num = a[n];//将最大的记录一下
    int count = 0;//这个变量用于记录索引
    for(int i = 1;i<=n;i++){
        count++;//每一个循环,count就加上一
        if(num==b[i]){//直到找到原数组中最大的数为止
            break;
        }
    }
    cout<<count<<" "<<a[n-1];//输出最大的数在原数组中的索引,再输出第二大的数
    return 0;
}
```

第二题:[小可爱拼字符串](https://kedaoi.cn/d/SummerCamp24/p/504?tid=66a4b77518da57222f401536)

这一道题和打印*三角形的核心代码是很像的,不废话,上代码:

```cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    char c;cin>>c;
    int n;cin>>n;
    for(int i = 1;i<=n;i++){//基本是一样的代码
        for(int j = 1;j<=i;j++){
            cout<<c;
        }
        if(i!=0)
            cout<<s<<endl;
    }

    return 0;
}
```

第三题:[栈的练习](https://kedaoi.cn/d/SummerCamp24/p/720?tid=66a4b77518da57222f401536)

这道题其实就是最简单的栈的处理,没什么好讲的

```cpp
#include<bits/stdc++.h> 
using namespace std; 
stack<int> stk; 

int main(){
    int n; // 定义变量n，用于存储接下来要进行的操作次数
    cin >> n; // 输入操作次数
    int x; // 定义变量x，用于存储当执行'k'操作时输入的元素值
    char op; // 定义变量op，用于存储每次操作的指令
    for(int i = 0; i < n; i++){ // 循环n次，执行n次操作
        cin >> op; // 输入当前操作的指令
        if(op == 'k'){ // 如果操作指令为'k'，表示要将一个元素压入栈中
            cin >> x; // 输入要压入栈中的元素值
            stk.push(x); // 将元素x压入栈中
        }else if(op == 'e'){ // 如果操作指令为'e'，表示要弹出栈顶元素
            if(stk.empty()){ // 判断栈是否为空
                cout << "keda" << endl; // 如果栈为空，则输出"keda"
            }else{
                stk.pop(); // 如果栈不为空，则弹出栈顶元素
            }
        }else if(op == 'd'){ // 如果操作指令为'd'，表示要查看栈顶元素的值
            if(stk.empty()){ // 判断栈是否为空
                cout << "keda" << endl; // 如果栈为空，则输出"keda"
            }else{
                cout << stk.top() << endl; // 如果栈不为空，则输出栈顶元素的值
            }
        }else if(op == 'a'){ // 如果操作指令为'a'，就判断栈是否为空
            if(stk.empty()){ 
                cout << "da" << endl; // 如果栈为空，则输出"da"
            }else{
                cout << "ke" << endl; // 如果栈不为空，则输出"ke"
            }
        }
    }
    return 0; 
}
```



第四题:[ 小小"栈"](https://kedaoi.cn/d/SummerCamp24/p/722?tid=66a4b77518da57222f401536):

当时比赛我就只有这道题没有ac,要是ac了,我就成功ak了😭

```cpp
#include<bits/stdc++.h> 
using namespace std; 

stack<int> stk; // 定义一个整型栈，但这里存储的是字符的ASCII码值

int main(){
    string s; // 定义一个字符串变量s，用于存储输入的字符串
    cin >> s; // 从标准输入读取字符串s

    // 遍历字符串s中的每个字符
    for(int i = 0; i < s.size(); i++){
        stk.push(s[i]); // 将当前字符（以ASCII码值的形式）压入栈中

        // 当栈中至少有两个元素时，进行特殊处理
        while(stk.size() >= 2){
            char x = stk.top(); stk.pop(); // 弹出栈顶元素，并存储在变量x中
            char y = stk.top(); stk.pop(); // 再次弹出栈顶元素（即原来的次顶元素），并存储在变量y中

            // 根据x和y的值进行条件判断
            if(x == 'S' && y == 'S'){
                // 如果x和y都是大写'S'，但根据题目逻辑这里并未进行任何操作，可能是遗漏了处理逻辑
            }else if(x == 's' && y == 's'){
                // 如果x和y都是小写's'，则将一个大写'S'压入栈中
                stk.push('S');
            }else{
                // 如果x和y不是两个'S'（不论大小写），则将它们重新压回栈中，并保持原有的顺序
                stk.push(y);
                stk.push(x);
                break; // 跳出内层循环，继续处理下一个输入字符
            }
        }
    }

    // 构建答案字符串
    string ans = "";
    while(stk.size()){
        ans += stk.top(); // 将栈顶元素（以ASCII码值的形式）添加到答案字符串ans的末尾
        stk.pop(); // 弹出栈顶元素
    }

    // 由于栈是后进先出的数据结构，所以最后得到的字符串是反的，需要反转
    reverse(ans.begin(), ans.end());

    // 输出最终的答案字符串
    cout << ans;

    return 0; // 程序正常结束
}
```

第五题:[小可初识常见数学公式](https://kedaoi.cn/d/SummerCamp24/p/497?tid=66a4b77518da57222f401536)

这一道题我差一点就没有ac,因为这道题的数据可能有一点大,要开long long才可以

```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
    #define int long long//我补救的手笔
    int op;cin>>op;
    int m,n;cin>>m>>n;
    int sum = 1,num = 1,ans = 1;
    int result = 0;
for(int i = 1;i<=n;i++){
            sum*=i;  
}
for(int j = 1;j<=n-m;j++){
        num*=j;
}
for(int k = 1;k<=m;k++){
    ans*=k;
}
int cnt = 0;
    if(op==1){
        for(int i = m;i<=n;i++){
            cnt+=i;
            result = cnt;
        }
    }else if(op==2){
        sum = 1;
        for(int i = m;i<=n;i++){
            sum*=i;
        }
        result = sum;
    }else if(op==3){
        result = sum/num;
    }else if(op==4){
        result = sum/(ans*num);
    }
    cout<<result<<"\n";
    return 0;
}
```

这一道题真的没有什么好讲的,就按照题目上面的做就对了