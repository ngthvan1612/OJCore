#include<stdio.h>
#include<conio.h>



void main(){
	int x,y,z,t,u,v;
	int a = 0;
	int b =0;
	int c=0;

    scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
    scanf("%d",&t);
    scanf("%d",&u);
    scanf("%d",&v);

	if((x == 1 && y ==3) || (x==3 && y == 2) && (x==2 && y==1)  ){
		a = a+ 3;
	
	}

	if((y== 1 && x ==3) || (y==3 && x == 2) && (y==2 && x==1)){

	    b = b + 3;

	} 

	if((y== 1 && x ==1) || (y==2 && x == 2) && (y==3 && x==3)){

	   a = a+1;

	   b=b+1;

	}

	if((z == 1 && t ==3) || (z==3 && t == 2) && (z==2 && t==1)  ){
		a = a+ 3;
	
	}

	if((t== 1 && z ==3) || (t==3 && z == 2) && (t==2 && z==1)){

	    c = b + 3;

	} 

    if((t== 1 && z ==1) || (t==2 && z == 2) && (t==3 && z==3)){
     
	   a= a+1;
	   
	   c=c+1;
	}



    if((u == 1 && v ==3) || (u==3 && v == 2) && (u==2 && v==1)  ){
		b = b+ 3;
	
	}

	if((v== 1 && u ==3) || (v==3 && u == 2) && (v==2 && u==1)){

	    c = c + 3;

	} 

    if((v== 1 && u ==1) || (v==2 && u == 2) && (v==3 && u==3)){
     
	   b= b+1;
	   
	   c=c+1;
	}



   printf("%d%d%d",a,b,c);
 	
}
