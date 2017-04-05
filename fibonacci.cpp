#include<iostream>
using namespace std;
/*int fab(int n)
{
	int arr[n+1] ={0};
	arr[0] = 0;
	arr[1] = 1;
	for(int i=2;i<=n;i++)
	{
		arr[i] = arr[i-1] + arr[i-2];
	}
	return arr[n];
}*/
int fab_less_memory(int n)
{
	int a = 0;
	int b = 1;
	int c = b;
	for(int i = 2;i<=n;i++)
	{
		c = a+b;
		a = b;
		b = c;
	}
	return c;
}
/*int arr[100] = {0};
int fab_rec(int n)
{
	if(arr[n] > 0)
	return arr[n];
	if(n <= 1)
	return n;
	arr[n]  = fab_rec(n-1) + fab_rec(n-2);
	return arr[n];
}*/
int main()
{
	int n;
	cin>>n;
//	cout<<fab(n);
	cout<<fab_less_memory(n);
//	cout<<fab_rec(n);
}
