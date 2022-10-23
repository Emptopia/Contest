#include<iostream>
using namespace std;
#include<vector>

//这里temp和res直接存在外面就行了，不用作为参数存进去
//vector<int>temp
//vector<vector<int>>res
void recur(vector<int>temp, int k,int sum,int tar, vector<vector<int>>&res)
{
	if (temp.size()>10 || sum > tar)
		return;
	if (sum == tar && temp.size()==10)
	{
		res.push_back(temp);
	}
	int re = sum;
	vector<int>tp = temp;
	sum += 1;
	temp.push_back(1);
	recur(temp, 1,sum,tar,  res);

	sum = re + 2;
	temp = tp;
	temp.push_back(2);
	recur(temp, 2, sum, tar,  res);

	sum = re + 3;
	temp = tp;
	temp.push_back(3);
	recur(temp, 3, sum, tar,  res);
}

int main()
{
	vector<vector<int>>res;
	int tar;
	cin >> tar;
	vector<vector<int>>nums;
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			for (int k = 1; k <= 3; k++)
			{
				if (i + 2 * j + 3 * k == tar)
				{
					nums.push_back({ i,j,k });
				}
			}
		}
	}
	int count = 0;
	vector<int>temp = { 1 };
	recur(temp, 1, 1, tar, res);
	temp = { 2 };

	recur(temp, 2, 2, tar, res);
	temp = { 3 };

	recur(temp, 3, 3, tar, res);

	cout << res.size() << endl;
	for (auto it = res.begin(); it != res.end(); it++)
	{
		for (auto itt = it->begin(); itt != it->end(); itt++)
		{
			cout << *itt << " ";
		}
		cout << endl;
	}



	system("pause");
	return 0;
}