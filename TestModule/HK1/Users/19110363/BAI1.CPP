#include<iostream>
void nhap(int &x,int &y,int &z,int &t,int &u,int &v);
void Work(int x,int y,int z,int t,int u,int v,int a,int b,int c);
using namespace std;
int main(){
	int a,b,c,x,y,z,t,u,v;
	nhap(x,y,z,t,u,v);
	Work(x,y,z,t,u,v,a,b,c);
	return 0;

}
void nhap(int &x,int &y,int &z,int &t,int &u,int &v){
	cin>>x>>y>>z>>t>>u>>v;
}
void Work(int x,int y,int z,int t,int u,int v,int a,int b,int c){
	a=0;
	b=0;c=0;
	if((x==1 && y==3)||(x==3 && y==2) ||(x==2 && y==1))
		a+=3;
	if((x==3 && y==1)||(x==2 && y==3) ||(x==1 && y==2))
		b+=3;
	if(x==y){
		a++;
		b++;
	}
	if((z==1 && t==3)||(z==3 && t==2) ||(z==2 && t==1))
		a+=3;
	if((z==3 && t==1)||(z==2 && t==3) ||(z==1 && t==2))
		c+=3;
	if(z==t){
		a++;
		c++;
	}
	if((u==1 && v==3)||(u==3 && v==2) ||(u==2 && v==1))
		b+=3;
	if((u==3 && v==1)||(u==2 && v==3) ||(u==1 && v==2))
		c+=3;
	if(u==v){
		b++;
		c++;
	}
	cout<<a<<" "<<b<<" "<<c<<endl;

}