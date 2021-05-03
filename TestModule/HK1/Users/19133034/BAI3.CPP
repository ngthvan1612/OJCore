#include <stdio.h>
void main()
{
	int A[100],n;
	scanf("%d",&n);
	int i;
	int count=0;
	int kq=0;
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	for(i=0;i<n;i=i+2)
	{
		
		
		if(A[i]%2==0&&A[i+1]%2!=0)
		{
			count++;
		}
		
	

		
		 else if(A[i]%2!=0&&A[i+1]%2==0) 
		{
				count++;
		}
		else 
			{
				count=0;
				kq=kq+(i+2);
				break;
			}
		
		
	}
	if( count!=0)
		printf("-1");
	else if("%d",kq);
	
}
