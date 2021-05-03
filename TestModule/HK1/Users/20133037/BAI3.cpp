#include<stdio.h>
int Xuli(int A[],int n);

void main()
{
	int A[100],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
	int kq=Xuli(A,n);
	printf("%d",kq);
}
int Xuli(int A[],int n)
{
	int vitri=0;
	int dem=0;
	for(int i=1;i<n-1;i++)
	{
		if(A[i+1]%2==0&&A[i]%2!=0&&A[i+1]%2==0) //thoan chan
		{
			dem++;
			i++;
		}
		else if(A[i+1]%2==0&&A[i]%2!=0&&A[i+1]==0)// thoa le
		{
			dem++;
			i++;
		}
		else 
		{
			dem=0;
			vitri=i+1;
			break;
		}
	}
	if(dem==0)
		return vitri;
	return -1;
}