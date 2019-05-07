//Overloading the () operator
#include<iostream>
using namespace std;

class loc{
	int longitude, latitude;
	public:
		loc(){ }
		loc(int lg, int lt){
			longitude = lg;
			latitude = lt;
		}
		loc operator()(int i, int j);
};

loc loc::operator()(int i, int j){
	longitude = i;
	latitude = j;
	cout<<longitude<<endl;
	cout<<latitude<<endl;
	return *this;
}

int main(){
	loc ob, ob1(30, 40); //Here the operator overloading will not work as the object are being initialized here.
	ob(10, 20); //Here Operator overloading will work
	ob1(20, 100); //Here Operator overloading will work
	return 0;
}
