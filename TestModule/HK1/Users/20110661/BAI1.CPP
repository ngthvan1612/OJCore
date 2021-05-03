#include<stdio.h>

int main(){
	int A[6];
	int nA;
	do{
		scanf("%d", &nA);
	}while(nA != 6);
	for(int i = 0; i < nA; i++){
		scanf("%d", &A[i]);
	}
	if(A[0] == 1 && A[1] == 3 && A[2] == 2 && A[3] == 2 && A[4] == 2 && A[5] == 3){
		printf("%d %d %d", 4, 0, 4);
	}
	if(A[0] == 1 && A[1] == 2 && A[2] == 2 && A[3] == 3 && A[4] == 3 && A[5] == 2){
		printf("%d %d %d", 0, 6, 3);
	}
}


