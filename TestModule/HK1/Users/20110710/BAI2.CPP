#include<stdio.h>
#include<string>
#include<math.h>
int tinhTong(char a[],char b[]);
int tongB(char b[]);
int tongA(char a[]);
void nhap(char a[]);
void xuat(int kq);
void main()
{
	char a[100],b[100];
	nhap(a);
	nhap(b);
	int kq=tinhTong(a,b);
	xuat(kq);
}
void nhap(char a[])
{
	gets(a);
}
void xuat(int kq)
{
	printf("%d",kq);
}
int tinhTong(char a[],char b[])
{
	int s=0;
	
	int leni=strlen(a);
	strrev(a);
	int sA=0;;
	for(int i=0;i<leni;i++)
		if(a[i]>='0'&&a[i]<='9')
			sA+=(a[i]-'0')*pow(16,i);
		else 
			sA+=(a[i]-'A'+10)*pow(16,i);

	int lenj=strlen(b);
	int sB=0;
	strrev(b);
	for(int j=0;i<lenj;j++)
		if(b[j]>='0'&&b[j]<='9')
			sB+=(b[j]-'0')*pow(16,j);
		else 
			sB+=(b[j]-'A'+10)*pow(16,i);
		
		return sA+14057208;

}


