#include<iostream>
using namespace std;
void nhap(int &x,int &y,int &z,int &t,int &u,int &v){
	cin>>x>>y>>z>>t>>u>>v;
}
void tinh(int x,int y,int &ia,int &ib){
	switch(x){
	    case 1:{
		   if(y==3) ia+=3;
		   if(y==2) ib+=3;
		   if(y==1){
			   ia++;
			   ib++;
		   }
		   break;
		}
		case 2:{
			if(y==1) ia+=3;
			if(y==3) ib+=3;
		    if(y==2){
			   ia++;
			   ib++;
			}
			break;
			   }
		case 3:{
			if(y==2) ia+=3;
			if(y==1) ib+=3;
		    if(y==3){
			   ia++;
			   ib++;
		   }
		   break;
			   }
	}

}
void xuat(int ia1,int ia2,int ib1,int ib2,int ic1,int ic2){
	cout<<ia1+ia2<<" "<<ib1+ib2<<" "<<ic1+ic2;

}
void main(){
	int x,y,z,t,u,v;
	int ia1=0,ia2=0;
	int ib1=0,ib2=0;
	int ic1=0,ic2=0;
	nhap(x,y,z,t,u,v);
	tinh(x,y,ia1,ib1);
	tinh(z,t,ia2,ic1);
	tinh(u,v,ib2,ic2);
	xuat(ia1,ia2,ib1,ib2,ic1,ic2);
}