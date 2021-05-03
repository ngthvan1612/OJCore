#include <stdio.h>

void main()
{

int x,y,z,t,u,v,diem,a=x=z,b=y=u,c=t=v;

scanf ("%d",&x);
scanf ("%d",&y);
scanf ("%d",&z);
scanf ("%d",&t);
scanf ("%d",&u);
scanf ("%d",&v);

if(a==1 && b==3)
 diem=+3;
else if (a==1 && b==2)
diem=+0;
else if (a==1 && b==1)
diem=+1;
else if (a==1 && c==1)
diem=+1;
else if (a==1 && c==2)
diem=+0;
else if (a==1 && c==3)
diem=+3;
else if (a==2 && b==1)
diem=+3;
else if (a==2 && b==2)
diem=+1;
else if (a==2 && b==3)
diem=+0;
else if (a==2 && c==1)
diem=+3;
else if (a==2 && c==2)
diem=+1;
else if (a==2 && c==3)
diem=+0;
else if (a==3 && b==1)
diem=+1;
else if (a==3 && b==2)
diem=+3;
else if (a==3 && b==3)
diem=+1;
else if (a==3 && c==1)
diem=+1;
else if (a==3 && c==2)
diem=+3;
else if (a==3 && c==3)
diem=+1;
printf("%d",diem);
}


