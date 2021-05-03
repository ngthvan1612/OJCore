#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap(char A[],char B[])
{
	gets(A);
	gets(B);
}
void xuat(long kq)
{
	printf("%ld",kq);
}
long doiSangThapPhanA(char A[])
{
	long kq1=0;
	int len=strlen(A);
    A =strrev(A);
	for(int i=0;i<len;i++){
		if(A[i]>='0' && A[i] <='9'){
		  kq1= kq1+(A[i]-'0')*(long)pow(16,i);
		}else
		{
			kq1=kq1+(A[i]-'55')*(long)pow(16,i);
		}
	}
	return kq1;
}
long doiSangThapPhanB(char B[])
{
	long kq2=0;
	int lenB=strlen(B);
    B =strrev(B);
	for(int i=0;i<lenB;i++){
		if(B[i]>='0' && B[i] <='9'){
		  kq2= kq2+(B[i]-'0')*(long)pow(10,i);
		}else
		{
			kq2=kq2+(B[i]-'55')*(long)pow(10,i);
		}
	}
	return kq2;
}
void main()
{
	char A[30];
	char B[30];
	nhap (A,B);
	long kq = doiSangThapPhanA(A) + doiSangThapPhanB(B);
	xuat (kq);
    
}