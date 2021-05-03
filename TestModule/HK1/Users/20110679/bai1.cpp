#include <iostream>
using namespace std;
void sosanh(int x, int y, int &pa, int &pb){
	if(x==y){
		pa++;
		pb++;
	}
	if(x==1&&y==3){
		pa+=3;
	}
	if(x==3&&y==1){
		pb+=3;
	}
	if(x==3&&y==2){
		pa+=3;
	}
	if(x==2&&y==3){
		pb+=3;
	}
	if(x==2&&y==1){
		pa+=3;
	}
	if(x==1&&y==2){
		pb+=3;
	}
}
void main(){
	int x,y,z,t,u,v;
	cin>>x>>y>>z>>t>>u>>v;
	int pa = 0 , pb = 0 , pc = 0;
	sosanh(x,y,pa,pb);
	sosanh(z,t,pa,pc);
	sosanh(u,v,pb,pc);
	cout<<pa<<" "<<pb<<" "<<pc;
}