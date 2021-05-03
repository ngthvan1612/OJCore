#include <iostream>
using namespace std;

int check(int a, int b);
void tinh(int x, int y, int &diem1, int &diem2);

int main()
{
	int diem1=0;
	int diem2 =0;
	int diem3 =0;
	int x,y,z,t,u,v;
	cin >>x >>y >>z >>t>>u>>v;
	tinh(x,y,diem1,diem2);
	tinh(z,t,diem1,diem3);
	tinh(u,v,diem2,diem3);
	
	cout <<diem1<<" ";
	cout <<diem2<<" ";
	cout <<diem3;
	return 0;
}

void tinh(int x, int y, int &diem1, int &diem2)
{
	if(check(x,y)==1)
	{diem1+=1;diem2+=1;}
	else if(check(x,y) ==0)
	{diem2+=3;}else{
		diem1+=3;
	}
}

int check(int a, int b)
{
	if(a ==b){
		return 1;
	}else if(a==1){
		if(b==3){
			return 2;
		}else if(b==2){
			return 0;
		}
	}else if(a==2){
		if(b==3){
			return 0;
		}else if(b==1){
			return 2;
		}
	}else if(a==3){
		if(b==1){
			return 0;
		}else if(b==2){
			return 2;
		}
	}
}