#include<stdio.h>
int KBB(int a, int b);
void KETQUA(int A[6]);
void gimme(int A[6]);

void main()
{
	int A[6];
	gimme(A);
	KETQUA(A);
}
void gimme(int A[6])
{
	for(int i = 0; i < 6; i++)
		scanf("%d",&A[i]);
}
void KETQUA(int A[6])
{
	int B[6];
	for(int j = 0; j < 6; j++)
	{
		B[j] = 0;
	}
	for(int i = 0; i < 5; i = i + 2)
	{
		if(KBB(A[i],A[i+1]) == 1 ) 
		{
			B[i] = B[i] + 3;
			B[i+1] = B[i+1] + 0;
		}
		if(KBB(A[i],A[i+1]) == 0 ) 
		{
			B[i] = B[i] + 0;
			B[i+1] = B[i+1] + 3;
		}
		if(KBB(A[i],A[i+1]) == 2 ) 
		{
			B[i] = B[i] + 1;
			B[i+1] = B[i+1] + 1;
		}
	}
	int kqa = B[0] + B[2];
	int kqb = B[1] + B[4];
	int kqc = B[3] + B[5];
	printf("%d%d%d",kqa,kqb,kqc);
}
int KBB(int a, int b)
{
	//thang : 1   -   thua : 0   -   hoa : 2
	if( a == b ) return 2;
	if( (a == 1 && b == 3) || ( a == 3 && b == 2 ) || ( a == 2 || b == 1 ) ) return 1;
	if( (a == 3 && b == 1) || ( a == 2 && b == 3 ) || ( a == 1 || b == 2 ) ) return 0;
}