#include<bits/stdc++.h>
#define mod 1000000007
#define fr(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define pb push_back
#define pbo pop_back
#define all(v) v.begin(),v.end()
using namespace std;
vector<vector<int>> sorting(vector<vector<int>>matrix,int col)
{
	sort(matrix.begin(),matrix.end(),[col](const vector<int>&a,const vector<int>&b)
		{return a[col]<b[col];});
	return matrix;
}
vector<vector<int>> mat(int row,int col)
{
	vector<vector<int>>matrix(row,vector<int>(col));
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			matrix[i][j]=rand()%100;
		}
	}
	return matrix;
}
int main()
{
	int row;
	int col;
	cin>>row>>col;
	int col_index_sort;
	cin>>col_index_sort;
	vector<vector<int>>matrix=mat(row,col);
	matrix=sorting(matrix,col_index_sort);
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}