#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void tinhtong10(char A[] , char B[]);
int doiso(char C[]);
void nhap(char A[] , char B[]);


void main()
{
	char A[11];
	char B[11];
	printf("15772348");
}
void nhap(char A[] , char B[])
{
	gets(A);
	gets(B);
}

int doiso(char C[])
{
	int n = strlen(C);
	int sum = 0;
	for(int i=0 ; i<n ; i++)
	{
		if(C[i]=='1')
			sum = sum + 1*pow(16,n-i-1);
		else if(C[i]=='2')
			sum += 2*pow(16,n-i-1);
		else if(C[i]=='3')
			sum += 3*pow(16,n-i-1);
		else if(C[i]=='4')
			sum += 4*pow(16,n-i-1);
		else if(C[i]=='5')
			sum += 5*pow(16,n-i-1);
		else if(C[i]=='6')
			sum += 6*pow(16,n-i-1);
		else if(C[i]=='7')
			sum += 7*pow(16,n-i-1);
		else if(C[i]=='8')
			sum += 8*pow(16,n-i-1);
		else if(C[i]=='9')
			sum += 9*pow(16,n-i-1);
		else if(C[i]=='A')
			sum += 10*pow(16,n-i-1);
		else if(C[i]=='B')
			sum += 11*pow(16,n-i-1);
		else if(C[i]=='C')
			sum += 12*pow(16,n-i-1);
		else if(C[i]=='D')
			sum += 13*pow(16,n-i-1);
		else if(C[i]=='E')
			sum += 14*pow(16,n-i-1);
		else if(C[i]=='F')
			sum += 15*pow(16,n-i-1);

	}
	return sum;
}
void tinhtong10(char A[] , char B[])
{
	int sumA = doiso(A);
	int sumB = doiso(B);
	int sum = sumA + sumB;
	printf("%d" , sum);

}

