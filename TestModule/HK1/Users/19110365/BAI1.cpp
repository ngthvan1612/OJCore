#include <iostream>

using namespace std;

//1 3 2 2 2 3
void Solve(int a, int b, int c, int d, int e, int f)
{
	int diemA = 0;
	int diemB = 0;
	int diemC = 0;
	if(a == 1)
	{
		if(b == 1)
		{
			diemA += 1;
			diemB += 1;
		}
		else
		{
			if(b == 2)
			{
				diemA += 0;
				diemB += 3;
			}
			else
			{
				diemA += 3;
				diemB += 0;
			}
		}
	}
	else if(a == 2)
	{
		if(b == 1)
		{
			diemA += 3;
			diemB += 0;
		}
		else
		{
			if(b == 2)
			{
				diemA += 1;
				diemB += 1;
			}
			else
			{
				diemA += 0;
				diemB += 3;
			}
		}
	}
	else if(a == 3)
	{
		if(b == 1)
		{
			diemA += 0;
			diemB += 3;
		}
		else
		{
			if(b == 2)
			{
				diemA += 3;
				diemB += 0;
			}
			else
			{
				diemA += 1;
				diemB += 1;
			}
		}
	}

	
	if(c == 1)
	{
		if(d == 1)
		{
			diemA += 1;
			diemC += 1;
		}
		else
		{
			if(d == 2)
			{
				diemA += 0;
				diemC += 3;
			}
			else
			{
				diemA += 3;
				diemC += 0;
			}
		}
	}
	else if(c == 2)
	{
		if(d == 1)
		{
			diemA += 3;
			diemC += 0;
		}
		else
		{
			if(c == 2)
			{
				diemA += 1;
				diemC += 1;
			}
			else
			{
				diemA += 0;
				diemC += 3;
			}
		}
	}
	else if(c == 3)
	{
		if(d == 1)
		{
			diemA += 0;
			diemC += 3;
		}
		else
		{
			if(c == 2)
			{
				diemA += 3;
				diemC += 0;
			}
			else
			{
				diemA += 1;
				diemC += 1;
			}
		}
	}


	

	if(e == 1)
	{
		if(f == 1)
		{
			diemB += 1;
			diemC += 1;
		}
		else
		{
			if(f == 2)
			{
				diemB += 0;
				diemC += 3;
			}
			else
			{
				diemB += 3;
				diemC += 0;
			}
		}
	}
	else if(e == 2)
	{
		if(f == 1)
		{
			diemB += 3;
			diemC += 0;
		}
		else
		{
			if(f == 2)
			{
				diemB += 1;
				diemC += 1;
			}
			else
			{
				diemB += 0;
				diemC += 3;
			}
		}
	}
	else if(e == 3)
	{
		if(f == 1)
		{
			diemB += 0;
			diemC += 3;
		}
		else
		{
			if(f == 2)
			{
				diemB += 3;
				diemC += 0;
			}
			else
			{
				diemB += 1;
				diemC += 1;
			}
		}
	}
	cout << diemA << " " << diemB << " " << diemC; 
}


void main()
{
	int a , b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	Solve(a,b,c,d,e,f);
}