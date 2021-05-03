#include<stdio.h>
void nhap(int &n, int A[]);
void kiemtra(int n, int A[]);
int chanle(int ik, int K[]);
void main()
{
	int n,A[99];
	nhap(n,A);
	kiemtra(n,A);
}
void nhap(int &n, int A[])
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&A[i]);
}
void kiemtra(int n, int A[])
{
	int B[49], C[49];
	int ib=-1,ic=-1;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			ib++;
			B[ib]=A[i];
		}
		if(i%2!=0)
		{
			ic++;
			C[ic]=A[i];
		}
	}
	int x=chanle(ib,B);
	int y=chanle(ic,C);
	if(x==0&&y==1) printf("-1");
	if(x==1&&y==0) printf("-1");
	else printf("2");
}
int chanle(int ik, int K[])
{
	int ch=0,l=0;
	for(int i=0;i<ik+1;i++)
	{
		if(K[i]%2==0) ch++;
		else l++;
	}
	if(ch==ik) return 0;
	if(l==ik) return 1;
}

			
