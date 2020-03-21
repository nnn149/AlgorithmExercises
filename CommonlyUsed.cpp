#include <string>
#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <cmath>
#include <sstream>
using namespace std;

//���Ӵ�С���� 
struct Rule1{
	bool operator()(const int & a1,const int & a2) const{
		//��a1Ӧ����a2ǰ�棬����true�� ���򷵻�false; 
		return a1>a2;
	}
};

int main(){
	int n,m;
	cin >> n,m; 
	//��ӡС������ 
	printf("%.4f",n);
	
	//vector
	vector<int> vi(n,0);
	//vector ����
	//�Ƿ��
	vi.empty();
	//���
	vi.clear(); 
	//���� 
	vi.insert(vi.begin(),1000);
	//ɾ�� 
	vi.erase(vi.begin(),vi.begin()+3); 
	//��ά���� n��m�� 
	vector<vector<int> > v(n,vector<int>(m,0));
	
	//stack
	stack<int> st;
	// �Ƴ�ջ��Ԫ��
	st.pop();
	//��ջ������Ԫ��
	st.push(1);
	//����ջ��Ԫ��
	st.top();
	//����
	while(!st.empty()){
		cout << st.top();
		st.pop();
	} 
	 
	 
	//����
	int a[]={12,45,3,98,21,7}; 
	//��С���� 
	sort(a,a+sizeof(a)/sizeof(int));
	//�Ӵ�С 
	sort(a,a+sizeof(a)/sizeof(int),Rule1());
	//�Ӵ�С2 ����greater<T>()������less<T>()
	sort(a,a+sizeof(a)/sizeof(int),greater<int>());
	
	//���ֲ���
	binary_search(a,a+6,12); 
	binary_search(a,a+6,8,Rule1());
	binary_search(vi.begin(),vi.end(),1);
	
	
	//����ת��
	stringstream ss;
	string str;
	ss << n;
	ss >> str;
	ss.clear();
	//��ȡ�ַ��� ���㳤��2 
	str.substr(0,2); 
	
	//��ת 
	reverse(str.begin(),str.end());
	
	//ƽ��  n�����η� 
	pow(n,3);
	//����ֵ
	abs(n);
	
	//����
	long long ll;
	cin >> ll;
	cout << ll;
	scanf("%I64d", &ll); 
	printf("%I64d", ll);
	
	
	return 0;
} 
