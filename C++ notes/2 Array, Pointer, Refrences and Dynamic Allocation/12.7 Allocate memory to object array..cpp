//Allocate memory to object array.
#include<iostream>
#include<string.h>
using namespace std;
class allocation{
	private:
		double cur_bal;
		char name[80];	
	public:
		//This will not work
		allocation(double &n, char *s){
			cur_bal = n;
			s = name;
		}
		allocation(){
			//This will work
		}
	void set(double n, char *s){
			cur_bal = n;
			strcpy(name, s);
	}
	void get_bal(double &n, char *s){
		n = cur_bal;
		strcpy(s, name);
	}
};

int main(){
	double cur_bal,cur_bal1;
	char s[80],s1[80];
	allocation *p;
	p = new allocation [2];
	p->set(12345.34, "Kushagra");
	p->get_bal(cur_bal, s);
	cout<<s<<"'s balance is "<<cur_bal<<endl;
	p++;
	p->set(2000.23, "Kush");
	p->get_bal(cur_bal1, s1);
	cout<<s1<<"'s balance is "<<cur_bal1<<endl;
	return 0;
}
