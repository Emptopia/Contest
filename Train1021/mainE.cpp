#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<queue>
int main()
{
	//�������ֱ����map<int,int>�Զ�����洢
	priority_queue<int>q;
	unordered_map<int, int>m;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		q.push(-temp);
		m[temp]++;
	}
	while(!q.empty())
	{
		int temp = -q.top();
		while (!q.empty() && q.top() == -temp)
		{
			q.pop();
		}
		cout << temp << " " << m[temp] << endl;
	}
	system("pause");
	return 0;
}