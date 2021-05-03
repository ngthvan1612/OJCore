#include<stdio.h>
int main(){
	int x,y,z,t,u,v;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
	int diemA=0;
	int diemB=0;
	int diemC=0;
	
	if  ((x == 1) && (y == 3)) { 
		diemA += 3;
	    diemB+=0;
	}
	    else{
		diemA+= 0;
		diemB+= 3;
		}
	    

	if(x == y){
		diemA++;
		diemB++;
	}
	if ((z== 1) && (t == 3)){
		diemA+=3;
		diemC+=0;
	}
		else{
			diemC+=3;
			diemA+=0;
		}
		if(z == t){
			diemA++;
			diemC++;
		}
			if ((u== 1) && (v == 3)){
				diemB+=3;
				diemC+=0;
			}
			else{
				diemC+=3;
				diemB+=0;
			}
			if(u == v){
				diemB++;
				diemC++;
			}
printf("diemA = %d",diemA);
printf("diemB = %d",diemB);
printf("diemC = %d",diemC);



	return 0;
}

