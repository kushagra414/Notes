//Ambiguity in C++ due to default parameter in functions
#include<iostream>
using namespace std;

int myfunc(int i);
int myfunc(int i, int j=0);

void func(int a);
void func(int &a);  //Refrence to a

int main(){
	//Ambigous whether to call the function with default value or none default value
	myfunc(10); //Will produce error
	
	
	//Ambiguity whether to call the function with value of a or refrence of a i.e. &a
	func(10);//Will produce error
	 
	return 0;
}

int myfunc(int i){
	return i;
}

int myfunc(int i, int j){
	return i*j;
}

int func(int a){
	return a+1;
}

int func(int &a){
	return a-1;
}
