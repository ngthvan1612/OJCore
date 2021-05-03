#include<stdio.h>
#include<math.h>


int tongmin(int m , int n , int arr[][100]);
void nhapmang(int &m , int &n , int arr[][100]);
int lasonguyento(int x);
int tongmin(int m , int n , int arr[][100]);


void main()
{
	int m ,n ;
	int arr[100][100];
	nhapmang(m,n,arr);
	int min = tongmin(m,n,arr);
	printf("%d" , min);
	
}

void nhapmang(int &m , int &n , int arr[][100])
{
	scanf("%d%d" , &m , &n);
	for(int i=0 ; i<m ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			scanf("%d" , &arr[i][j]);
		}
	}
}

int lasonguyento(int x)
{
	int d = 0;
	if(x<2 && x!=0)
		return 0;
	if(x==0)
		return 1;
	for(int i=2 ; i<=sqrt(x) ; i++)
	{
		if(x%i==0)
		{
			d++;
			return 0;
		}
	}
	if(d==0)
		return 1;


}
int tongmin(int m , int n , int arr[][100])
{
	int min = 37258;
	for(int i = 0 ; i<m ; i++)
	{
		int sum = 0;
		for(int j=0 ; j<n ; j++)
		{
			if(lasonguyento(arr[i][j]) == 1)
			{
				sum += arr[i][j];
			}

		}
		if(sum < min)
		{
			min = sum;
		}
	}
	return min;
}