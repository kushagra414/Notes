//Ambiguity in C++ due to type conversions in functions
#include<iostream>
using namespace std;

double func(double a){
	return a+1;
}
float func(float a){
	return a+1;
}

void myfunc(unsigned char a){
	cout<<a<<endl;
}

void myfunc(char a){
	cout<<a<<endl;
}

int main(){
	
	//the function with double data type will run as every float is double
	cout<<func(10.1)<<endl;//Unambigous
	
	//Ambigous function as the compiler cannot know which function to use, because of automatic type conversion.
	//Compiler has no way to know whether to use float fn. or int fn.
	//cout<<func(10); //will produce error
	
	
	
	
	
	
	
	myfunc('c');//Unambigous
	//myfunc(88); //Ambiguity due to type conversion. Will produce error
	return 0;
}
