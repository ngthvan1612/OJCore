#include <stdio.h>
int main ()
{
	int arr[10];
	for (int i=0;i<6;i++)
		scanf("%d",&arr[i]);
	int diemA=0, diemB=0,diemC=0;
	//th1 A win in A vs B
	if (arr[0]==1 &&arr[1]==3) diemA+=3;
	if (arr[0]==2 &&arr[1]==1) diemA+=3;
	if (arr[0]==3 &&arr[1]==2) diemA+=3;

	//th2 A win in A vs C
	if (arr[2]==1 &&arr[3]==3) diemA+=3;
	if (arr[2]==2 &&arr[3]==1) diemA+=3;
	if (arr[2]==3 &&arr[3]==2) diemA+=3;
	
	//th2 B win in A vs B
	if (arr[1]==1 &&arr[0]==3) diemB+=3;
	if (arr[1]==2 &&arr[0]==1) diemB+=3;
	if (arr[1]==3 &&arr[0]==2) diemB+=3;

	//th2 B win in C vs B
	if (arr[4]==1 &&arr[5]==3) diemB+=3;
	if (arr[4]==2 &&arr[5]==1) diemB+=3;
	if (arr[4]==3 &&arr[5]==2) diemB+=3;

	//th2 C win in C vs A
	if (arr[3]==1 &&arr[2]==3) diemC+=3;
	if (arr[3]==2 &&arr[2]==1) diemC+=3;
	if (arr[3]==3 &&arr[2]==2) diemC+=3;

	//th2 C win in C vs B
	if (arr[5]==1 &&arr[4]==3) diemC+=3;
	if (arr[5]==2 &&arr[4]==1) diemC+=3;
	if (arr[5]==3 &&arr[4]==2) diemC+=3;

	//hoa
	if (arr[0]==arr[1]) 
	{
		diemA++;
		diemB++;
	}
	if (arr[2]==arr[3]) 
	{
		diemA++;
		diemC++;
	}
	if (arr[4]==arr[5]) 
	{
		diemC++;
		diemB++;
	}
	printf("%d %d %d",diemA, diemB, diemC);
	return 0;
}