#include <iostream>
#include<cstring>
using namespace std;

const char*yo(const char* str){
  return str;
}
  char str11[100];
  char str22[100];
  char str33[100];
  int result, a, b, c;


void problem1(){ 
	cout << "Problem #1 String Compare"<<endl;
	cout<<"Enter first string: ";
	cin>>str11;
	cout<<"Enter second string: ";
	cin>>str22;
	switch(strcmp(str11,str22)){
			
	  	case -1:
	  		cout<<"Negative";
	  		break;
	  	case 0:
		  	cout<<"Equal";
		  	break;
		case 1:
			cout<<"Positive";	  	
	  		break;
  	}
  		cout<<endl<<endl;
  }
  
const char* outputString(char* str11,char* str22){
	strcpy(str11,str22);
  return str11;
}

void problem2(){
	cout<<"Problem #2 String Copy"<<endl;
	cout<<"Enter first string: ";
	cin>>str11;
	cout<<"Enter second string: ";
	cin>>str22;
	cout<<"New string value of string 1: "<<outputString(str11,str22)<<endl<<endl;
}

const char*customStrCat(char* str11, char* str22){
	strcat(str11,str22);
	return str11;
}

void problem3(){
	cout<<"Problem #3 String Concatenation"<<endl;
	cin.ignore();
	cout<<"Enter a first string: ";
	gets(str11);
	cout<<"Enter second string: ";
	gets(str22);
	cout<<"New string value for string 1: "<<strcat(str11, str22)<<endl<<endl;
}

void problem4(){
	cout<<"Problem #4 Palindrome"<<endl;
	cout<<"Enter a word: ";
	gets(str11);
	b=strlen(str11);
	for(int i=0;i<b;i++) {
	if(str11[i]!=str11[b-(i+1)]) c=0;
	else c=1;
    }
    if (c==1) cout<<"The word "<<str11<<" is a palindrome.";
    else if (c==0) cout<<"The word "<<str11<<" is not a palindrome."<<endl<<endl;
}

void problem5(){
	cout <<"Problem #5 Capitalization"<<endl;
	cout<<"Enter some string: ";
	gets(str11);
	strlwr(str11);
	str11[0]-=32;
	for(int i=0;i<strlen(str11);i++) {
	if(str11[i]==32) str11[i+1]-=32;
	}
	cout<<str11<<endl;
	cout<<endl<<endl;
}

void problem6(){
	cout<<"Problem #6 Reverse Vertical Order"<<endl;
	cout<<"Enter a string: ";
	gets(str11);
	b=strlen(str11);
	for(int i=b;i>=0;i--) {
	if (str11[i]==32) {
	int j=i+1;
	while(str11[j]!=32&&j<b) {
	cout<<str11[j];
	j++;
	}
	cout<<endl;
	}
	}
	int k=0;
	while(str11[k]!=32) {
	cout<<str11[k];
	k++;
}
}


main(){
	problem1();
	problem2();
	problem3();
	problem4();
	problem5();
	problem6();
}
