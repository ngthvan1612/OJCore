#include<iostream>
using namespace std;
void nhap(int &a, int &b);
int Sum(int a, int b);
void xuat(int a, int b);
int main(){
	char a[10];
	char b[10];
	nhap(a,b);
	xuat(a,b);
	return 0;
}
void nhap(char a[], char b[])
{
	gets(a);
	gets(b);
}
int Sum(int a, int b)
{
	int c=a+b;
	return c;
}
void xuat(int a, int b)
{
	cout<<Sum(a,b);
}