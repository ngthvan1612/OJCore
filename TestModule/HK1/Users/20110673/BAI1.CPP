#include <iostream>

using namespace std;
int thangthua(int a, int b);
void tongdiem(int a[], int diem[]);
void xuat(int diem[]);
int main(){
	int a[6];
	for(int i=0;i<6;i++){
		cin>>a[i];
	}
	int diem[3];
	for(i=0;i<3;i++)
		diem[i]=0;
	tongdiem(a, diem);
	xuat(diem);
	return 0;
}
int thangthua(int a, int b){
	if (a == 1 && b==2)
		return 0;
	else if (a==1 && b==3)
		return 1;
	else if (a==2 && b==3)
		return 0;
	else if (a==2 && b==1)
		return 1;
	else if (a==3 && b==1)
		return 0;
	else if (a==3 && b==2)
		return 1;
	else 
		return 2;
}
void tongdiem(int a[], int diem[]){
	for (int i=0;i<3;i++){
		if (i==0){
			int t= thangthua(a[0],a[1]);
				if (t==1){
				diem[i]+=3;
				diem[i+1]+=0;	
			}
			else if (t==0){
				diem[i+1]+=3;
				diem[i]+=0;
			}
			else {
				diem[i]+=1;
				diem[i+1]+=1;
			}
		}
		else if(i==1){
			int t= thangthua(a[2],a[3]);
			if (t==1){
				diem[0]+=3;
				diem[2]+=0;	
			}
			else if (t==0){
				diem[2]+=3;
				diem[0]+=0;
			}
			else {
				diem[0]+=1;
				diem[2]+=1;
			}
		}
		else {int t= thangthua(a[4],a[5]);
			if (t==1){
				diem[1]+=3;
				diem[1+1]+=0;	
			}
			else if (t==0){
				diem[1+1]+=3;
				diem[1]+=0;
			}
			else {
				diem[1]+=1;
				diem[1+1]+=1;
			}
		}
	}
}
void xuat(int diem[]){
	for (int i=0;i<3;i++){
		cout<<diem[i]<<" ";
	}
}
