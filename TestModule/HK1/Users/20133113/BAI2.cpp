#include<stdio.h>
#include<string.h>
#include<math.h>
double chuyen(char s[20])
{
	double t=0;
	int n=strlen(s);
	strrev(s);
	for (int i=0;i<n;i++)
	 {
	 	if (s[i]<='9' && s[i]>='0')
	 	  {
	 	  	 t=t+( s[i]-'0')*pow(16,i);
		  }
		else
		 	if (s[i]>='A' && s[i]<='F')
		 	{
		 		 t=t+( s[i]-'A'+10)*pow(16,i);
			 }
	 }
	return t;
}
int main()
{
	char x[20],y[20];
	gets(x);
	gets(y);
	double kq=(chuyen(x)+chuyen(y));
	printf("%.0lf",kq);
	return 0;
}
