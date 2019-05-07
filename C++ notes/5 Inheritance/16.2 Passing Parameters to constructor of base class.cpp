//Passing Arguments to Constructor of Base class
#include<iostream>
using namespace std;

class base{
	public:
	int longitude, latitude;
	public:
	base(int lt, int lg){
		latitude = lt;
		longitude = lg;
	}
};

class derived:public base{
	public:
		int longitude1, latitude1;
		derived(int lt, int lg):base(lt, lg)  //We can add more base constructor by using ",". for eg :-
		//derived(int lt, int lg):base(lt, lg), base2(lt, lg), base3(lt, lg).....
		{
			longitude1 = lg+10;
			latitude1 = lt+10;
		}
};

int main(){
	derived d(10, 20);
	cout<<d.latitude1<<" "<<d.longitude1<<endl;
	cout<<d.latitude<<" "<<d.longitude<<endl;
	return 0;
}
