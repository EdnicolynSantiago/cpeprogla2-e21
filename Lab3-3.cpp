#include<iostream>
#include<cstring>
using namespace std;

const char* customStrCat(char*str11,char*str22){
strcat(str11,str22);
return str11;
}

int main(){
char str11[100];
char str22[100];
int result;
		cout<<"Enter 1st word: ";
		cin>>str11;
		cout<<"Enter 2nd word: ";
		cin>>str22;
		cout<<"\nSTR1's value: "<<customStrCat(str11, str22);
}
