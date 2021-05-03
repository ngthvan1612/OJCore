// BAI2.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void Nhap(string &number)
{
	cin >> number;
}

unsigned long int ChuyenCoSo(string number)
{
	unsigned long int ketqua = 0;
	int size = number.size();
	double hex = 16;
	for (int i = 0; i < size; i++)
	{
		int powNumber = size - i - 1;
		if(number[i] >= '0' && number[i] <= '9')
		{
			ketqua += (int(number[i]) - 48)*pow(hex, powNumber);
		}
		else
		{
			int dodoi = int(number[i]) - int('A') + 10;
			ketqua += dodoi*pow(hex, powNumber);
		}
	}
	return ketqua;
}

int main(int argc, char* argv[])
{
	string A, B;
	Nhap(A);
	Nhap(B);
	unsigned long int decA = ChuyenCoSo(A);
	unsigned long int decB = ChuyenCoSo(B);
	cout << decA + decB;
	return 0;
}
