#include<stdio.h>
int main(){
#define keo 1
#define bua 2
#define bao 3
  int x,y,z,t,u,v;
  scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
  int suma;
  int sumb;
  int sumc;
  if(x==keo){
	  if(y==bua)
		  sumb+=3;
	  if(y==keo)
	  {sumb+=1;
	  suma+=1;}
	  if(y==bao)
		  suma+=3;
  }
  else {if(x==bua){
	  if(y==bao)
		  sumb+=3;
	  if(y==bua)
	  {sumb+=1;
	  suma+=1;}
	  if(y==keo)
		  suma+=3;
  }}
  else {if(x==bao){
	  if(y==keo)
		  sumb+=3;
	  if(y==bao)
	  {sumb+=1;
	  suma+=1;}
	  if(y==bua)
		  suma+=3;
  }}
  if(z==keo){
	  if(t==bua)
		  sumc+=3;
	  if(t==keo)
	  {sumc+=1;
	  suma+=1;}
	  if(t==bao)
		  suma+=3;
  }
  else {if(z==bua){
	  if(t==bao)
		  sumc+=3;
	  if(t==bua)
	  {sumc+=1;
	  suma+=1;}
	  if(t==keo)
		  suma+=3;
  }}
  else {if(z==bao){
	  if(t==keo)
		  sumc+=3;
	  if(t==bao)
	  {sumc+=1;
	  suma+=1;}
	  if(t==bua)
		  sumc+=3;
  }}
  if(u==keo){
	  if(v==bua)
		  sumc+=3;
	  if(v==keo)
	  {sumc+=1;
	  sumb+=1;}
	  if(v==bao)
		  sumb+=3;
  }
  else { if(u==bua){
	  if(v==bao)
		  sumc+=3;
	  if(v==bua)
	  {sumc+=1;
	  sumb+=1;}
	  if(v==keo)
		  sumb+=3;
  }}
  else {if(u==bao){
	  if(v==keo)
		  sumc+=3;
	  if(v==bao)
	  {sumc+=1;
	  sumb+=1;}
	  if(v==bua)
		  sumb+=3;
  }}

printf("%d %d %d",suma,sumb,sumc);
return 0;
}