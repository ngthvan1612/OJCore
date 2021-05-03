#include<stdio.h>
void HamXacDinh(int A[], int n);
int loai(int a);
void main()
{
	int n;
	int A[100];
	scanf("%d", &n);
	for (int i = 0; i<n;i++)
		scanf("%d",&A[i]);
	HamXacDinh(A,n);
	//printf("-1");

}
void HamXacDinh(int A[], int n)
{
	int kq =-1;
	if(loai(A[0])==1)
	{
		for(int i =0; i<n-1; i=i+2)
		{
			if(loai(A[i])==1)
				printf("");
					
			else
			{
				kq = i;
				break;
				}
			if(loai(A[i+1])==0)
				printf("");
					
			else
			{
				kq = i;
				break;
		}}
	}
	else
		for(int i =0; i<n-1; i=i+2)
		{
			if(loai(A[i])==0)
				printf("");
					
			else
			{
				kq = i;
				break;
				}
			if(loai(A[i+1])==1)
				printf("");
					
			else
			{
				kq = i;
				break;
				}


		}
		/*for(int i =0; i<n-1; i=i+2)
		{			
			if((A[i]%2)!=0)
				kq= kq;
			else
			{
				kq=i;
				printf("%d", kq);
				break;
			}
			if((A[i]%2)==0)
				kq= kq;
			else
			{
				kq=i;
				printf("%d", kq);
				break;
			}}*/



		
	printf("%d", kq);
	
}
int loai(int a)
{
	if(a%2==0)
		return 1;
	else
		return 0;
}
