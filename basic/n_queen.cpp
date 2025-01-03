#include<bits/stdc++.h>
using namespace std;

bool canPlace(int board[][100],int row, int col,int n)
{
	int i,j;
	for(i=0;i<col;i++)
	{
		if(board[row][i]==1)
		{
			return false;
		}
	}

	for(i=0;i<row;i++)
	{
		if(board[i][col]==1)
		{
			return false;
		}
	}
	i=row,j=col;
	while(i>=0&&j>=0)
	{
		if(board[i][j]==1)
		{
			return false;
		}
		i--;j--;
	}
	i=row,j=col;
	while(i>=0&&j<n)
	{
		if(board[i][j]==1)
		{
			return false;
		}
		i--;j++;
	}
	return true;
}

bool solve(int board[][100],int row,int n)
{
	if(row==n)
	{
		for (int x = 0; x < n; x++)
		{
			for (int y = 0; y < n; y++)
			{
				cout<<board[x][y]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}

	for(int pos=0;pos<n;pos++)      
	{
		if(canPlace(board,row,pos,n))
		{
			board[row][pos]=1;
			bool next = solve(board,row+1,n);
			if(next==true)
			{
				return true;
			}
			board[row][pos]=0;
		}

	}
	return false;
}
int main()
{
	int n;
	int board[100][100]={0};

	cin>>n;
	solve(board,0,n);
	

	return 0;
}