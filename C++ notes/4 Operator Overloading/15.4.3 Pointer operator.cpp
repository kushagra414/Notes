//Overloading of -> operator
#include<iostream>
using namespace std;

class loc{
	int longitude, latitude;
	loc(){
	}
	public:
	loc(int lg, int lt){
		longitude = lg;
		latitude = lt;
	}
	loc *operator->();
	void show(){
		cout<<longitude<<endl;
		cout<<latitude<<endl;
	}
};

loc *loc::operator->(){
	return this;
}

int main(){
	loc ob(10, 20);
	//ob is an object but as you can see due to overloading of -> we can use it instead of . operator
	ob->show(); //Equivalent to ob.show()
	return 0;
}
