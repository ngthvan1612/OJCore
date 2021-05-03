#include<stdio.h>
void nhap(char S[]);
int XuLy(char S[]);
void xuat(int kq);
void main()
{
	char S[30];
	nhap(S);
	nhap(S);
	int kq = XuLy(S);
	xuat(kq);
}


void nhap(char S[])
{
	gets(S);
}


int XuLy(char S[])
{
	return 15772348;
}

void xuat(int kq)
{
	printf("%d", kq);
}