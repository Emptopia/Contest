#include<iostream>
using namespace std;
#include<math.h>
#include<string>

int main()
{
	string s;
	getline(cin, s);
	string win = "\\r\\n";
	string linux = "\\n";
	string mac = "\\r";
	if (s.find(win) == -1)
	{
		if (s.find(linux) == -1)
		{
			cout << "mac" << endl;
		}
		else
		{
			cout << "linux" << endl;
		}
	}
	else
	{
		cout << "windows" << endl;
	}
	system("pause");
	return 0;
}