#include<stdio.h>

void nhap(int &n, int a[]);
void Kiemtramang(int n, int a[]);

int main(){
	int n, a[100];
	nhap(n, a);
	Kiemtramang(n, a);
	return 0;
}

void nhap(int &n, int a[]){
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
}

void Kiemtramang(int n, int a[]){
	int d = 0;
	if(a[0] % 2 == 0){
		for(int i = 1; i < n-1; i++){
			if(a[i] % 2 == 1 && a[i+1] % 2 == 0)
				d++;
		}
	}
	else{
		for(int i = 1; i < n - 1; i++){
			if(a[i] % 2 == 0 && a[i+1] % 2 == 1)
				d++;
		}	
	}
	if(d == n-3)
		printf("-1");
	else{
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0 && a[i+1]%2==0)
			printf("%d", i+1); 
		else if(a[i] % 2== 1 && a[i+1] % 2 == 1)
			printf("%d", i+1);
	}		
		
}

}