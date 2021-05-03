#include <stdio.h>
void nhap(int A[]);

void main()
{
	int A[6];
	nhap(A);
	int diemA=0,diemB=0,diemC=0;
	if((A[0]==1&&A[1]==3)||(A[0]==3&&A[1]==2)||(A[0]==2&A[1]==1)) diemA = diemA+ 3;
	else if((A[0]==1&&A[1]==1)||(A[0]==2&&A[1]==2)||(A[0]==3&A[1]==3)) {diemA = diemA + 1; diemB=diemB+1;}
	else diemB= diemB+3;


	if((A[2]==1&&A[3]==3)||(A[2]==3&&A[3]==2)||(A[2]==2&A[3]==1)) diemA = diemA+ 3;
	else if((A[2]==1&&A[3]==1)||(A[2]==2&&A[3]==2)||(A[2]==3&A[3]==3)) {diemA = diemA + 1; diemC=diemC+1;}
	else diemC= diemC+3;

	if((A[4]==1&&A[5]==3)||(A[4]==3&&A[5]==2)||(A[4]==2&A[5]==1)) diemB = diemB+ 3;
	else if((A[4]==1&&A[5]==1)||(A[4]==2&&A[5]==2)||(A[4]==3&A[5]==3)) {diemB = diemB + 1; diemC=diemC+1;}
	else diemC= diemC+3;

	printf("%d %d %d", diemA, diemB, diemC);
}
void nhap(int A[])
{
	for (int i=0;i<6;i++){
		scanf("%d",&A[i]);
	}

}
