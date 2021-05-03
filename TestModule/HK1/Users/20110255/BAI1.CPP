#include <stdio.h>

void nhap (int &x, int &y, int &z, int &t, int &u, int &v)
{
	scanf ("%d%d%d%d%d%d", &x, &y, &z, &t, &u, &v);
}

int kiemTra (int c, int d)
{
	if (c==d)
		return 0;
	else if ((c==3 && d==1) || (c==2 && d==1) || (c==3 && d==2))
		return 1;
	else 
		return -1;
}

void ketQua (int &x, int &y, int &z, int &t, int &u, int &v,int &DiemA, int &DiemB, int &DiemC)
{
	switch (kiemTra (x,y))
	{
	case 1:
			DiemA+=3;
			break;
	case 0:
			DiemA++;
			DiemB++;
			break;
	}
	switch (kiemTra (z,t))
	{
	case 1:
			DiemA+=3;
			break;
	case 0:
			DiemA++;
			DiemC++;
			break;
	}
	switch (kiemTra (u,v))
	{
	case 1:
			DiemB+=3;
			break;
	case 0:
			DiemB++;
			DiemC++;
			break;
	}
}
void xuat (int kq)
{
	printf ("%d", kq);
}

void main()
{
	int x,y,z,t,u,v;
	nhap (x,y,z,t,u,v);
	int DiemA=0, DiemB=0, DiemC=0;
	ketQua (x,y,z,t,u,v, DiemA, DiemB, DiemC);
	xuat (DiemA);
	xuat (DiemB);
	xuat (DiemC);
}


