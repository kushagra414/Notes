//Solution to Ambiguity in case of Inheriting Base class twice
#include<iostream>
using namespace std;

class base1{
	public:
	int k;
};

class derived1:public base1 //Soltion 2 is inherit base1 class as virtual class i.e. --> class derived1:virtual public base1
{
	public:
	int l;
};

class derived2:public base1 //class derived2:virtual public base1
{
	public:
	int m;
};

class derived3:public derived1, public derived2{
	public:
	int o;
};

int main(){
	derived3 obj;
	//obj.k = 10;  //Error, Ambigous as the base1 class is repeated twice in derived3 class. Compiler don't know which k to use.
	//Solution to ambiguity 1. Scope Resolution 2. Virual Class
	obj.derived1::k = 10; //Solution using SRO.
	return 0;
}
