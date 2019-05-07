//Pointers to Derived Class
#include<iostream>
using namespace std;
class Base{
	int i;
	public:
		void set_i(int num){
			i = num;
		}
		int get_i(){
			return i;
		}
};

class Derived: public Base{
	int j;
	public:
		void set_j(int num){
			j = num;
		}
		int get_j(){
			return j;
		}
};

int main(){
	Base *bp;
	Derived d;
	bp = &d;   //Normally this would lead to an error but as this is an exception
	bp->set_i(20);  // As we can see, we are using base class pointer to access inherited members of derived class
	cout<<bp->get_i()<<endl;
	d.set_j(200);
	bp = (Derived *)bp;  //Don't know why, but this does not work. Do not work because bp has data type Base, even after type casting bp will automatically convert to Base data type
	cout<<((Derived *)bp)->get_j()<<endl;
	return 0;
}
