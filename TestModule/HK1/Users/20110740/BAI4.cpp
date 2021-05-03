#include<iostream>
#include<math.h>
using namespace std;
void nmang(int c[][100],int a,int b)
{
	for (int i=0;i<a;i++)
		for (int j=0;j<b;j++)
		cin>>c[i][j];
}
int Snt(int v)
{	if(v<2) return 0;
	else if (v==2) return 1;
		else { int dem=0;
		
			for (int l=2;l<v/2+1;l++)
				if (v%l==0) dem=dem+1;
				if (dem==0) return 1;
					else return 0;
}}
void occoh(int c[][100],int a,int b)
{	int z[100]; int x;
	for (int i=0;i<a;i++)
		{z[i]=0;
		for (int j=0;j<b;j++)
		{	
			x=c[i][j];
			if (Snt(x)==1)
				z[i]=z[i]+x; 
		}}
	x=z[0];
	for (int k=0;k<a;k++)
		if(x>z[k])
			x=z[k];
	cout<<x;
}

int main()
{
	int a,b;
	cin>>a>>b;
	int c[100][100];
	nmang(c,a,b);
	occoh(c,a,b);
	return 0;
}

