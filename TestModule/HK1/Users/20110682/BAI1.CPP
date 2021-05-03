#include <stdio.h>
#include <iostream>
using namespace std;
void main ()
{
int x,y,z,t,u,v, A=0, B=0, C=0;
cin >> x >> y >> z >> t >> u >> v;
if(x==y)
	A=A+1; B=B+1;
if(z==t)
	A=A+1; C=C+1;
if(u==v)
	B=B+1; C=C+1;
if(x==1&&y==3||x==2&&y==1||x==3&&y==2)
	A=A+3;
if(x==3&&y==1||x==1&&y==2||x==2&&y==3)
	B=B+3;
if(z==1&&t==3||z==2&&t==1||z==3&&t==2)
	A=A+3;
if(z==3&&t==1||z==1&&t==2||z==2&&t==3)
	C=C+3;
if(u==1&&v==3||u==2&&v==1||u==3&&v==2)
	B=B+3;
if(u==3&&v==1||u==1&&v==2||u==2&&v==3)
	C=C+3;
printf("%d%d%d",A,B,C);
}