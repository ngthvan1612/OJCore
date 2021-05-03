#include<iostream>
using namespace std;



int main()
{
	int a,b,c,d,e,f,m,n,p;
	m=0;
	n=0;
	p=0;
	cin >> a>>b>>c>>d>>e>>f;
	if (a==3)
	{
		if(b=1) { n=n+3; }
		else 
		{
			if (b==2) { m=m+3 ;} 
			else {m=m+1;n=n+1;}
		}
		if(c=1) { p=p+3; }
		else 
		{
			if (c==2) { m=m+3;} 
			else {m=m+1;n=n+1;}
		}
	}
	else 
	{
	   	if (a==2)
		{
	     	if(b==1) { m=m+3; }
	        	else 
				{
		     	 if (b==2) {m=m+1;n=n+1;} 
		     	 else {n=n+3;}
				}
	       	if(c==1) { m=m+3; }
	    	    else 
				{
		        if (c==2) {m=m+1;n=n+1;} 
			    else {p=p+3;}
				}
		}
		else
			{
				if(b==3) { m=m+3; }
	          	 else 
				 {
		         	if (b==1) {m=m+1;n=n+1;} 
		         	else {n=n+3;}
				 }
	         	if(c=3) { m=m+3; }
	           	else 
				{
		         	if (c==1) {m=m+1;n=n+1;} 
			        else {p=p+3;}
				}
		}
	}
	if (b==1) 
			
	{
		if (c==3) {n=n+3;}
		else {
			if (c==2) {p=p+3;}
            else {n=n+1;p=p+1;}
		}
	}
	else
	{
	if (b==2) 
			
	{
		if (c==1) {n=n+3;}
		else {
			if (c==3) {p=p+3;}
            else {n=n+1;p=p+1;}
		}
	}
	else
		{
			if (c==2) {n=n+3;}
	     	else {
			    if (c==1) {p=p+3;}
                else {n=n+1;p=p+1;}
				}
		}
	cout <<m<<" "<<n<<" "<<p;
			



