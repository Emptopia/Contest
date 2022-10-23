#include<iostream>
using namespace std;
#include<vector>

int main()
{
	int n;

	cin >> n;
	vector<int>nums(n);
	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}
	int res = nums[0];
	int temp = nums[0];
	for (int i = 1; i < n; i++)
	{
		if (temp > 0)
			temp += nums[i];
		else
			temp = nums[i];
		res = max(temp, res);

	}
	cout << res << endl;
	system("pause");
	return 0;
}