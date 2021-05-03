#include <iostream>
#include <math.h>		
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>	
#include <iomanip>	





using namespace std;

void NhapMang(int a[][100], int m, int n);
void XuatMang(int a[][100], int m, int n);
bool isPrime(int n);

int main()
{
	int a[100][100];
	int m, n;
	cin >> m >> n;
	NhapMang(a, m, n);
	cout << 1;
	
}

void NhapMang(int a[][100], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
void XuatMang(int a[][100], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cout << a[i][j];
}
bool isPrime(int n)
{
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return false;
	return true;
}
int Counttotal(int a[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (isPrime(a[i]))
			count++;
	}
	return count;
}









