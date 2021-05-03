#include<stdio.h>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v)
{
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
}
int ketqua(int a,int b)
{
	if(a>b)
	{
		if(a==3 && b==1) return 0;
		else return 3;
	}
	else if(a==b) return 1;
	else if(a<b)
	{
		if(a==1&&b==3) return 3;
		else return 0;
	}
}
int xuLy(int a,int b)
{
	int kqa=0,kqb=0;
	kqa=ketqua(a,b);
	if(kqa==0) kqb=3;
	else if(kqa==3) kqb=0;
	else if(kqa==1) kqb=1;
	return kqb;
}
int main()
{
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int kqA=ketqua(x,y);
	int kqB=xuLy(x,y);
	kqA+=ketqua(z,t);
	int kqC=xuLy(z,t);
	kqB+=ketqua(u,v);
	kqC+=xuLy(u,v);
	printf("%d %d %d",kqA,kqB,kqC);
	return 0;
}
	
