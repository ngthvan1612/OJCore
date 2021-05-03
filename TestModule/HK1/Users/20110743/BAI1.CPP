#include<stdio.h>

void nhap(int &x, int &y, int &z, int &t, int &u, int &v);
void diem_3_nguoi_choi(int x, int y, int z, int t, int u, int v);
void xuat(int a,int b, int c);


void main()
{
	int x, y, z, t, u, v;
	nhap(x, y, z, t, u, v);
	diem_3_nguoi_choi(x, y, z, t, u, v);
}

void nhap(int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}

void diem_3_nguoi_choi(int x, int y, int z, int t, int u, int v)
{
	int diemA=0, diemB=0, diemC=0;
	if(x==y)
	{
		diemA+=1;
		diemB+=1;
	}
	else if(x<y)
			if(x==1 && y==2 || x==2 && y==3)
			{
				diemA+=0;
				diemB+=3;
			}
			else if(x==1 && y==3)
			{
				diemA+=3;
				diemB+=0;
			}
		else if(x>y)
				if(x==2 && y==1 || x==3 && y==2)
				{
					diemA+=3;
					diemB+=0;
				}
				else if(x==3 && y==1 ||x==3 && y==2)
				{
					diemA+=0;
					diemB+=3;
				}

	if(z==t)
		{
			diemA+=1;;
			diemC+=1;
		}
		else if(z<t)
				if(z==1 && t==2 || z==2 && t==3)
				{
					diemA+=0;
					diemC+=3;
				}
				else if(z==1 && t==3)
					{
						diemA+=3;
						diemC+=0;
					}
			else if(z>t)
					if(z==2 && t==1 || z==3 && t==2)
					{
						diemA+=3;
						diemC+=0;
					}
					else if(z==3 && t==1 || z==3 && t==2)
					{
						diemA+=0;
						diemC+=3;
					}

	if(u==v)
	{
		diemB+=1;
		diemC+=1;
	}
	else if(u<v)
			if(u==1 && v==2 || u==2 && v==3)
			{
				diemB+=0;
				diemC+=3;
			}
			else if(u==1 && v==3)
				{
					diemB+=3;
					diemC+=0;
				}
			else if(u>v)
				if(u==2 && v==1 || u==3 && v==2)
				{
					diemB+=3;
					diemC+=0;
				}
				else if(u==3 && v==1 || u==3 && v==2)
				{
					diemB+=0;
					diemC+=3;
				}

	xuat(diemA, diemB, diemC);
}

void xuat(int a,int b, int c)
{
	printf("%d %d %d", a, b, c);
}