#include<stdio.h>
int diem(int x, int y, int z, int t, int u, int v);
void xuat(int kq);
void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d ",&x,&y,&z,&t,&u,&v);
	int kq = diem(x,y,z,t,u,v);
	xuat(kq);


}
void xuat(int kq)
{
	printf("%d ", kq);
}
int diem(int x, int y, int z, int t, int u, int v)
{
	int A1,A2,B1,B2,C1,C2=0;
	int A=A1+A2;
	int B=B1+B2;
	int C=C1+C2;
	if(x=1)
	{
		if(y=1){
			A1++;
			B1++;
			}
		else if(y=2){
			A1=A1+0;
			B1=B1+3;
			}
		else if(y=3){
			A1=A1+3;
			B1=B1+0;
			}
	}
		
	if(z=1)
	{
		if(t=1){
			A2++;
			C1++;
			}
		else if(t=2){
			A2=A2+0;
			C1=C1+3;
			}
		else if(t=3){
			A2=A2+3;
			C1=C1+0;
			}
	}
	if(u=1)
	{
		if(t=1){
			B2++;
			C2++;
			}
		else if(t=2){
			B2=B2+0;
			C2=C2+3;
			}
		else if(t=3){
			B2=B2+3;
			C2=C2+0;
			}
	}
	return A,B,C;
}