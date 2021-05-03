#include<stdio.h>
int GhiB(int n, int A[], int B[]);
int KiemTra(int n, int B[]);
void main()
{
	int n;
	int A[110];
	int B[110];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &A[i]);
	GhiB(n, A, B);
	int kq = KiemTra(n, B);
	printf("%d", kq);
}
int KiemTra(int n, int B[])
{
	int kothoa = 0;
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (B[i] == B[i + 1])
		{
			if (dem == 0)
			{
				kothoa = i+1;
			}
			dem ++;
		}
	if (dem > 0)
		return kothoa;
	return -1;
}

int GhiB(int n, int A[], int B[])
{
	for (int i = 0; i < n; i++)
	{
		B[i] = A[i]%2;
	}
	return 0;
}