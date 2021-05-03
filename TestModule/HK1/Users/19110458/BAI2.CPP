#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

double Mu(int i);
double hexToDec(char s[]);

int main()
{
	char s1[10],s2[10];
	gets(s1);
	gets(s2);
	double kq1=hexToDec(s1);
	//double kq2=hexToDec(s2);
	printf("%.0lf", kq1);
	return 0;
}
double Mu(int i)
{
	double kq=1;
	if(i==0)
		return kq;
	else
	{
		for(i=1;i<=i;i++)
			kq*=16;
	}
	return kq;

}
double hexToDec(char s[])
{
	strrev(s);
	int n=strlen(s);
	double kq=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]>='0' && s[i]<='9')
			kq=kq+s[i]*Mu(i);
		else if(s[i]>='A' && s[i]<='Z')
			kq=kq+(s[i]-'A'+10)*Mu(i);
	}
	return kq;
	cout<<kq<<endl;
}