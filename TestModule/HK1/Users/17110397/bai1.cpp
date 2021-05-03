#include<iostream>
using namespace std;
int main(){
	int arrturn[6];
	int arrabc[3];
	arrabc[0] = 0;
	arrabc[1] = 0;
	arrabc[2] = 0;
	for(int i = 0; i < 6; i++){
		cin >> arrturn[i];
	}
	
	if(arrturn[0] == 1)
		if(arrturn[1] == 2)
			arrabc[1] += 3;
		else if(arrturn[1] == 3)
			arrabc[0] += 3;
		else{
			arrabc[0] += 1;
			arrabc[1] += 1;
		}
	else if(arrturn[0] == 2)
		if(arrturn[1] == 1)
			arrabc[0] += 3;
		else if(arrturn[1] == 3)
			arrabc[1] += 3;
		else{
			arrabc[0] +=1;
			arrabc[1]+= 1;
		}
	else
		if(arrturn[1] == 1)
			arrabc[1] += 3;
		else if(arrturn[1] == 2)
			arrabc[0] += 3;
		else{
			arrabc[0] += 1;
			arrabc[1] += 1;
		}


	if(arrturn[2] == 1)
		if(arrturn[3] == 2)
			arrabc[2] += 3;
		else if(arrturn[1] == 3)
			arrabc[0] += 3;
		else{
			arrabc[0] += 1;
			arrabc[2] += 1;
		}
	else if(arrturn[2] == 2)
		if(arrturn[3] == 1)
			arrabc[0] += 3;
		else if(arrturn[3] == 3)
			arrabc[2] += 3;
		else{
			arrabc[0] +=1;
			arrabc[2]+= 1;
		}
	else
		if(arrturn[3] == 1)
			arrabc[2] += 3;
		else if(arrturn[3] == 2)
			arrabc[0] += 3;
		else{
			arrabc[0] += 1;
			arrabc[2] += 1;
		}


	if(arrturn[4] == 1)
		if(arrturn[5] == 2)
			arrabc[2] += 3;
		else if(arrturn[5] == 3)
			arrabc[1] += 3;
		else{
			arrabc[1] += 1;
			arrabc[2] += 1;
		}
	else if(arrturn[4] == 2)
		if(arrturn[5] == 1)
			arrabc[1] += 3;
		else if(arrturn[5] == 3)
			arrabc[2] += 3;
		else{
			arrabc[1] +=1;
			arrabc[2]+= 1;
		}
	else
		if(arrturn[5] == 1)
			arrabc[2] += 3;
		else if(arrturn[1] == 2)
			arrabc[1] += 3;
		else{
			arrabc[1] += 1;
			arrabc[2] += 1;
		}


	cout << arrabc[0] << ' ' << arrabc[1] << ' ' << arrabc[2];
	return 0;
}
