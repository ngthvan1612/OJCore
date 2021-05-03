#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap(char X[], char Y[]);
long hecxa(char X[]);
long hecxa1(char Y[]);
void main()
{ 
	char X[10];
	char Y[10];
	nhap(X,Y);
	long A = hecxa(X);
	long B = hecxa1(Y);
	long tong = A + B;
	printf("%ld", tong);



}
void nhap(char X[], char Y[])
{
  gets(X);
  gets(Y);

}
long hecxa(char X[])
{
	long decA = 0;
   int len = strlen(X);
   X = strrev(X);
   for(int i=0; i<len; i++)
	   if(X[i]>='0' && X[i]<='9')
		   decA = decA + (X[i]-'0')*(long)pow(16,i);
	   else
	   decA = decA + (X[i]-55)*(long)pow(16,i);
  return decA;
}
long hecxa1(char Y[])
{
	long decB = 0;
   int len1 = strlen(Y);
   Y = strrev(Y);
   for(int i=0; i<len1; i++)
	   if(Y[i]>='0' && Y[i]<='9')
		   decB = decB + (Y[i]-'0')*(long)pow(16,i);
	   else
	   decB = decB + (Y[i]-55)*(long)pow(16,i);
  return decB;
}

