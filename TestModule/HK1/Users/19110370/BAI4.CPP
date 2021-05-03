#include<iostream>
#include<math.h>
using namespace std;

#define max 100
void nhap(int a[100][100], int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)  
		{
			cin>>a[i][j];
		}
	}

}
bool nguyenTo(int n)
{
	if(n<2)
	{
		return false;
	}
	else if(n==2)
	{
		return true;
	}
	else if(n%2!=0)
	{
		for(int i=3;i<sqrt(n);i++)
		{
			if(n%i==0)
			{
				return false;
			}
		}
	
	}
	else{return false;}
	return true;
}

/*void kiemTra(int a[100][100], int m,int n)
{
	int sum=10000000;

	for(int i=0;i<m;i++)
	{
		int s=0;
		for(int j=0;j<n;j++)  
		{
			if(nguyenTo(a[i][j]))
			{
				s+=a[i][j];
			}
		}
		if(s<sum)
		{
			sum=s;
		}
	}
	cout<<sum;

}*/
int min(int a[], int n)
{
	int s=a[0];
	for(int i=0;i<n;i++)
	{
		if(s>a[i])
		{
			s=a[i];
		}
	
	}
return s;

}

void kiemTra(int a[100][100], int m,int n)
{
	int x[1000];
	int i;
	for(i=0;i<m;i++)
	{
		int s=0;
		for(int j=0;j<n;j++)  
		{
			if(nguyenTo(a[i][j]))
			{
				s+=a[i][j];
			}
		}
		x[i]=s;
		
	}
	cout<<min(x,i);

}


void main()
{
	int a[max][max];
	int m,n;
	cin>>m>>n;
	nhap(a,m,n);
	//cout<<nguyenTo(n);
	kiemTra(a,m,n);

}