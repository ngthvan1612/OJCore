#include<stdio.h>
#include<math.h>
#include<string.h>

void main()
{
	int a[100]; int n;
	scanf("%d",&n);
	for(int j = 0; j <n; j++)
	{
		scanf("%d",&a[j]);
	}
	int vt = -1;
	int kq = -1;
	for(int i = 0; i <n -1; i++)
	{
		if((a[i]%2==0 && a[i+1]%2==0) || (a[i]%2!=0 && a[i+1]%2!=0))
		{
			vt = i +1;
			break;
		}
	}
	if(vt==-1) printf("%d",kq);
	else printf("%d",vt);

}