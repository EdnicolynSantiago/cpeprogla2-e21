#include<iostream>
#include<iomanip>
using namespace std;

int i, t, sum, average;


struct Studrec{
	char name[30];
	int grades[];
	int id;
};

void NewLine(){
	char s;
	do{cin.get(s);}while(s!='\n');
}


int main(){
	Studrec ed[0];
	cout<<"Enter 5 Student(s) Record"<<endl;
	for (i=0; i<=4; i++){
		cout<<"\nStudent "<<(i+1)<<endl;
		
		cout<<"ID: ";
		cin>>ed[i].id;
		NewLine();
		
		cout<<"Student Name: ";
		cin.getline(ed[i].name, 29);

		cout<<"Grades: ";
		
		for(t=0; t<2; t++){
		
		cin>>ed[i].grades[t];
		cin.ignore();
		}
		NewLine();
		}
		system("pause");
		return 0;
	}
