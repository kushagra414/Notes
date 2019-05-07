//Friend operator function
#include<iostream>
using namespace std;

class loc{
	int longitude;
	int latitude;
	public:
		loc(){
		}
		loc(int lt, int lg){
			longitude=lg;
			latitude=lt;
		}
		//Here use of reference is necessary
		friend loc operator--(loc &op1, int x =0);
		friend loc operator-(loc op1, loc op2);
		void show(){
			cout<<latitude<<endl;
			cout<<longitude<<endl;
		}
};

//Here use of reference is necessary, as there is no "this" pointer and also there is no "=" operator in case of -- operator
loc operator--(loc &op1, int x){
	op1.latitude--;
	op1.longitude--;
	return op1;
}

loc operator-(loc op1, loc op2){
	op1.latitude = op1.latitude-op2.latitude;
	op1.longitude = op1.longitude-op2.longitude;
	return op1;
}

int main(){
	loc ob1(10, 20),ob2(30,40);
	ob1--;
	cout<<"ob1 ---->"<<endl;
	ob1.show();
	cout<<"ob2 ---->"<<endl;
	ob2 = ob2-ob1;
	ob2.show();
	return 0;
}
