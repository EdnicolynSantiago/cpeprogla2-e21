//Ednicolyn Santiago

#include<iostream>
#include<cstring>
using namespace std;
int flag=0, e=0, d=0, pick;
char str11[100], str22[100], str[100], *s11, *s22, YesNo;

void mySTRCPY();
void mySTRCMP();
void mySTRCAT();
int mySTRLEN(char*);
int choose(int pick);
char answer(char YesNo);
char myREV(char*str);

void mySTRCPY() {
		cout<<"\nEnter the first string:  ";
		cin.ignore();
	    gets(str11);
	    cout<<"Enter the second string: ";
	    gets(str22);
	for(int i=0;i<50;i++){
    	s11=&str11[i];
    	s22=&str22[i];
    	*s11=*s22;
    cout<<str11[i];
}  
}

void mySTRCMP() {
	cout<<"\nEnter the first string:  ";
	cin.ignore();
    gets(str11);
    cout<<"Enter the second string: ";
    gets(str22);
	for(int i=0;i<50;i++){
    	s11=&str11[i];
    	s22=&str22[i];
    	(int) str11[i];
    	(int) str22[i];
    if (*s11==*s22) flag+=0;
	else if (*s22<*s11) flag+=1;
	else if (*s22>*s11) flag-=1;
}
	if (flag==0) cout<<"Equal";
	else if (flag>0) cout<<"Positive";
	else if (flag<0) cout<<"Negative";
}

void mySTRCAT() {
	cout<<"\nEnter the first string:  ";
	cin.ignore();
    gets(str11);
    cout<<"Enter the second string: ";
    gets(str22);
	for(int i=0;i<strlen(str11);i++){
    s11=&str11[i];
    cout<<*s11;
}
for(int i=0;i<strlen(str22);i++){
    s22=&str22[i];
    cout<<*s22;
}
}

int mySTRLEN(char*s11){
		cout<<"\nEnter a string:  ";
		cin.ignore();
    	gets(str11);
while(*s11!='\0') {
		d++;
		s11++;
}
cout<<"The length of the string is: "<<d;
return d;
}

char myREV(char*str) {
		cout<<"\nEnter a string: ";
		cin.ignore();
		gets(str);
    cout<<"The reverse is: ";
	e=strlen(str);
	for(int i=e-1;i>=0;i--) {
	cout<<str[i];
	}
}

int choose(int picked) {
	cout << "\n[1] String Copy\n[2] String Compare\n[3] String Concatenation\n[4] String Length\n[5] String Reversing";
	cout << endl;
	cout<<"Choose a number problem to solve [1-5]: ";

	cin>>pick;
	
	switch(pick) {
	case 1:
	mySTRCPY();
	answer(YesNo);
	break;
	case 2:
	mySTRCMP();
	answer(YesNo);
	break;
	case 3:
	mySTRCAT();
	answer(YesNo);
	break;
	case 4:
	mySTRLEN(str11);
	answer(YesNo);
	break;
	case 5:
	myREV(str11);
	answer(YesNo);
	break;
	default:
	cout << "Wrong Input \n";
	break;
}
	return pick;
}

	char answer(char YesNo) {
	cout<<"\n\nTry Again!!! [y/n] ";
	cin>>YesNo;
	if (YesNo=='y' || YesNo =='Y') {
	system("cls");
	choose(pick);
}
	
}



int main() {
choose(pick);
}
