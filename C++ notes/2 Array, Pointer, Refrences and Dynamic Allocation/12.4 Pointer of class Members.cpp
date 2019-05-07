//Remember * is just used to derefrence a pointer.
#include<iostream>
using namespace std;
class A{
	public:
		float k;
		A(int i){
			cout<<"a = "<<a<<", k = "<<k<<endl;
			val = i;
			cout<<"Intializing i"<<", a = "<<a<<endl;
		}
		int val,a;
		int double_val(){
			return 2*val;
		}
};

int main(){
	int A::*data;    //Pointer that points to all the integer data type members of the class
	int (A::*func)();  //Pointer that points to all the integer function type members of the class
	A obj(1), obj1(2);
	
	data = &A::val;  //Address of val in A
	func = &A::double_val;  //Address of double_val() in A
	
	cout<<"Here are values"<<endl;
	cout<<"obj.*data = "<<obj.*data<<", obj1.*data = "<<obj1.*data<<endl;  //*data = val, So the expression becomes obj.val
	
	cout<<"Here they are doubled"<<endl;
	cout<<"(obj.*func)() = "<<(obj.*func)()<<endl;
	cout<<"(obj1.*func)() = "<<(obj1.*func)()<<endl;
	
	
	cout<<"\n\n\n\n";
	//Now object is pointer
	A *p_obj, *p_obj1;
	p_obj=&obj;
	p_obj1=&obj1;
	cout<<"Here are values"<<endl;
	cout<<"p_obj->*data = "<<p_obj->*data<<", p_obj1->*data = "<<p_obj1->*data<<endl;  //*data = val, So the expression becomes p_obj.val
	
	cout<<"Here they are doubled"<<endl;
	cout<<"(p_obj->*func)() = "<<(p_obj->*func)()<<endl;
	cout<<"(p_obj1->*func)() = "<<(p_obj1->*func)()<<endl;
	return 0;
}
