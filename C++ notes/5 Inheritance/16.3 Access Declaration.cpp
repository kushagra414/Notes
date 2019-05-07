//Granting Access
#include<iostream>
using namespace std;

class base{
	public:
		int x, y;
	private:
		int x1, y1;
};

class derived:private base{
	public:
		base::x;  //---> This is known as access declaration which is deprecated(disproved/discouraged) should not be used. Will produce Warning
		using base::y; //---> Instead "using" keyword should be used. This is correct.
		//base::x1;  //Will produce error as x1 and x2 are actually private in base class, Their status cannot be changed
		//base::y1;
		void fun(int a, int b){
			x = a;
			y = b;
		}
};

int main(){
	derived obj;
	obj.fun(10, 30);
	cout<<obj.x<<endl;
	cout<<obj.y<<endl;
	//cout<<obj.x1<<endl;  //Error
	//cout<<obj.y1;        //Error
	return 0;
}
