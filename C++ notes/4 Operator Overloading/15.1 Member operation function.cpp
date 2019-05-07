//Member operation function
//This operator function are class members
#include<iostream>
using namespace std;

class loc{
	int longitude, latitude;
	public:
		loc(){
		}
		loc(int lg, int lt){
			longitude = lg;
			latitude = lt;
		}
		void show(){
			cout<<longitude<<endl;
			cout<<latitude<<endl;
		}
		
		//prototype of member operation function
		loc operator+(loc op2);
		loc operator++();
		loc operator=(loc op2);
		//This function is for post-operator this is the syntax that must be used for post-operator
		//Same goes for --
		loc operator++(int x = 0);
};

//defining Member operation function
loc loc::operator+(loc op2){
	longitude = longitude+op2.longitude;
	latitude = latitude+op2.latitude;
	return *this;
}

loc loc::operator++(){
	longitude++;
	latitude++;
	return *this;
}

loc loc::operator=(loc op2){
	longitude = op2.longitude;
	latitude = op2.latitude;
	return *this;
}

loc loc::operator++(int x){
	longitude++;
	latitude++;
}

int main(){
	loc ob1(10,20),ob2(30,40);
	//using operator overloading for object
	//Here the operand on the left of operator calls the operator fn.
	//and Operand on the right is passed as argument inside
	cout<<"ob1 ---->\n";
	ob1 = ob1+ob2;
	ob1.show();
	//By default this operator can only be used as pre-operator
	++ob1;
	cout<<"ob1 ---->\n";
	ob1.show();
	
	loc ob3;
	//Here we can use multiple = in one line because of return type of the operator=()
	ob3 = ob2 = ob1;
	cout<<"ob2 ---->\n";
	ob2.show();
	cout<<"ob3----->\n";
	ob3.show();
	//To use post-operator we need different function
	ob2++;
	cout<<"ob2 ---->\n";
	ob2.show();
	return 0;
}
