//Overloading the [] operator.
#include<iostream>
#include<cstdlib>
using namespace std;

class array{
	int a[3];
	public:
	array(){}
	array(int i, int j, int k){
		a[0]=i;
		a[1]=j;
		a[2]=k;
	}
	int &operator[](int i);
};

int &array::operator[](int i){
	if(i<0||i>2){
		cout<<"Enter a valid index\n";
		exit(1);
	}
	return a[i];
}

int main(){
	array ob(1,2,3);
	//operator[](0) is called
	ob[0]=30;
	cout<<ob[0]<<endl;
	return 0;
}
