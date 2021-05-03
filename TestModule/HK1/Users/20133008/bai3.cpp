#include<stdio.h>;
void main()
{
	int a,A[1000];
	scanf("%d",&a);
	int i;
	for(i=0;i<a;i++)
		scanf("%d",&A[i]);
	for(i=0;i<a;i++)
		if(A[i]%2==0 && A[i+2]%2==0)
		printf("-1");

}