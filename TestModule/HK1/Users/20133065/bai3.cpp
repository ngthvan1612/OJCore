#include <stdio.h> 
void main ()
{
	int A[100],n; 
	nhap (A,n) ; 
	int kq=chanle(A,n);
	xuat (kq);

}
void nhap (int A[], int &n)
{
	scanf ("%d", &n);
	for (int i=0;i<n; i++)
		scanf(("%d",&A[i]);
}
int chanle(int A[], int n) 
{
	int ten=0;
	for (int i=0,i<n,i++ )
		if (n%i==0)
			ten=ten+A[i];
			return ten ;
		else 
			return 1;


}
void xuat (int kq )
{
	printf ("%d" kq ); 
}
