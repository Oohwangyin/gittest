#include<iostream>
using namespace std;

const int N=2e5 + 7;//2*10��5�η�+7
long long dp[N];//��¼��i��λ�÷���Ҫ��ļ�¼��
int a[N];
int stk[N];//��ջ����¼���Ҳ�1��λ��
//int main() {
//	int n; cin >> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	int top = 0;
//	for (int i = 1; i <= n; i++) 
//	{
//		if (a[i] == 1)
//			stk[++top] = i;
//		else if (top)
//			dp[i] = dp[stk[top--] - 1] + 1;
//	}
//	long long ans = 0;
//	for (int i = 1; i <= n; i++) 
//	{
//		ans += dp[i];
//	}
//	cout << ans << endl;
//	return 0;
//}