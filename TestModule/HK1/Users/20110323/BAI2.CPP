#include<stdio.h>
#include<string.h>
#include<math.h>
void nhap(char a[],char b[]){
	gets(a);
	gets(b);
}
unsigned long sum(char x[]){
    strlen(x);
	int l=strlen(x);
	unsigned long kq=0;
	for(int i=0;i<l;i++){
		if(x[i]>='0'&&x[i]<='9')
			kq=kq+(unsigned long)(x[i]-'0')*pow(16,l-i-1);
		else kq=kq+(unsigned long)(x[i]-55)*pow(16,l-i-1);
	}
	return kq;
}
int  main(){
    char a[100];
	char b[100];
	nhap(a,b);
    printf("%lu",sum(a)+sum(b)); 
	return 0;
}