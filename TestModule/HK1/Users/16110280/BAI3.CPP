#include<stdio.h>
int Chanle(int n)
{
	int csd;
	while (n !=0)
	{
		csd = n % 10;
		n /= 10;

	}
	if(csd % 2 != 0)
		return 1;
	else 
		return 0;

}
int Chanle(int a[], int n)
{
	for (int i =0; i < n; i++)
		if (Chanle(a[i]) == 1)
			return a[i];
	return -1;
}
void main()
{
	int a[100], n;
	NhapMang(a, n);
	printf("%d", Chanle(a, n);

}


