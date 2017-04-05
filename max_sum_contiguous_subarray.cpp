#include<iostream>
using namespace std;
int func(int n,int arr[])
{
	int res = INT_MIN;
	int seq = 0;
	for(int i = 0;i<n;i++)
	{
		seq = seq + arr[i];
		if(res <= seq)
		res = seq;
		if(seq < 0)
		seq = 0;
	}
	return res;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<func(n,arr);
}
