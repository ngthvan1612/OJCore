#include <iostream>
#include <math.h>
using namespace std;
int doi(char c[])
{
	long int tong=0;
	int a=0;
	int i=0;
	
	for (int j=strlen(c)-1;j>=0;j--)
	{
		if (c[j]>='0'&&c[j]<='9')
		tong+= (int) ((int)c[j]-48)*(int)pow(16,strlen(c)-j-1);
		else
			tong+=(int) ((int)c[j]-55)*(int)pow(16,strlen(c)-j-1);
	}
	return tong;
}
void main()
{
	char c[12];
	char d[12];
	cin >> c;
	cin >> d;
	long int tong =0;
	tong = doi(c)+doi(d);
	printf("%d",tong);

}