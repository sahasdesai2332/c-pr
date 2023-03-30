//. WAP to find factorial of all elements from given arrayusing inline function.

#include<iostream>

using namespace std;

inline fact(){
 int f=1;
 while(n>=1)
 {
 	f=f*n;
 	n--;
 }	
 return f;
}

main()
{
	int n,i,a[n];
	
	cout<<"enter size of arry :";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout <<"enter elements of arry";
		cin >>a[i];
	}
	for(i=0;i<n;i++)
	{
		cout <<fact(a[i])<<" ";
		
	}
}
	
