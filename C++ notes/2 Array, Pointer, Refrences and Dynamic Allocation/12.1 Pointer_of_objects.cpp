#include<iostream>
using namespace std;
class A{
	int  i;
	public:
		int k;
		A(){
		i = 0;
		}
		A(int j){
			i = j;
			k = j;
		}
		int get_i(){
			cout<<"k = "<<k<<endl;
			return i;
		}
};

int main(){
	A obj, *pointer; //Default constructor object
	pointer = &obj;
	int x = pointer->get_i();
	cout<<"x ="<<x<<endl;
	//Dfining Array object
	A obj1[3] = {1,2,3}, *pointer1;
	pointer1 = obj1;
	//Accessing all the object in arrays using single pointer
	for(int j = 0; j<3; j++){
		int m = pointer1->get_i();
		cout<<"m = "<<m<<endl;
		pointer1++;
	}
	A obj2(8);
	//Pointer is of data type int as it points to the member of the class
	int *pointer2 = &obj2.k;
	cout<<"*pointer2 = "<<*pointer2<<endl;
	return 0;
}
