#include <iostream>
using namespace std;
void tinhDiem(int& A, int& B, int x, int y);

void main()
{
	int a[6];
	int i = 0;
	for (i = 0 ; i<6; ++i){
		cin >> a[i];
	}
	int A=0, B=0, C=0;
	i=0;
	tinhDiem(A,B,a[i],a[i + 1]);
	i+=2;
	tinhDiem(A,C,a[i],a[i + 1]);
	i+=2;
	tinhDiem(B,C,a[i],a[i + 1]);
	cout<< A << " " <<B<< " " << C;

	void tinhDiem(int& A, int& B, int x, int y){
		if ( x==y){
			++A;
			++B;
			return;
		}
		if ((x==1 && y==3) || (x==3 && y==2) || (x==2 && y==1)){
			A+=3;
			return;
		}
		B+=3;
	}
}
