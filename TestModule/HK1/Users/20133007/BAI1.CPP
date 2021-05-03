#include <stdio.h>
int kt(int x,int b);
void main()
{
	int a[10];
	for(int i=1; i<=6; i++)
		scanf("%d",&a[i]);
	int bana=kt(a[1],a[2])+kt(a[3],a[4]);
	int banb=kt(a[2],a[1])+kt(a[5],a[6]);
	int banc=kt(a[4],a[3])+kt(a[6],a[5]);
	printf("%d %d %d",bana,banb,banc);
}
int kt(int x,int b)
{
	if (x==b) return 1;
	if ((x==1)&&(b==3)||(x==3)&&(b==2)||(x==2)&&(b==1)) return 3;
	else return 0;
}

