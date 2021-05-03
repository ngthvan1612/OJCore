#include<stdio.h>
#include<math.h>
#include<string.h>
void Nhap(char A[], char B[]);
int Chuyendoi(char A[]);
int Xuly(char A[], char B[]);
void Xuat(int sum);

void main()
{
	char A[20], B[20];
	Nhap(A, B);
	int kq=Xuly(A, B);
	Xuat(kq);
}

void Nhap(char A[], char B[])
{
	gets(A);
	gets(B);
}

int Chuyendoi(char A[])
{
	int sum=0;
	int tam, a=0;
	for (int i=strlen(A)-1; i>=0; i--)
	{
		if (A[i]>='a' && A[i]<='z')
			A[i]-=32;
		if (A[i]>='A' && A[i]<='Z')
			tam=A[i]-55;
		else if (A[i] >= '0' && A[i] <='9')
			tam=A[i]-48;
		sum= sum + tam*pow(16, a);
		a+=1;
	}
	return sum;
}

int Xuly(char A[], char B[])
{
	int sum=Chuyendoi(A)+Chuyendoi(B);
	return sum;
}

void Xuat(int sum)
{
	printf("%d", sum);
}


