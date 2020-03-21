#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <cmath>
#include <sstream>
using namespace std;

//按从大到小排序 
struct Rule1{
	bool operator()(const int & a1,const int & a2) const{
		//若a1应该在a2前面，返回true。 否则返回false; 
		return a1>a2;
	}
};

int main(){
	int n,m;
	cin >> n,m; 
	//打印小数精度 
	printf("%.4f",n);
	
	//vector
	vector<int> vi(n,0);
	//vector 操作
	//是否空
	vi.empty();
	//情况
	vi.clear(); 
	//插入 
	vi.insert(vi.begin(),1000);
	//删除 
	vi.erase(vi.begin(),vi.begin()+3); 
	//二维数组 n行m列 
	vector<vector<int> > v(n,vector<int>(m,0));
	
	//stack
	stack<int> st;
	// 移除栈顶元素
	st.pop();
	//在栈顶增加元素
	st.push(1);
	//返回栈顶元素
	st.top();
	//遍历
	while(!st.empty()){
		cout << st.top();
		st.pop();
	} 
	 
	 
	//排序
	int a[]={12,45,3,98,21,7}; 
	//从小到大 
	sort(a,a+sizeof(a)/sizeof(int));
	//从大到小 
	sort(a,a+sizeof(a)/sizeof(int),Rule1());
	//从大到小2 降序greater<T>()，升序less<T>()
	sort(a,a+sizeof(a)/sizeof(int),greater<int>());
	
	//二分查找
	binary_search(a,a+6,12); 
	binary_search(a,a+6,8,Rule1());
	binary_search(vi.begin(),vi.end(),1);
	
	
	//类型转换
	stringstream ss;
	string str;
	ss << n;
	ss >> str;
	ss.clear();
	//截取字符串 从零长度2 
	str.substr(0,2); 
	
	//翻转 
	reverse(str.begin(),str.end());
	
	//平方  n的三次方 
	pow(n,3);
	//绝对值
	abs(n);
	
	//大数
	long long ll;
	cin >> ll;
	cout << ll;
	scanf("%I64d", &ll); 
	printf("%I64d", ll);
	
	
	return 0;
} 
