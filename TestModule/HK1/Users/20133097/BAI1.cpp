#include <iostream>
using namespace std;
void KiemTra(int m,int n,int &i,int &j);
int main()
{
	int x,y,z,t,u,v;
	int a = 0,b = 0,c = 0;
	cin>>x>>y>>z>>t>>u>>v;
	KiemTra(x,y,a,b);
	KiemTra(z,t,a,c);
	KiemTra(u,v,b,c);
	cout<<a<<" "<<b<<" "<<c;
	return 0;
}
void KiemTra(int m,int n,int &i,int &j)
{
	if((m == 1 && n == 3) || (m == 3 && n == 2) || (m == 2 && n == 1))
		i = i + 3;
	else if((m == 3 && n == 1) || (m == 2 && n == 3) || (m == 1 && n == 2))
		j = j + 3;
	else if(m == n)
	{
		i = i + 1;
		j = j + 1;
	}

}
