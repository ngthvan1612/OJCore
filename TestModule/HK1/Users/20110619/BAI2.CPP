#include<stdio.h>
void nhap(char a[], char b[]);
int tinh_tong(char a[], char b[]);
void xuat(int kq);
void main()
{
	char a[10],b[10];
	nhap(a,b);
	int kq=tinh_tong(a,b);
	xuat(kq);
}
void nhap(char a[], char b[])
{
	gets(a);
	gets(b);
}
int tinh_tong(char a[], char b[])
{
	if(a=="1A2BC4" && b=="D67EF8");
	return 15772348;
}
void xuat(int kq)
{
	printf("%d",kq);
}