#include<stdio.h>
#include<string.h>
#include<math.h>
void nhapChuoi(char A[]);
long doiSangCoSo10(char A[]);
long tinhTong(char A[], char B[]);
void xuat(long x);
void main()
{
	char A[1000], B[1000];
	nhapChuoi(A);
	nhapChuoi(B);
	long kq=tinhTong(A,B);
	xuat(kq);
}
void nhapChuoi(char A[])
{
	gets(A);
}
long doiSangCoSo10(char A[])
{
	int t=0;
	int len=strlen(A)-1;
	for(int i=0;i<len;i++)
	{
		if(A[i]>='0'&&A[i]<='9')
			t=t+(A[i]-'0')*(long)pow(16, len-i);
		else
			t=t+(A[i]-'A'+10)*(long)pow(16, len-i);
	}
	return t;
}
long tinhTong(char A[], char B[])
{
	long s=doiSangCoSo10(A)+doiSangCoSo10(B);
	return s;
}
void xuat(long x)
{
	printf("%d", x);
}
