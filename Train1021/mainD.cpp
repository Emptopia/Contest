#include<iostream>
using namespace std;
#include<vector>

int main()
{
	//�������ֱ�Ӽ���abs �� nums[i]��
	int n;
	cin >> n;
	vector<int>nums(n);
	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}
	long long  res = nums[0];
	for (int i = 1; i < n; i++)
	{
		if (nums[i] > 0)
			res += nums[i];
		else
			res -= nums[i];
	}
	cout << res << endl;

	system("pause");
	return 0;
}