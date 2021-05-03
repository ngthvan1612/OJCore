#include <iostream>
#include <iomanip>
                                     
using namespace std;

main (){
int A[100];
int i, n;

cin>>n;

for (i=0; i<=n-1;i++)
cin>>A[i];


for (i=0; i<=n-1;i++)
{


    if (A[i]%2==0  && A[i+1]%2==0 )
	{
		cout<<i+1;
		return 2;
	}
	
	
 if (A[i]%2!=0  && A[i+1]%2!=0 )
	{
		cout<<i+1;
		return 2;
	}
	
	



    if (A[i]%2==0  && A[i+1]%2!=0  && A[i+2]%2==0 ||A[i]%2!=0  && A[i+1]%2==0  && A[i+2]%2!=0 )
	i++;

	
}


cout<<-1;


	
	

system ("pause");
return 0;

	
	
	
}













