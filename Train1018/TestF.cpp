#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<queue>
int main()
{
	int n;
	cin >> n;
	priority_queue<int>q;			//���ȶ��У�����topΪ�����
	int temp;
	for (int i = 0; i < n; i++)
	{

		cin >> temp;
		q.push(-temp);			//�Ӹ�����ʹ����topΪ��С���ĸ���
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