#include <iostream>
#include <math.h>
#include <string>
using namespace std;
unsigned int quyhe16(string s){
	unsigned int sum = 0;
	int k = 0;
	for(int i = s.length()-1; i >= 0;i--){
		if(s[i]>='0'&&s[i]<='9'){
			sum += (s[i]-'0')*pow(16,k++);
		}
		else
			sum += (s[i]-'A' + 10)*pow(16,k++);
	}
	return sum;
}
void main(){
	string s1,s2;
	unsigned int sum;
	cin>>s1>>s2;
	sum = quyhe16(s1)+quyhe16(s2);
	cout<<sum;
}