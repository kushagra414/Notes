//Returning References
#include<iostream>
using namespace std;
char s[80] = "Hello There";
char &fun(int i);
int main(){
	fun(5) = 'X';
	cout<<s;
	return 0;
}

char &fun(int i){
	return s[i];
}
