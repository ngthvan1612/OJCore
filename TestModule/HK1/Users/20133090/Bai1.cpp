#include<stdio.h>
int main(){
	int x,y,z,t,u,v;
	int diemA=0;
	int diemB=0;
	int diemC=0;
	scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
    if(x==1&&y==3){
		diemA=diemA+3;
	}
	else{
		if(x==1&&y==2){
			diemB=diemB+3;
		}
		else{
			if(x==2&&y==3){
				diemB=diemB+3;
            }
			else{
				if(x==2&&y==1){
					diemA=diemA+3;
				}
				else{
					if(x==3&&y==2){
						diemA=diemA+3;
					}
					else{
						if(x==3&&y==1){
							diemB=diemB+3;
						}else{
							diemA=diemA+1;
							diemB=diemB+1;
						}
					}
				}
			}
		}
}
	if(z==1&&t==3){
		diemA=diemA+3;
	}
	else{
		if(z==1&&t==2){
			diemC=diemC+3;
		}
		else{
			if(z==2&&t==3){
				diemC=diemC+3;
            }
			else{
				if(z==2&&t==1){
					diemA=diemA+3;
				}
				else{
					if(z==3&&t==2){
						diemA=diemA+3;
					}
					else{
						if(z==3&&t==1){
							diemC=diemC+3;
						}else{
							diemA=diemA+1;
							diemC=diemC+1;
						}
					}
				}
			}
		}
}
		if(u==1&&v==3){
		diemB=diemB+3;
	}
	else{
		if(u==1&&v==2){
			diemC=diemC+3;
		}
		else{
			if(u==2&&v==3){
				diemC=diemC+3;
            }
			else{
				if(u==2&&v==1){
					diemB=diemB+3;
				}
				else{
					if(u==3&&v==2){
						diemB=diemB+3;
					}
					else{
						if(u==3&&v==1){
							diemC=diemC+3;
						}else{
							diemB=diemB+1;
							diemC=diemC+1;
						}
					}
				}
			}
		}
}
   printf("%d %d %d",diemA,diemB,diemC);
   return 0;
 
}
   
					
