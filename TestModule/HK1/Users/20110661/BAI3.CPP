#include<stdio.h>

void nhap(int A[], int nA);
int ktChanLe(int n);
int chanLe(int A[], int nA);
void xuat(int kq);
int main(){
	int A[1000];
	int nA;
	do{
	scanf("%d", &nA);
	}while(nA <= 0 || nA > 1000);
	nhap(A, nA);
	int kq = chanLe(A, nA);
	xuat(kq);
	return 0;
}

void nhap(int A[], int nA){
	for(int i = 0; i< nA; i++){
		scanf("%d", &A[i]);
	}
}

int ktChanLe(int n){
	if(n % 2 == 0)
		return 1;
	return 0;
}

int chanLe(int A[], int nA){
	int flag = 0;
	for(int i = 0;  i < nA; i++){
		if((ktChanLe(A[i]) == 1 && ktChanLe(A[i + 1]) == 1) || (ktChanLe(A[i]) == 0 && ktChanLe(A[i + 2]) == 0)){
			flag = 1;
		}
		else{
			flag = 0;
			break;
		}

	}
	
	if(flag == 1){
		return -1;
	}
	else if(flag == 0){
		for(int j = 0;  j < nA; j++){
			if(ktChanLe(A[j]) == 1 && ktChanLe(A[j+1])== 1)
				return (j + 1);
			else if(ktChanLe(A[j]) == 0 && ktChanLe(A[j+1])== 0){
				return(j + 1);
			}
	
		}
	}
}

void xuat(int kq){
	printf("%d", kq);
}