//Copy Constructor
#include<iostream>
#include <new>
using namespace std;

class array{
	int *p;
	int x;
	public:
	array(int size){
		x=size;
		p = new int [size];  //creating array of given size
	}
	~array(){
		delete [] p; //deleting array of size of p
	}
	
	void set(int i, int j){
		p[i] = j;
	}
	void get(){
		for(int i=0;i<x;i++)
		cout<<p[i]<<" ";
	}
	array(const array &a){
		x = a.x;
		p = new int [x];
		for(int i =0;i<x;i++)
		p[i] = a.p[i];
		cout<<"x = "<<x<<endl;
	}
};

int main(){
	int size;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	array o(size);
	for(int i=0;i<size;i++)
	o.set(i, i);
	o.get();
	cout<<endl;
	
	//copy constructor
	array o1(o);
	o1.get();
	cout<<"\n";
	return 0;
}
