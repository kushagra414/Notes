//Address of Overloaded function
#include<iostream>
using namespace std;

int function(int a){
	return a+1;
}

int function(int a, int b){
	return a-b;
}

int main(){
	int (*fp)(int);  //fp is a int type pointer to a function
	cout<<fp(12);
	return 0;
}
