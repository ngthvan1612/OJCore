#include<stdio.h>
#include<string.h>
#include<math.h>
void Tinh(char S1[], char S2[]);
double Doi(char S1[]);
void main()
{
	char S1[100];
	char S2[100];
	gets(S1);
	gets(S2);
    Tinh(S1,S2);

}
double Doi(char S1[])
{
	double s=0;
	int n = strlen(S1);
	double num=0;
	for(int i=n-1;i>=0;i--)
	{
		if(S1[i]>='0'&& S1[i]<='9')
		{
			num+=(S1[i]-48)*pow(16,(n-1-i));
		}
		else if(S1[i]>='A'&& S1[i]<='Z')
			num+=(S1[i]-55)*pow(16,(n-1-i));
	}
	return num;
}
void Tinh(char S1[], char S2[])
{

	double s=Doi(S1)+Doi(S2);
	printf("%.0lf", s);
}