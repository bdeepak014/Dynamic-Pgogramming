#include<iostream>
using namespace std;
int min(int x,int y,int z)
{
	if(x <= y && x <= z)
	return x;
	else if(y <= z && y <= x)
	return y;
	return z;
}
int min(int x,int y)
{
	if(x >= y)
	return y;
	return x;
}
int func(int n)
{
	if(n == 1)
	return 0;
	else if(n%3 == 0 && n%2 == 0)
	return 1 + min(func(n/3),func(n/2),func(n-1));
	else if(n%3 != 0 && n%2 == 0)
	return 1 + min(func(n/2),func(n-1));
	else if(n%2 != 0 && n%3 == 0)
	return 1 + min(func(n/3),func(n-1));
	else 
	return 1 + func(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<"Min Steps : "<<func(n);
}
