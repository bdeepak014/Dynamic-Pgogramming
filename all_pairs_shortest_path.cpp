#include<iostream>
using namespace std;
void func(int **mat,int n)
{
for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
               if ((mat[j][i] + mat[i][k]) < mat[j][k])
      	            mat[j][k] = mat[j][i] + mat[i][k];
            }
        }
    }
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j < n;j++)
		{
			cout<<mat[i][j]<<" ";			
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"Enter No. of Nodes : ";
	cin>>n;
	int **mat = new int*[n];
	for(int i = 0;i<n;i++)
	mat[i] = new int[n];
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			if(i == j)
			mat[i][j] = 0;
			else
			mat[i][j] = 9999;
		}
		
	}
	cout<<"Enter No. of Vertex : ";
	int t;
	cin>>t;
	cout<<"Enter Vertices and distance : "<<endl;
	int x,y,z;
	for(int i = 0; i < t; i++)
	{
		cin>>x>>y>>z;
		mat[x-1][y-1] = z;
	}
	func(mat,n);
}
