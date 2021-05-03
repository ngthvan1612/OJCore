#include<stdio.h>
void xuat(int kq);
void nhap(int arr[], int& n);
bool soChan(int n);
int kiemtra(int arr[], int n);
int main()
{
	int arr[100];
	int n;
	nhap(arr, n);
	int kq = kiemtra(arr, n);
	xuat(kq);
}
void nhap(int arr[], int& n)
{
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
}
bool soChan(int n)
{
	if (n % 2 == 0)
		return true;
	else
		return false;
}
int kiemtra(int arr[], int n)
{
	int k;
	for (int i = 0; i < n; i++)
	{
		if (soChan(arr[i]) == true)
		{
			if (soChan(arr[i + 1]) == false)
				k = -1;
		}
		
		if (soChan(arr[i]) == false)
		{
			if (soChan(arr[i + 1]) == true)
				k = -1;
		}
		if (soChan(arr[i]) == true)
		{
			if (soChan(arr[i + 1]) == true)
				k = i;
		}

		if (soChan(arr[i]) == false)
		{
			if (soChan(arr[i + 1]) == false)
				k = i;
		}
	}
	return k;
	
}
void xuat(int kq)
{
	printf("%d", kq);
}