#include<stdio.h>
void nhap(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int KiemTra(int a[],int n)
{
	int i;
	int kq;
	for( i=0;i<n;i++)
	{
		if((a[i]%2==0 && a[i+1]%2!=0)||(a[i]%2!=0 && a[i+1]%2==0))
		{ 
			kq=-1;
		}
		else
		{
			kq=i+1;
			break;
		
		}
		

	}
	return kq;



}
int main()
{
	int n;
	int a[100];
	scanf("%d",&n);
	nhap(a,n);
	int kq;
	kq=KiemTra(a,n);
	printf("%d",kq);
	return 0;

}