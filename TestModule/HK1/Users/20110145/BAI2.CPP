#include<iostream>
#include<string>
#include<math.h>
using namespace std;
void nhap(char s1[],char s2[]){
 cin>>s1>>s2;
}
void xuat(unsigned long kq){
	cout<<kq;
}
unsigned long doi(char s[]){
	unsigned long kq=0;
	int n=strlen(s);
	s=strrev(s);
	for(int i=0;i<n;i++){
		if(s[i]>='0'&&s[i]<='9')
			kq=kq+(s[i]-'0')*(unsigned long)pow(16,i);
		else 
			kq=kq+(s[i]-55)*(unsigned long)pow(16,i);
	}
	return kq;
}
void main(){
	char s1[100],s2[100];
	nhap(s1,s2);
	unsigned long n1=doi(s1);
	unsigned long n2=doi(s2);
	unsigned long kq= n1+n2;
	xuat(kq);
}