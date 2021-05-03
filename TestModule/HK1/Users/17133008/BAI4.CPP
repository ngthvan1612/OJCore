#include<stdio.h>
#include<math.h>
int KTNT(int n){
	if(n<2)
		return 0;
	else
		for(int i=2;i<=sqrt((float)n);i++)
			if(n%i==0)
				return 0;
			return 1;
}
int main()
{
	int m,n,row,col,s=0, row_ind=0,col_ind=0;
	scanf("%d%d",&m,&n);
	int row_arr[100];
	int mat[100][100];
	for(row=0;row<m;row++)
	{
		for(col=0;col<n;col++)
			scanf("%d",&mat[row][col]);
	}
	int z=0;
	for(row=0;row<m;row++)
	{
		s=0;
		for(col=0;col<n;col++)
		{
			if(KTNT(mat[row][col])==1)
				s+=mat[row][col];
		}
		printf("%d\n",s);
		row_arr[z++]=s;

		
	}
	int temp_row=row_arr[0];
	for(int i=1;i<m;i++)
	{
		if(temp_row<row_arr[i])
		{
			temp_row=row_arr[i];
			
		}
		printf("%d",row_arr[i]);
		
	}
}