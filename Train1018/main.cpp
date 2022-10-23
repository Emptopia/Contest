#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void MySort()
{
	vector<int>nums(3);
	char let1, let2, let3;
	cin >> nums[0] >> nums[1] >> nums[2];
	cin >> let1 >> let2 >> let3;
	sort(nums.begin(), nums.end());
	if (let1 == 'A')
	{
		cout << nums[0] << " ";
		if (let2 == 'B')
		{
			cout << nums[1] << " " << nums[2];
		}
		else
		{
			cout << nums[2] << " " << nums[1];

		}
	}
	else if (let1 == 'B')
	{
		cout << nums[1] << " ";
		if (let2 == 'A')
		{
			cout << nums[0] << " " << nums[2];
		}
		else
		{
			cout << nums[2] << " " << nums[0];

		}
	}
	else
	{
		cout << nums[2] << " ";
		if (let2 == 'A')
		{
			cout << nums[0] << " " << nums[1];
		}
		else
		{
			cout << nums[1] << " " << nums[0];

		}
	}


}

void MyPeach()
{
	int days;
	cin >> days;
	int res = 1;
	for (int i = 1; i < days; i++)
	{
		
		res++;
		res = res * 2;
	}
	cout << res << endl;
}

void UseStone()
{
	int n;
	long long res = 0;			//注意求和用 long long 防止越界
	cin >> n;
	vector<int>a(n);
	for (int i = 0; i < a.size(); i++)
	{
		cin >> a[i];
		res += a[i];
	}
	if (res % 2 == 1)
		cout << "Alice" << endl;
	else
		cout << "Bob" << endl;

}

struct Birth
{
	string name;
	int year;
	int month;
	int day;
}f[105];

bool cmp(Birth a, Birth b)
{
	if (a.year < b.year)return 1;			//排序规则，return 1 则表示 a>b ，b排前面
	else if (a.year > b.year) return 0;
	if (a.month < b.month)return 1;
	else if (a.month > b.month) return 0;
	if (a.day <= b.day)return 1;					//这里错了，还需要cin一个num代表输入顺序
	else return 0;
}

void BirthSort()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> f[i].name >> f[i].year >> f[i].month >> f[i].day;
	}
	sort(f,f+n, cmp);
	for (int i = 0; i < n; i++)
	{
		cout << f[i].name << endl;
	}

}

int main()
{
	//MySort();
	//MyPeach();
	//UseStone();
	BirthSort();
	return 0;
}

