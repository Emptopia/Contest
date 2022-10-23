#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<queue>
int main()
{
	int n;
	cin >> n;
	priority_queue<int>q;			//优先队列，队列top为最大数
	int temp;
	for (int i = 0; i < n; i++)
	{

		cin >> temp;
		q.push(-temp);			//加负数，使队列top为最小数的负数
	}
	int sum = 0;
	while (q.size() != 1)
	{
		int a = q.top();
		q.pop();
		int b = q.top();
		q.pop();
		temp = -(a + b);
		q.push(-temp);
		sum += temp;
	}
	cout << sum << endl;


	system("pause");
	return 0;
}