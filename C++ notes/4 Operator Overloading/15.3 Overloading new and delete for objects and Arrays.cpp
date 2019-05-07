//Overloading new and delete for objects and Arrays
#include<iostream>
#include<cstdlib>
#include<new>
using namespace std;

class loc{
	int longitude, latitude;
	public:
		loc(){
		}
		loc(int lt,int lg){
			latitude = lt;
			longitude = lg;
		}
		void *operator new(size_t size);
		void *operator new [](size_t size);
		void operator delete(void *p);
		void operator delete [](void *p);
		void show();
};

void *loc::operator new(size_t size){
	cout<<"new operator for object\n";
	void *p = malloc(size);
	return p;
}

void *loc::operator new [](size_t size){
	cout<<"new operator for array\n";
	void *p = malloc(size);
	return p;
}

void loc::operator delete(void *p){
	cout<<"delete operator for object\n";
	free(p);
}

void loc::operator delete [](void *p){
	cout<<"delete operator for array\n";
	free(p);
}

void loc::show(){
	cout<<longitude<<endl;
	cout<<latitude<<endl;
}

int main(){
	loc *p,*p1;
	p = new loc (10, 20);
	cout<<"p ---->\n";
	p->show();
	delete p;
	p1 = new loc [5];
	for(int i=0;i<5;i++){
	cout<<"p1["<<i<<"] ---->\n";
	//Will show random values as the default constructor wa invoked
	p1[i].show();
}
	delete [] p1;
	return 0;
}
