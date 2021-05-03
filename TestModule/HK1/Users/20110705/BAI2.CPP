#include <iostream>

using namespace std;
int chuyendoiso(char a[]);
void main()
{
	char a[100], B[100];
	gets(a);
	gets(B);
	
	int kq=chuyendoiso(B)+chuyendoiso(a);
	printf("%d",kq);


}

int chuyendoiso(char a[])
{
	int kq=0;
	int ns =strlen(a);
	strrev(a);
	for(int i=0;i<ns;i++)
	{
		int kqq=1;
			for(int j=0;j<=i;j++)
			{
				kqq=kqq*16;
				if(a[i]>='0'&&a[i]<='9')
					kq=kq+kqq*(a[i]-'0');
				else kq=kq+kqq*(a[i]+10-'A');
			}
			return kq;
	}

			
}