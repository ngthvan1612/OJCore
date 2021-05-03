#include<stdio.h> 
void nhapmang(int a[] ,int &n) 
{
	scanf("%d" ,&n) ;
	for(int i = 0 ; i < n ; i++) {
		scanf("%d" ,&a[i]) ;
	}
}
int KiemTra(int a[] ,int n) 
{
	int O = 0 ;
	
	
		 
		
			
	
	for(int i = 0 ; i < n ; i ++) 
	{
		 if( a[i] % 2 == 0 &&  a[i+1] % 2 == 0 ||  a[i] % 2 != 0 &&  a[i+1] % 2 != 0)
		 O = i + 1 ; 
		 break ;
	}
	for(int i = 0 ; i < n ; i++) 
	{
		if( a[i] % 2 == 0 && a[i + 1] % 2 != 0 ||  a[i] % 2 != 0 && a[i+1]  % 2 == 0) 
		O = -1 ;
	}
	
	return O ;
	

	
	
}
int main()
{
	int a[100] ;
	int n ;
	nhapmang(a , n) ;
	int S = KiemTra(a , n) ;
	printf("%d" ,S) ;
	
	return 0 ;
}
