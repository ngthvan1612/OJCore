#include<stdio.h>
void nhap(int &n,int a[]);
int tinh(int n,int a[]);
void xuat(int kt);

void main()
{
  int n,a[100];
  nhap(n,a);
  int kt=tinh(n,a);
  xuat(kt);
}
void nhap(int &n,int a[])
{
  scanf("%d",&n);
  for(int i=0;i<n;i++)
	  scanf("%d",&a[i]);
}
int tinh(int n,int a[])
{
   int kq;
   int x,y;
   int diema=0,diemb=0;
   if((a[0]%2)==1)
   {  
     for(int i=0;i<n;i+=2)
	 {
		 if((a[i]%2)==0) 
		 {
			 x=i;
		     break;
		 }
		 else diema+=1;
	 }
	 for(int j=1;j<n;j+=2)
	 {
		 if((a[j]%2)==1)
		 {
			 y=j;
		     break;
		 }
	   else diemb+=1;
	 }
	 if((diema+diemb)==n) kq= -1;
	 else 
	 {
	  if(x>y) kq= y;
	  else kq= x;
	 }
   }
  else 
   {
     for(int i=0;i<n;i+=2)
	 {
		 if((a[i]%2)==1) 
		 {
			 x=i;
			 break;
		 }
		 else diema+=1;
	 }
	 for(int j=1;j<n;j+=2)
	 {
		 if((a[j]%2)==0) 
		 {
			 y=j;
		     break;
		 }
	   else diemb+=1;
	 }
	 if((diema+diemb)==n) kq= -1;
	 else 
	 {
	  if(x>y) kq= y;
	  else kq= x;
	 }
   }
	 return kq;
}
void xuat(int kt)
{
    printf("%d",kt);
}