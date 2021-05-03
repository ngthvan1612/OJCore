#include <stdio.h>
void ktra(int s[7]);
void tinhtoan(int s[], int &x, int &y, int e, int f);
void main()
{
	int s[7];
	for (int i=0; i<6; i++)
		scanf("%d", &s[i]);
	ktra(s);
}
void ktra(int s[7])
{
	int x=0;
	int y= 0;
	int z=0;
	tinhtoan(s,x,y,0,1);
	tinhtoan(s,x,z,2,3);
	tinhtoan(s,y,z,4,5);
	printf("%d %d %d", x,y,z);
}
void tinhtoan(int s[], int &x, int &y, int e, int f)
{
	if ( s[e] ==1 && s[f] ==3)
		x=x+3;
	else if ( s[e] ==3 && s[f]==2)
		x=x+3;
	else if ( s[e] == 2 && s[f] ==1)
		x=x+3;
	else if( s[e] ==3 && s[f] == 1)
		y = y+3;
	else if( s[e]==2 && s[f] ==3)
		y=y+3;
	else if (s[e] ==1 && s[f] ==2)
		y= y+3;
	else if (s[e] == s[f])
	{
		x=x+1;
		y=y+1;
	}

}
