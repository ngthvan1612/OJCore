#include<iostream>

using namespace std;
 int sosanh(int a, int b,int &x, int &y)
 {
	 if(a == 1  && b == 3)
	 {
		 x = 3;
		 y =0;
	 }
	 if(a ==3 && b ==1 )
	 {
		 x = 0;
		 y =3;
	 }
	 if(a == 3 && b ==2)
	 {
		 x = 3;
		 y =0;
	 }
	 if(a ==2 && b == 3)
	 {
		 x = 0;
		 y =3;
	 }
	 if( a ==2 && b ==1 )
	 {
		 x = 3;
		 y =0;
	 }
	 if(a ==1 && b ==2)
	 {
		 x = 0;
		 y =3;
	 }
	 else
	 {
		 x=1;
		 y =1;
	 }
	 return 0;
 }
 void main()
 {
	 int x,y,z,t,u,v;
	 int a,b,c,d,e,f;
	 cin >>x>>y>>z>>t>>u>>v;
	 sosanh(x,y,a,b);
	 sosanh(t,u,c,d);
	 sosanh(u,v,e,f);
	 cout<<a + c<<" "<<b+e<<" "<<c+f;
 }


