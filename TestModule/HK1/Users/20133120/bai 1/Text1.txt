#include<stdio.h>
int main(){
int A =0;
int B =0;
int C = 0;
int x,y,z,t,u,v;
scanf("%d%d%d%d%d%d",&x,&y,&z,&t,&u,&v);
if(x = 1 && y = 3 || x = 3 && y = 2){
A= A +3;
}else if(y = 3 && x = 1|| x = 2 && y = 3){
B = B + 3;
}else if(y == x){
A=B=A + 1;
}
if(z = 1 && t = 3 && z = 3 && y = ){
A = A + 3;
}else if(z  = 3 && t = 1 || z = 2 && t = 3){
C = C + 3;
}else if(z = t)
A=A +1;
C=C + 1;
}
if(u = 1 && v = 3 || u = 3 && v = 2){
B = B + 3;
}else if(u = 3 && v = 1 || u = 3 &&  v = 2){
C = C = 3;
}else if(u = v){
B =B +1;
C = C +1;
}
printf("%d%d%d",A,B,C);
return 0;
}