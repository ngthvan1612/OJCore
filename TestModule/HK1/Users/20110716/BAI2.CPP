#include<stdio.h>
#include<string.h>
#include<math.h>;

void xuat(int x);
int tinhTong(char A[], char B[]);
int doiHe10(char A[]);

int main()
{
	char A[20], B[20];
	gets(A);
	A[strlen(A)]='\0';
	gets(B);
	B[strlen(B)]='\0';
	int sum = tinhTong(A, B);
	xuat(sum);
	return 0;
}
int doiHe10(char A[])
{
	int kq=0;
	int len=strlen(A)-1;
	for (int i=0; i<(int)strlen(A); i++)
	{
		switch(A[i])
		{
		case '0':kq += int(0*pow(16, len-i)); break;
		case '1':kq += int(1*pow(16, len-i)); break;
		case '2':kq += int(2*pow(16, len-i)); break;
		case '3':kq += int(3*pow(16, len-i)); break;
		case '4':kq += int(4*pow(16, len-i)); break;
		case '5':kq += int(5*pow(16, len-i)); break;
		case '6':kq += int(6*pow(16, len-i)); break;
		case '7':kq += int(7*pow(16, len-i)); break;
		case '8':kq += int(8*pow(16, len-i)); break;
		case '9':kq += int(9*pow(16, len-i)); break;
		case 'A':kq += int(10*pow(16, len-i)); break;
		case 'B':kq += int(11*pow(16, len-i)); break;
		case 'C':kq += int(12*pow(16, len-i)); break;
		case 'D':kq += int(13*pow(16, len-i)); break;
		case 'E':kq += int(14*pow(16, len-i)); break;
		case 'F':kq += int(15*pow(16, len-i)); break;
		}
	}
	return kq;
}
int tinhTong(char A[], char B[])
{
	int soA = doiHe10(A);
	int soB = doiHe10(B);
	int sum;
	sum = soA+soB;
	return sum;
}
void xuat(int x)
{
	printf("%d", x);
}