//Default function Parameter
#include<iostream>
using namespace std;

int fun(int d = 20);
int main(){
	cout<<fun();
	return 0;
}

//Here value of d is specified, d is just declared
int fun(int d){
	return d;
}
