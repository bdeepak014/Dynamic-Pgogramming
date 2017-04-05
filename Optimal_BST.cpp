#include<iostream>
#include<climits>
using namespace std;
int func(int freq[],int i,int j)
{
	if(i > j)
	return 0;
	
	if(i == j)
	return freq[i];
	
	int sum = 0;
	for(int k = i;k<=j;k++)
	{
		sum = sum + freq[k];
	}
	
	int min = INT_MAX;
	int cost = 0;
	for(int k = i;k<=j;k++)
	{
		cost = func(freq,i,k-1) + func(freq,k+1,j);
		if(min > cost)
		min = cost;
	}
	
	return sum + min;
	
}
int main ()
{
	int n;
	cout<<"Enter Elements : ";
	cin>>n;
	int val[n];
	cout<<"Enter Values : ";
	for(int i= 0 ;i<n;i++)
	{
		cin>>val[i];
	}
	cout<<"Enter Frequency : ";
	int freq[n];
	for(int i = 0;i<n;i++)
	{
		cin>>freq[i];
	}
	cout<<"Min Cost : "<<func(freq,0,n-1);
}
