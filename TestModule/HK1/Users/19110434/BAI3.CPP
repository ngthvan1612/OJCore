#include <iostream>
using namespace std;
void nhap(int &n, int A[100]);
bool isChan(int a);
void check(int n, int A[100]);
int main()
{
	int n,A[100];
	nhap(n,A);
	check(n,A);
	return 0;
}

void check(int n, int A[100])
{
	int flag =-1;
	for(int i=0;i <n-1;i++){
		if(isChan(A[i])){
			if(isChan(A[i+1])){
				flag =0;
				cout <<i+1;
			}
		}else {
			if(!isChan(A[i+1])){
				flag =0;
				cout <<i+1;
			}
		}
	}
	if(flag ==-1)
		cout <<-1;
}

bool isChan(int a)
{
	if(a%2 ==0)
	{
		return true;
	}else {return false;}
}

void nhap(int &n, int A[100])
{
	cin >>n;
	for(int i=0;i <n; i++){
		cin >>A[i];
	}
}