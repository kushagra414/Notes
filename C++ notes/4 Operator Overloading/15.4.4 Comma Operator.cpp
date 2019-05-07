//Overloading the (comma), operator
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
	loc operator,(loc op2);
	void show(){
		cout<<longitude<<" ";
		cout<<latitude<<endl;
	}
};

loc loc::operator,(loc op2){
	longitude = op2.longitude;
	latitude = op2.latitude;
	cout<<"this = "<<this<<endl;
	cout<<"op2 = "<<&op2<<endl;
	cout<<longitude<<" ";
	cout<<latitude<<endl;
	return *this;
}

int main(){
	loc ob1(10,20),ob2(30,40),ob3(50,60), ob4;
	ob4 = (ob1,ob2,ob3); //First the , operator operates ob1 and ob2 then what??
	ob1.show();
	ob2.show();
	ob3.show();
	ob4.show();
	return 0;
}
