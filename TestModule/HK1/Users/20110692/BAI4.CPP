#include <stdio.h>
#include <iostream>
using namespace std;


#define MAX 200

bool nguyento(int a);

void main()
{
	int m,n;
	cin>>m>>n;
	
	int i,j;

	int A[MAX][MAX];


	for (i=0; i<m; i++)
		for (j=0; j<n; j++)
			cin>>A[i][j];

	int min=999;
	int s;
	for(i=0; i<m; i++)
	{
		s=0;
		for (j=0; j<n; j++)
		{
			if (nguyento(A[i][j])==true)
				s+=A[i][j];
		}

		if (s<min)
			min=s;
	}

	printf("%d",min);

}


bool nguyento(int a)
{
	if (a==1 && a==0)
		return false;
	if (a==2 || a==3)
		return true;
	int k=0;
	for (int i=1; i<a; i++);
		if (a % i ==0)
			k++;
	if (k==2)
		return true;
	else 
		return false;
}
