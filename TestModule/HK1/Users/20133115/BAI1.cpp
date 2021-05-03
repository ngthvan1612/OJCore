#include <iostream>
                                     
using namespace std;

main (){
int x,y,z,t,u,v,   a,b,c;
cin>>x;
cin>>y;
cin>>z;
cin>>t;
cin>>u;
cin>>v;

if (x==1 && y==1 || x==2 && y==2 ||x==3 && y==3)
{
	a++;
	b++;
}
if (z==1 && t==1 || z==2 && t==2 ||z==3 && t==3)
{
	a++;
	c++;
}
if (u==1 && v==1 || u==2 && v==2 ||u==3 && v==3)
{
	b++;
	c++;
}






if (x==1 && y==3 || x==2 && y==1 ||x==3 && y==2)
{
	a=a+3;
	b=b;
}
if (z==1 && t==3 || z==2 && t==1 ||z==3 && t==2)
{
	a=a+3;
	c=c;
}
if (u==1 && v==3 || u==2 && v==1 ||u==3 && v==2)
{
	b=b+3;
	c=c;
}



if (x==3 && y==1 || x==1 && y==2 ||x==2 && y==3)
{
	a=a;
	b=b+3;
}

if (z==3 && t==1 || z==1 && t==2 ||z==2 && t==3)
{
	a=a;
	c=c+3;
}if (u==3 && v==1 || u==1 && v==2 ||u==2 && v==3)
{
	b=b;
	c=c+3;
}


b=b-1;

cout<<a<<" "<<b<<" "<<c;













system ("pause");
return 0;

}
