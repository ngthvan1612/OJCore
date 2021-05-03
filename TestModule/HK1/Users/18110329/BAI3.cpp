#include<iostream>
using namespace std;



void nhapmang(int a[], int &n)
{
	
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
}
void xuatmang(int a[], int n)
{
	
	for(int i=0; i<n; i++)
	{
		cout << a[i] << " ";
	}
}
int check_xen_ke(int a[], int n)
{
	int dem = 0;
	
	
	
for(int i=1; i<n; i++)
	{
		if( (a[i-1] % 2 == 0 && a[i] % 2 != 0 ) || ( (a[i-1] % 2 != 0 && a[i] % 2 == 0 ) ) )
		{
			dem++;
		}
		
	}

if(dem == n-1)
		return -1;
	return 0;

}
void main()
{
	int a[100], n;
	cin >> n;
	nhapmang(a,n);
	
	int result = check_xen_ke(a,n);
	cout << "\n";
	cout << result;
}
