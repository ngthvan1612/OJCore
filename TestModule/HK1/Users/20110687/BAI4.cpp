// BAI4.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;
const int SIZE = 100;

void NhapMang(int A[SIZE][SIZE], int &hang, int &cot)
{
	cin >> hang >> cot;
	for (int i = 0; i < hang; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cin >> A[i][j];
		}
	}
}

bool SoNguyenTo(int a)
{
	if(a == 1 || a == 0)
		return false;
	for(int i = 2; i < a; i++)
	{
		if(a % i == 0)
		{
			return false;
		}
	}
	return true;
}

int TongNguyenToDong(int A[SIZE][SIZE], int hang, int cot)
{
	int sum = 0;
	for (int i = 0; i < cot; i++)
	{
		if (SoNguyenTo(A[hang][i]) == true)
		{
			sum += A[hang][i];
		}
	}
	return sum;
}

int LonNhatCot(int A[SIZE][SIZE], int hang, int cot)
{
	int max = TongNguyenToDong(A, 0, cot);
	for (int i = 1; i < hang; i++)
	{
		if (TongNguyenToDong(A, i, cot) < max)
		{
			max = TongNguyenToDong(A, i, cot);
		}
	}
	return max;
}

int main(int argc, char* argv[])
{
	int A[SIZE][SIZE];
	int hang, cot;
	NhapMang(A, hang, cot);
	int ketqua = LonNhatCot(A, hang, cot);
	cout << ketqua;
	return 0;
}
