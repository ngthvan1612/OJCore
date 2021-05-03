#include<stdio.h>
#include<string.h>
#include<math.h>
void nhapChuoi(char S1[], char S2[]);
void xuat(int x);
int doiHe(char S[]);
int tinhTong(char S1[], char S2[]);
void main()
{
	char S1[100], S2[100];
	nhapChuoi(S1,S2);
	int kq=tinhTong(S1,S2);
	xuat(kq);
}
void nhapChuoi(char S1[], char S2[])
{
	gets(S1);
	gets(S2);
}
void xuat(int x)
{
	printf("%d", x);
}
int doiHe(char S[])
{
	int t=0;
	S=strrev(S);
	int len=strlen(S);
	for(int i=0;i<len;i++)
		if(S[i]>='0' && S[i]<='9')
			t=t+(S[i]-'0')*(long)pow(16,i);
		else
			t=t+(S[i]-55)*(long)pow(16,i);
	return t;
}
int tinhTong(char S1[] , char S2[])
{
	int tong;
	tong = doiHe(S1)+doiHe(S2);

	return tong;
}