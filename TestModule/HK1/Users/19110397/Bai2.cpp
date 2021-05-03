#include<stdio.h>
#include<string.h>
#include<math.h>

void nhap(char a[])
{
	gets(a);
}

long xuLy(char a[])
{
	long tong = 0;
	int dem = 1;
	for(int i = strlen(a) - 1; i >=0; i--)
	{
		if (a[i] >= 0 && a[i] <= 9)
			a[i] = a[i] - 48;
		else
			if(a[i] >= 'A' && a[i] <= 'Z')
				a[i] = a[i] - 55;
		tong = tong + a[i] * dem;
		dem = dem * 16;
	}
	return tong;
}

void xuat(long kq)
{
	printf("%ld", kq);
}

void main()
{
	char a[100], b[100];
	nhap(a);
	nhap(b);
	long kq = xuLy(a) + xuLy(b);
	xuat(kq);
}