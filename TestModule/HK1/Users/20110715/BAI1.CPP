#include <iostream>
#include <cstring>
#include <algorithm>
#include <math.h>

using namespace std;

void count(int player1, int player2, int &a, int &b){
	if(player1 == player2){
		a++;
		b++;
	}
	if(player1 - player2 == 1 || player1 - player2 == -2){
		a+= 3;
	}
	if(player2- player1== 1 || player2- player1== -2){
		b+= 3;
	}
}
void Input_array(int &n, int a[]){
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
}
int main(){
	int n = 6;
	int pa = 0, pb = 0, pc = 0;
	int a[100];
	Input_array(n,a);
	count (a[0],a[1],pa,pb);
	count (a[2],a[3],pa,pc);
	count (a[4],a[5],pb,pc);
	cout << pa << " "<<pb<<" "<<pc;
	return 0;
}