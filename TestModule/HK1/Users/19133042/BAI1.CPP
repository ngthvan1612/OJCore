#include <stdio.h>
void xuLy(int x,int y,int z ,int t ,int u ,int v);
void main()
{
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	xuLy(x,y,z,t,u,v);
}
void xuLy(int x,int y,int z ,int t ,int u ,int v)
{
	int diemA = 0 ,diemB =0 ,diemC = 0;
	//tinh diem cho A và B luot dau
	if(x==1 && y == 3)
		diemA += 3;
	else if(x==3 && y == 1)
		diemB+=3;
	if(x==3 && y == 2)
		diemA += 3;
	else if(x==2 && y == 3)
		diemB+=3;
	if(x==2 && y == 1)
		diemA += 3;
	else if(x==1 && y == 2)
		diemB+=3;
	if(x==1 && y==1 || x==2 && y==2 || x==3 && y==3){
		diemA+=1;
		diemB+=1;
	}
	//tinh diem cho A va C luot 2
	if(z==1 && t == 3)
		diemA += 3;
	else if(z==3 && t == 1)
		diemC+=3;
	if(z==3 && t == 2)
		diemA += 3;
	else if(z==2 && t == 3)
		diemC+=3;
	if(z==2 && t == 1)
		diemA += 3;
	else if(z==1 && t == 2)
		diemC+=3;
	if(z==1 && t==1 || z==2 && t==2 || z==3 && t==3){
		diemA+=1;
		diemC+=1;
	//tinh diem cho B va C luot 3
	if(u==1 && v == 3)
		diemB += 3;
	else if(u==3 && v == 1)
		diemC+=3;
	if(u==3 && v == 2)
		diemB += 3;
	else if(u==2 && v == 3)
		diemC+=3;
	if(u==2 && v == 1)
		diemB += 3;
	else if(u==1 && v == 2)
		diemC+=3;
	if(u==1 && v==1 || u==2 && v==2 || u==3 && v==3){
		diemB+=1;
		diemC+=1;
	printf("%d %d %d",diemA,diemB,diemC);
}
