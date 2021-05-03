#include <stdio.h>

void nhap(int A[], int &n)
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		{
			scanf("%d", &A[i]);
		}
}
int check(int a)
{
	int check = 0;
	if (a%2==0)
		check = 1;
	else
		check = 0;
	return check;
}
int kTra(int A[], int n)
{
	int kq = 0;
	for (int i = 0; i < n-1; i++)
		{
			if(check(A[0]))
				{
					if (check(A[i]) == 1 && check(A[i+1]) == 0 || check(A[i]) == 0 && check(A[i+1])==1)
						{
							kq = -1;
						}
					else
						{
							kq = i+1;
							break;
						}
				}
			else 
				{
					if (check(A[i]) == 0 && check(A[i+1]) == 1 || check(A[i]) == 1 && check(A[i+1])==0)
						{
							kq = -1;
						}
					else
						{
							kq = i+1;
							break;
						}
				}
		}
	return kq;
}

void main()
{
	int A[100];
	int n;
	nhap(A, n);
	int kq = kTra(A, n);
	printf("%d", kq);
}


