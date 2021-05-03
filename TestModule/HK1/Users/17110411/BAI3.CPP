#include<stdio.h>
#define size 101

void nhap(int A[], int &n)
{
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &A[i]);
	}
}

void kiemTraChanLe(int A[], int n)
{
	int vt=-1;
	for(int i=1; i<n-1;i++)
	{
		if(!(( (A[i-1]%2!=0) &&(A[i]%2==0)  && (A[i+1]%2!=0)) || ((A[i]%2!=0) && (A[i-1]%2==0) && (A[i+1]%2==0)) ))
		{
			vt=i+1;
			break;
		}
	}
	printf("%d",vt);
}

void main()
{
	int A[size], n;
	nhap(A,n);
	kiemTraChanLe(A,n);

}


