#include<stdio.h>
#include<math.h>


int kiemTra(int A[200],int n)
{
	int vitri;
	for (int j=0;j<n;j++)
	{
		if (A[j]%2==0&&A[j+1]%2==1||(A[j]%2==1&&A[j+1]%2==0))
		{
				vitri = -1;
			
		}
		else
			if ((j+1)==n)
			vitri=-1;
	
		else 
		{
			vitri = j+1;
			break;
		}
		
	}
	return vitri;
}
void main()
{
	int n;
	int A[200];
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("%d",kiemTra(A,n));

}