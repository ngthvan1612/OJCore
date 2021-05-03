#include <iostream>

using namespace std;

void tinh_diem(int a, int b, int &tmp1, int &tmp2)
{

	if (a == 1 )
	{
		if (b == 3)
		{
			tmp1 = tmp1 + 3;
		}
		else if ( b == 2)
		{
			tmp2= tmp2 + 3;
		}
		else if ( b == 1)
		{
			tmp1 = tmp1 + 1;
			tmp2 = tmp2 + 1;
		}
	}
	else if (a == 2)
	{
		if (b == 3)
		{
			tmp2 = tmp2 + 3;
		}
		else if ( b == 2)
		{
			tmp1 = tmp1 + 1;
			tmp2 = tmp2 + 1;
		}
		else if ( b == 1)
		{
			tmp1 = tmp1 + 3;
		}
	}
	else if (a == 3)
	{
		if (b == 3)
		{
			tmp1 = tmp1 + 1;
			tmp2 = tmp2 + 1;
		}
		else if ( b == 2)
		{
			tmp1 = tmp1 + 3;
		}
		else if ( b == 1)
		{
			tmp2 = tmp2 + 3;
		}
	}
}

int main()
{
	int x,y,z,t,u,v;
	cin >> x >> y >> z >> t >> u >> v;
	int resa =0 , resb = 0, resc = 0;
	int tmp1 = 0 , tmp2 = 0;

	tinh_diem(x,y,tmp1,tmp2);
	resa = resa + tmp1;
	resb = resb + tmp2;
	
	tmp1 = 0 , tmp2 = 0;
	tinh_diem(z,t,tmp1,tmp2);
	resa = resa + tmp1;
	resc = resc + tmp2;
	
	tmp1 = 0 , tmp2 = 0;
	tinh_diem(u,v,tmp1,tmp2);
	resb = resb + tmp1;
	resc = resc + tmp2;

	cout<<resa <<" "<<resb<<" "<<resc;
	return 0;
}