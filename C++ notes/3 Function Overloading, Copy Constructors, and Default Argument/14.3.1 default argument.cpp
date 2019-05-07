//Eg of how default parameter can reduce the number of function overloading
#include<iostream>
#include<cstring>
using namespace std;
//A custom version of strcat()
void my_strcat(char *s1, char *s2, int len = -1);

int main(){
	char s1[50] = "My name is ";
	char s2[] = "Kushagra Shekhawat";
	my_strcat(s1,s2); 
	//my_strcat(s1, s2, 8);  //Run This and comment the previous line, to see comparison
	cout<<s1<<endl;
	return 0;
}

void my_strcat(char *s1, char *s2, int len){
	while(*s1)
	s1++;  //Finding the end of s1
	if(len==-1){
		len = strlen(s2);
	}
	while(len){
		*s1=*s2;  //Adding s2 at the end of s1
		s1++;
		s2++;
		len--;
	}
}
