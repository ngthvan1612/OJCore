#include <stdio.h>
#include <string.h>
#include <math.h>
int doiSangThapPhan(char S[]);
void nhap(char S[]);
void xuat(int kq);
int tong(int a,int b);

void main()
{
	char A[30];
	char B[30];
	nhap(A);
	nhap(B);
	int kq = doiSangThapPhan(A);
	int kq1 = doiSangThapPhan(B);
	int kqc = tong(kq,kq1);
	xuat(kqc);
}
int doiSangThapPhan(char S[])
{
	int kq=0;
	int len =strlen(S);
	for(int i=0;i<len;i++){
		if(S[i]>='0' && S[i]<='9'){
			kq=kq+(S[i]-'0')*(int)pow(16,len-i-1);
		}else {
			kq=kq + (S[i]-55)*(int)pow(16,len-i-1);
		}
	}
	return kq;
}
void nhap(char S[])
{
	gets(S);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int tong(int a,int b)
{
	int s = 0;
	s = a+b;
	return s;
}
