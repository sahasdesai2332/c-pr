
//2. WAP to find leap years from 2000 to 3000.

#include<iostream>

using namespace std;

main()
{
	int a[100];
	int i;
	int j;
	
	cout<<"leap years";
	for(i=2000;i<=3000;i++,j++)
	{
		a[j]=i;
		if(a[j]%4==0)
		{
			cout<<a[j]<<endl;
		}
			}
}
