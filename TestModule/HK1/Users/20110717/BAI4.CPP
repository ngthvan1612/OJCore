#include<stdio.h>
#include<conio.h>

void nhapMang(int d, int c, int arr[][100]){
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
}
void xuatMang(int d, int c, int arr[][100]){
	for(int i=0;i<d;i++){
		for(int j=0;j<c;j++){
			printf("%d  ",arr[i][j]);
		}
	}
}
bool soNT(int n){
	if(n<2){
		return false;
	}
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
void  tinhTongNTTrenDong(int d, int c, int arr[][100]){
	for(int i=0;i<d;i++){
		int sum=0;
		for(int j=0;j<c;j++){
			if(soNT(arr[i][j])==true){
				printf("%d  ",sum);
			}
			printf("\n");
		}
	}
}

int main(){
	int arr[100][100];
	int d,c;
	scanf("%d",&d);
	scanf("%d",&c);
	
	nhapMang(d,c,arr);
	xuatMang(d,c,arr);
	tinhTongNTTrenDong(d,c,arr);
	tinhTongNTTrenDong(d,c,arr);
	
	getch();
	return 0;
}