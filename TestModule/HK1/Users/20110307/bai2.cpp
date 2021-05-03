#include<stdio.h>
#include<math.h>
#include<string.h>
void nhap(char S1[],char S2[]);
int kiemtra(char S1[],char S2[]);
int doiSo(char S1[]);
void xuat(int kq);
void main()
{
	char S1[20],S2[20];
	nhap(S1,S2);
	int kq=kiemtra(S1,S2);
	xuat(kq);
}
void nhap(char S1[],char S2[])
{
	gets(S1);
	gets(S2);
}
int kiemtra(char S1[],char S2[])
{
	strrev(S1);
	strrev(S2);
	int kq1=doiSo(S1);
	int kq2=doiSo(S2);
	int kq=kq1+kq2;
	return kq;
}
int doiSo(char S1[])
{
	int ketQua=0;
	int dem1=strlen(S1);
	for(int i=0;i<dem1;i++)
	{
		if(S1[i]>='0' && S1[i]<='9')
			ketQua=ketQua+(S1[i]-'0')*(int)pow(16,i);
		else if(S1[i]>='A' && S1[i]<='Z')
			ketQua=ketQua+(S1[i]-55)*(int)pow(16,i);
	}
	return ketQua;
}
void xuat(int kq)
{
	printf("%d",kq);
}



