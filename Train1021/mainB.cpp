#include<iostream>
using namespace std;
#include<math.h>


int main()
{
	int n, m, count = 0;
	cin >> n;
	cin >> m;
	cout << (int)pow(n, 1.0 / m);		//n的1/m次方就是		n开m次方

	system("pause");
	return 0;
}