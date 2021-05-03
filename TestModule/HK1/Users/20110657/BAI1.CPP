#include<stdio.h>

void nhap(int n[6]);
void tinh(int n[6], int &a, int &b, int &c);
void xuat(int a, int b, int c);

int main()
{
	int n[6],a=0,b=0,c=0;
	nhap(n);
	tinh(n,a,b,c);
	xuat(a,b,c);
	return 0;
}
void nhap(int n[6])
{
	for(int i=0; i<6; i++)
		scanf("%d",&n[i]);
}
void tinh(int n[6], int &a, int &b, int &c)
{
	if((n[0]-n[1])==1 || (n[0]-n[1])==-2) a+=3;
	else if(n[0]==n[1]) {
		a++;
		b++;
	} else b+=3;
	if((n[2]-n[3])==1 || (n[2]-n[3])==-2) a+=3;
	else if(n[2]==n[3]) {
		a++;
		c++;
	} else c+=3;
	if((n[4]-n[5])==1 || (n[4]-n[5])==-2) b+=3;
	else if(n[4]==n[5]) {
		c++;
		b++;
	} else c+=3;
}
void xuat(int a, int b, int c)
{
	printf("%d %d %d", a,b,c);
}