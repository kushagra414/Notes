//Understanding this pointer
#include<iostream>
using namespace std;

class myclass{
	int x;
	int y;
	public:
		myclass(){
			x = 100;
			y=20;
		}
		int func(int x){
			//this pointer can be used to diffrentiate between local variable and data members.
			//this pointer points to object obj
			cout<<"this->x = "<<this->x<<endl;
			cout<<"x = "<<x<<endl; //We can access x due to this pointer
			cout<<"this->y = "<<this->y<<endl;
			cout<<"y = "<<y<<endl; //The current statement and the statement above are actually the same
		}
};

int main(){
	myclass obj;
	obj.func(10);
	return 0;
}
