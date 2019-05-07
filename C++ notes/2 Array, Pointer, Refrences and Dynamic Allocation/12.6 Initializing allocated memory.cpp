//Initializing allocated memory
#include<iostream>
using namespace std;
int main(){
	int *p;
	p = new int (94);  //As you can see here the value 94 is stored at the address p, but the value does not have a variable to call it with, we have to use pointer to access the value
	cout<<"Value at address "<<p;
	cout<<" is "<<*p;
	return 0;
}
