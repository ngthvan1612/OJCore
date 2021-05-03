#include<stdio.h>
void tinh(int s[7]);
void tinhdiem(int s[],int &a,int &b,int c,int d);
void main()
{
	int s[7];
	for(int i=0;i<6;i++)
		scanf("%d",&s[i]);
	tinh(s);

}
void tinh(int s[7])
{
	int a=0;
	int b=0;
	int c=0;
	tinhdiem(s,a,b,0,1);
	tinhdiem(s,a,c,2,3);
	tinhdiem(s,b,c,4,5);
	printf("%d %d %d",a,b,c);


}
void tinhdiem(int s[],int &a,int &b,int e,int f)
{
	if(s[e]==1 && s[f]==3)
		a=a+3;
	else if(s[e]==3 && s[f]==2)
		a=a+3;
	else if(s[e]==2 && s[f]==1)
		a=a+3;
	else if(s[e]==3 && s[f]==1)
		b=b+3;
	else if(s[e]==2 && s[f]==3)
		b=b+3;
	else if(s[e]==1 && s[f]==2)
		b=b+3;
	else if(s[e]==s[f])
	{
		a=a+1;
		b=b+1;
	}
}
