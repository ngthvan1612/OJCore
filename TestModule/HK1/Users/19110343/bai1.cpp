#include<stdio.h>
void Nhap(int thidau[])
{
	for(int i = 0; i < 6; i++)
		scanf("%d",&thidau[i]);
}
void Oantuti(int a, int b, int &c, int &d)
{
	if((a == 1 && b == 3) || (a == 3 && b == 2) || (a == 2 && b == 1))
	{
		c += 3;
		d += 0;
	}
	else if((b == 1 && a == 3) || (b == 3 && a == 2) || (b == 2 && a == 1))
	{
		c+=0;
		d+=3;
	}
	if(a == b)
	{
		c+=1;
		d+=1;
	}
}
void Xuly(int &a, int &b, int &c, int thidau[])
{
	Oantuti(thidau[0],thidau[1],a,b);
	Oantuti(thidau[2],thidau[3],a,c);
	Oantuti(thidau[4],thidau[5],b,c);
}
void main()
{
	int a = 0, b = 0, c = 0;
	int thidau[6];
	Nhap(thidau);
	Xuly(a,b,c,thidau);
	printf("%d %d %d",a ,b ,c);
}

