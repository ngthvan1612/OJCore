#include<stdio.h>
#include<string.h>
double tinhTong(char s1[], char s2[]);
double chuyenDoi(char s[]);
double so(char s);
int main(){
	char s1[12], s2[12];
	gets(s1);
	gets(s2);
	double kq=tinhTong(s1, s2);
	printf("%.0lf", kq);
	return 0;
}

double tinhTong(char s1[], char s2[]){
	double tong;
	tong=chuyenDoi(s1)+chuyenDoi(s2);
	return tong;
}
double chuyenDoi(char s[]){
	double t=0;
	for(unsigned long i=0; i<strlen(s); i++){
		t=16*t+so(s[i]);
	}
	return t;
}
double so(char s){
	if(s>='0'&&s<='9') s-='0';
	else if(s>='A'&&s<='F') s=s-'A'+10;
	return s;
}