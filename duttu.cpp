#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout << "Enter a number upto which u need natural numbers: ";
	cin >> n;
	cout << "The natural numbers from 1 to " << n <<  " are: " << endl;
	for(i=1;i<=n;i++)
	{
		cout << i << endl;
	}
	return 0;
}
