
//5. WAP to find square root of given numbers from array elements.

#include<iostream>
using namespace std;

int main()
{
	int n,i,j;
	cout << "enter n";
	cin >> n;
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		cout << "a["<< i <<"]";
		cin >> a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<a[i];j++)
		{
	
			{
				cout << "A["<< i <<"]:  "<<j <<"\n";
			}
		}
	}
}
