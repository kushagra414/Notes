#include<iostream>
using namespace std;
int i = 0;
class A{
	public:
		int a;
		hello();  //This will not run as class is not a program but a logical abstraction
		~A(){
			cout<<"before i = 10, i = "<<i<<endl;
			i = 10;
			cout<<"i = "<<i<<endl;
		}
};
int fun(){
	i = 3;
	A obj;
	return i++;
	cout<<"Working"<<endl;
}
void hello(){
	cout<<"Hello"<<endl;
}
int main(){
//	{
//	A obj;}
	cout<<"fun() = "<<fun()<<", i = "<<i<<endl;
	return 0;
}

