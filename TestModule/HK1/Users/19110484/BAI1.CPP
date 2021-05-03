#include<stdio.h>
#include<string.h>
#include<math.h>

int chuyen(char a[], int A[])
{
	int so=0;
	int len = strlen(a);
	for (int i = 0; i < len; i++)
	{
		if (a[i] >= '0' && a[i] <= '9')
			A[i] = (int)a[i] - 48;
		else
			A[i] = (int)a[i]-55;
		so = so + A[len - 1 - i] *10^ i;
	}
	return so;
}
void main()
{

	printf("-1");


}
