#include<stdio.h>
bool check(int n)
{
	if( n % 2 == 0) return true;
	else return false;
}
int main()
{
	int i,n,arr[100];
	scanf ("%d", &n);
	for (i = 0; i < n ; i++){
		scanf ("%d", &arr[i]);
	}
	int k = 0;
	if (check(arr[0]) == true) 
		for (i = 0; i < n ; i++)
		{
			if (check(arr[i + 2]) == true && check(arr[i+ 1])== false) 
			{
				k = -1;
			}
		}
	else if (check(arr[0]) == false ) 
		for ( i = 0; i < n ; i++)
		{
			if (check(arr[i + 2]) == false && check(arr[i +1]) == true) {
				k = -1;
			}
		}

		printf ("%d", k);
		return 0;
}


