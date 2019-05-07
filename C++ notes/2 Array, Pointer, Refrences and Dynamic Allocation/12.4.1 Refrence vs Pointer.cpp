//Refrence vs Pointer
#include<iostream>
using namespace std;
int fun(int &i);
int main(){
	int a = 20, *ptr;
	ptr = &a;
	int &ref = a; //Refrence is just a alias that has same address as the variable
	cout<<"This is pointer -> "<<ptr<<endl;
	cout<<"This is refrence -> "<<&ref<<endl;
	fun(a);
	cout<<"a = "<<a<<endl;
	return 0;
}

int fun(int &i){
	i = -i;
}
