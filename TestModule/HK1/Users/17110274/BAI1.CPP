#include<iostream>

using namespace std;

void main()
{
	int x,y,z,t,u,v;
	int diema;
	int diemb;
	int diemc;
	cin >> x;
	cin >> y;
	cin >> z;
	cin >> t;
	cin >> u;
	cin >> v;
	if(x==1&&y==3){
		if(z==1&&t==3){
			diema = 6;
			
		}else 
		if(z==2&&t==3){
			diema=3;
		}else
		if(z==3&&t==1){
			diema=0;
		}else
		if(z==3&&t==2){
			diema=6;
		}else
		if(z==t){
			diema=4;
		}
		
	}else
	if(x==2&&y==1){
		if(z==1&&t==3){
			diema = 6;
		}else 
		if(z==2&&t==3){
			diema=3;
		}else
		if(z==3&&t==1){
			diema=3;
		}else
		if(z==3&&t==2){
			diema=6;
		}else
		if(z==t){
			diema=4;
		}
	}else
	if(x==3&&y==1){
		if(z==1&&t==3){
			diema = 3;
		}else 
		if(z==2&&t==3){
			diema=0;
		}else
		if(z==3&&t==1){
			diema=0;
		}else
		if(z==3&&t==2){
			diema=3;
		}else
		if(z==t){
			diema=1;
		}
	}else
	if(x==1&&y==2){
		if(z==1&&t==3){
			diema = 3;
		}else 
		if(z==2&&t==3){
			diema=0;
		}else
		if(z==3&&t==1){
			diema=0;
		}else
		if(z==3&&t==2){
			diema=3;
		}else
		if(z==t){
			diema=1;
		}
	}else
	if(x==3&&y==2){
		if(z==1&&t==3){
			diema = 6;
		}else 
		if(z==2&&t==3){
			diema=3;
		}else
		if(z==3&&t==1){
			diema=3;
		}else
		if(z==3&&t==2){
			diema=6;
		}else
		if(z==t){
			diema=4;
		}
	}else
	if(x==2&&y==3){
		if(z==1&&t==3){
			diema = 3;
		}else 
		if(z==2&&t==3){
			diema=0;
		}else
		if(z==3&&t==1){
			diema=0;
		}else
		if(z==3&&t==2){
			diema=3;
		}else
		if(z==t){
			diema=1;
		}
	}else
	if(x==y){
		if(z==1&&t==3){
			diema = 4;
		}else 
		if(z==2&&t==3){
			diema=1;
		}else
		if(z==3&&t==1){
			diema=1;
		}else
		if(z==3&&t==2){
			diema=4;
		}else
		if(z==t){
			diema=2;
		}
	}



	if(x==3&&y==1){
		if(u==3&&v==1){
			diemb = 3;
		}else 
		if(u==3&&v==2){
			diemb=6;
		}else
		if(u==1&&v==3){
			diemb=6;
		}else
		if(u==2&&v==3){
			diemb=3;
		}else
		if(u==v){
			diemb=4;
		}
		
	}else
	if(x==1&&y==2){
		if(v==1&&u==3){
			diemb = 3;
		}else 
		if(v==2&&u==3){
			diemb=6;
		}else
		if(v==3&&u==1){
			diemb=6;
		}else
		if(v==3&&u==2){
			diemb=3;
		}else
		if(v==u){
			diemb=4;
		}
	}else
	if(x==1&&y==3){
		if(v==1&&u==3){
			diemb = 0;
		}else 
		if(v==2&&u==3){
			diemb=3;
		}else
		if(v==3&&u==1){
			diemb=3;
		}else
		if(v==3&&u==2){
			diemb=0;
		}else
		if(v==u){
			diemb=1;
		}
	}else
	if(x==2&&y==1){
		if(v==1&&u==3){
			diemb = 0;
		}else 
		if(v==2&&u==3){
			diemb=3;
		}else
		if(v==3&&u==1){
			diemb=3;
		}else
		if(v==3&&u==2){
			diemb=0;
		}else
		if(v==u){
			diemb=1;
		}
	}else
	if(x==2&&y==3){
		if(v==1&&u==3){
			diemb = 3;
		}else 
		if(v==2&&u==3){
			diemb=6;
		}else
		if(v==3&&u==1){
			diemb=6;
		}else
		if(v==3&&u==2){
			diemb=3;
		}else
		if(v==u){
			diemb=4;
		}
	}else
	if(x==3&&y==2){
		if(v==1&&u==3){
			diemb = 0;
		}else 
		if(v==2&&u==3){
			diemb=3;
		}else
		if(v==3&&u==1){
			diemb=3;
		}else
		if(v==3&&u==2){
			diemb=0;
		}else
		if(v==u){
			diemb=1;
		}
	}else
	if(x==y){
		if(v==1&&u==3){
			diemb = 1;
		}else 
		if(v==2&&u==3){
			diemb=4;
		}else
		if(v==3&&u==1){
			diemb=4;
		}else
		if(v==3&&u==2){
			diemb=1;
		}else
		if(v==u){
			diemb=2;
		}
	}




	if(t==1&&z==3){
		if(u==3&&v==1){
			diemc = 6;
		}else 
		if(u==3&&v==2){
			diemc=3;
		}else
		if(u==1&&v==3){
			diemc=0;
		}else
		if(u==2&&v==3){
			diemc=6;
		}else
		if(u==v){
			diemc=4;
		}
		
	}else
	if(t==2&&z==1){
		if(v==1&&u==3){
			diemc = 6;
		}else 
		if(v==2&&u==3){
			diemc=3;
		}else
		if(v==3&&u==1){
			diemc=3;
		}else
		if(v==3&&u==2){
			diemc=6;
		}else
		if(v==u){
			diemc=4;
		}
	}else
	if(t==3&&z==1){
		if(v==1&&u==3){
			diemc = 3;
		}else 
		if(v==2&&u==3){
			diemc=0;
		}else
		if(v==3&&u==1){
			diemc=0;
		}else
		if(v==3&&u==2){
			diemc=3;
		}else
		if(v==u){
			diemc=1;
		}
	}else
	if(t==1&&z==2){
		if(v==1&&u==3){
			diemc = 3;
		}else 
		if(v==2&&u==3){
			diemc=0;
		}else
		if(v==3&&u==1){
			diemc=0;
		}else
		if(v==3&&u==2){
			diemc=3;
		}else
		if(v==u){
			diemc=1;
		}
	}else
	if(t==3&&z==2){
		if(v==1&&u==3){
			diemc = 6;
		}else 
		if(v==2&&u==3){
			diemc=3;
		}else
		if(v==3&&u==1){
			diemc=3;
		}else
		if(v==3&&u==2){
			diemc=6;
		}else
		if(v==u){
			diemc=4;
		}
	}else
	if(t==2&&z==3){
		if(v==1&&u==3){
			diemc = 3;
		}else 
		if(v==2&&u==3){
			diemc=0;
		}else
		if(v==3&&u==1){
			diemc=0;
		}else
		if(v==3&&u==2){
			diemc=3;
		}else
		if(v==u){
			diemc=1;
		}
	}else
	if(t==z){
		if(v==1&&u==3){
			diemc = 4;
		}else 
		if(v==2&&u==3){
			diemc=1;
		}else
		if(v==3&&u==1){
			diemc=1;
		}else
		if(v==3&&u==2){
			diemc=4;
		}else
		if(v==u){
			diemc=2;
		}
	}

	cout << diema <<" ";
	cout << diemb << " ";
	cout << diemc;
}