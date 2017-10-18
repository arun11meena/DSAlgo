// Program to print all squares less then n.

#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,i;
		cin >> n;
		for(i=1;i<n;i++)
		{
			cout << (i*i) << endl;
		}
	}
	return 0;

}
