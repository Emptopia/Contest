#include<iostream>
using namespace std;
#include<vector>



int main()
{
	int n;
	cin >> n;
	vector<vector<int>>N;
	for (int i = 0; i < n; i++)
	{
		int len;
		cin >> len;
		vector<int>nums = {};
		int x;
		for (int j = 0; j < len; j++)
		{
			cin >> x;
			nums.push_back(x);
		}
		N.push_back(nums);

	}

	for(int i = 0; i < n; i++)
	{

		int count = 0;
		for (int n = 0; n < N[i].size(); n++)
		{
			if (N[i][n] == 0)
			{
				count++;
				N[i][n]++;
			}
		}
		cout << N[i].size() - count << endl;
		for (int m = 0; m < N[i].size(); m++)
		{
			cout << N[i][m] << " ";
		}
		cout << endl;
	}



	system("pause");
	return 0;
}