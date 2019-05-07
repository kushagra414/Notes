//Inheriting Base class
#include<iostream>
using namespace std;

class base{
	public:
	int i, j;
	base(){
		i=10;
		j=20;
	}
};

class derived1:private base{
	public:
		int k;
		derived1(){
			k = i*j;
		}
};

class derived2:private derived1{
	public:
		int j;
		derived2(){
		//	j = i*j*10; //error here, as the derived1 class inherited the base class as private hence derived2 cannot acces the base class
		//Though still derived1 can access public and protected members of the base class
		}
};

int main(){
	derived1 obj1;
	derived2 obj2;
	cout<<obj1.k<<endl;
	cout<<obj2.j<<endl;
	return 0;
}
