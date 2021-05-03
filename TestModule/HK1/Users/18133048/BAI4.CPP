#include<iostream>
using namespace std;

void nhap(int a[][100], int &m, int &n);
int laSNT(int n);
int timDong(int a[][100], int m, int n);
void xuat(int kq);
int main()
{
	int a[100][100];
	int m, n;
	nhap(a, m, n);
	int kq= timDong(a, m, n);
	xuat(kq);

	return 0;
}
void nhap(int a[][100], int &m, int &n)
{
	cin>>m>>n;
	for(int i=0; i<m;i++)
	{
		for(int j=0; i<n; j++)
		{ cin>>a[i][j];
		}
	}
}
int laSNT(int n)
{
	int flag=0;
	if(n>=2){
		int dem=0;
		for(int i=0; i<=n; i++)
		{
			if(n%i==0) {
				dem++;
			}
		}
		if(dem==2) {
			flag=1;
		}
		else flag=0;
	}
	return flag;
}
int timDong(int a[][100], int m, int n)
{
	int maxdong=0;
	int dmax=-1;
	for(int i=0; i<m;i++)
	{	int dem=0;
		for(int j=0; i<n; j++)
		{ 
			if(laSNT(a[i][j]))
			{
				dem++;
				
			}
			
		}
		maxdong=dem;
		dmax=i;
		break;

	}
	if(dmax==-1) {
		return -1;
	}
	else{
		for(int i=0; i<m;i++)
		{	int dem=0;
			for(int j=0; i<n; j++)
			{ 
				if(laSNT(a[i][j]))
				{
					dem++;
				
				}
				
			}
			if(dem>maxdong)
			{
				maxdong=dem;
				dmax=i;

			}

		}
			

	}
	return i;

}
void xuat(int kq)
{
	cout<<kq;
}