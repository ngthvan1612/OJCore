#include <iostream>
using namespace std;

int check(int x, int y)
{
	if(x == y)
		return 0;
	else
	{
		if(x == 1 && y == 3)
			return 1;
		else if(x == 2 && y == 1)
			return 1;
		else if(x == 3 && y == 2)
			return 1;
		else
			return -1;
	}
}

void main()
{
	int x,y,z,t,u,v;
	cin >> x>> y >> z >> t >> u >> v;
	int diemA = 0, diemB = 0, diemC = 0;
	 //tinhDiem(x,y,z,t,u,v);
	int diem = check(x,y);
	if(diem == 1)
	{
		diemA+=3;
	}
	if(diem == 0)
	{
		diemB++;
		diemA++;
	}
	if(diem == -1)
	{
		diemB+=3;
	}
	diem = check(z,t);
	
	if(diem == 1)
	{
		diemA+=3;
	}
	if(diem == 0)
	{
		diemC++;
		diemA++;
	}
	if(diem == -1)
	{
		diemC+=3;
	}

	diem = check(u,v);
	
	if(diem == 1)
	{
		diemB+=3;
	}
	if(diem == 0)
	{
		diemC++;
		diemB++;
	}
	if(diem == -1)
	{
		diemC+=3;
	}

	cout << diemA << " " << diemB << " " << diemC;
}