#include <iostream>

using namespace std;

void nhap(int &x,int &y, int &z, int &t, int &u, int &v);
void tinhDiem(int x, int y, int z, int t, int u, int v, int &a, int &b, int &c);
int ketqua(int a, int b);

void main(){
	int x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	int a,b,c;
	tinhDiem(x,y,z,t,u,v,a,b,c);
	cout << a << " " << b << " " << c;
}


void nhap(int &x,int &y, int &z, int &t, int &u, int &v)
{
	cin >> x >> y >> z >> t >> u >> v;
}


void tinhDiem(int x, int y, int z, int t, int u, int v, int &a, int &b, int &c)
{
	int diemA=0,diemB=0,diemC=0;
	if(ketqua(x,y)==1)
		diemA+=3;
	else if (ketqua(x,y)==3)
		diemB+=3;
	else 
	{
		diemA++;
		diemB++;
	}
	
	if(ketqua(z,t)==1)
		diemA+=3;
	else if (ketqua(z,t)==3)
		diemC+=3;
	else 
	{
		diemA++;
		diemC++;
	}
	
	if(ketqua(u,v)==1)
		diemB+=3;
	else if (ketqua(u,v)==3)
		diemC+=3;
	else 
	{
		diemB++;
		diemC++;
	}

	a = diemA;
	b = diemB;
	c = diemC;

}

int ketqua(int a, int b)
{
	if (a==1)
	{
		if(b==1)
			return 2;
		else if (b==2)
			return 3;
		else 
			return 1;
	}
	else if (a==2)
	{
		if(b==1)
			return 1;
		else if (b==2)
			return 2;
		else 
			return 3;
	}
	else //(a==3)
	{
		
		if(b==1)
			return 3;
		else if (b==2)
			return 1;
		else 
			return 2;
	}
}
