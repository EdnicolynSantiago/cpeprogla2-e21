#include<iostream>
#include<cstring>
using namespace std;

const char*yo(const char* str){
return str;}

int main(){
char str11[100];
char str22[100];
char str33[100];
int result,e;
		cout<<"Enter 3 words: ";
		cin>>str11>>str22>>str33;

	e=strlen(str11);

for (int i=0;i<e; i++){
	str11[i]=tolower(str11[i]);
	str11[0]=toupper(str11[0]);
	cout<< str11[i];
	}
	
		e=strlen(str22);
		cout<<" ";
		
for (int i=0;i<e; i++){
	str22[i]=tolower(str22[i]);
	str22[0]=toupper(str22[0]);
	cout<< str22[i];
	}
	
		e=strlen(str33);
		cout<<" ";
for (int i=0;i<e; i++){
	str33[i]=tolower(str33[i]);
	str33[0]=toupper(str33[0]);
	cout<< str33[i];
}}
