
#include<iostream>
#include<iomanip>
using namespace std;

int i, t, total; 
float grade;
char x;


struct Srecord{
	int id;
	char name[30];
	struct Quizzes{
		float quiz;
};
 Quizzes quizzes[3];
};

struct Customer{
	struct Name{
		char fName[20];
		char lName[20];
}name;
	
		struct Order{
			int day;
			int month;
			int year;
			int quan;
			struct Item{
			int ID;
			char itemName[20];
			int Price;
		};
	Item item[3];
	}order;
	
double contNo;
};


void NewLine(){
	char s;
	do{cin.get(s);}while(s!='\n');
}

void problem2(){
		cout<< "Problem #2 Student Records"<<endl;
		Srecord ed[5];
		cout<<"Enter 5 Student<s> Record"<<endl;
		for (i=0; i<5; i++){
		cout<<"\nStudent "<<(i+1)<<endl;
		cout<<"ID: ";
		cin>>ed[i].id;
		NewLine();
		cout<<"Student Name: ";
		cin.getline(ed[i].name, 29);
		cout<<"Grades: ";
	for(t=0;t<3;t++){	
	cin>>ed[i].quizzes[t].quiz;	
	}
	}
	cout << setw(5) << "No."
	<< setw(15)<<"Student No."
	<< setw(20)<<"Name: "
	<< setw(10)<<"Grade: "
	<< setw(10)<<"Remark: ";
	
	for(int i=0; i<5; i++){
		grade=0;
		for(t=0;t<3;t++){
		grade+=ed[i].quizzes[t].quiz;
		}
			cout<<endl;
			cout<<setw(5)<<i+1
			<<setw(15)<<ed[i].id
			<<setw(20)<<ed[i].name;
			cout<<setw(10)<<setprecision(4)<<grade/3<<setw(10);
		if( grade/3>=75 ){
			cout<<"Passed";
			}
			else{
			cout<<"Failed";
			}
		}
		cout<<endl<<endl;
}

void problem3(){
			cout<< "Problem #3 Customer's Info"<<endl;
	Customer e[3];
	for (i=0;i<3;i++){
			cout<<"CUSTOMER'S INFORMATION "<<i+1<<endl;
			cout<<"First Name: ";
			cin.getline(e[i].name.fName,29);
			cout<<"Last Name: ";
			cin.getline(e[i].name.lName,29);
			cout<<"Contact No.: ";
			cin>>e[i].contNo; 
			cout<<"ORDER DATE: "<<endl;
			cout<<"Day: ";
			cin>>e[i].order.day;
			cout<<"Month: ";
			cin>>e[i].order.month;
			cout<<"Year: ";
			cin>>e[i].order.year;
			cout<<"\nENTER 3 ITEMS: "<<endl;
	for (t=0;t<3;t++){
	    cout<<"ID: ";
	    cin>>e[i].order.item[t].ID;
	    NewLine();
        cout<<"Name: ";
    	cin.getline(e[i].order.item[t].itemName,29);
    	cout<<"Price: ";
    	cin>>e[i].order.item[t].Price;
    	cout<<"Quantity: ";
    	cin>>e[i].order.quan;
    	cout<<endl;
	}
	NewLine();
}
	t=0;
	cout<<"SUMMARY REPORT"<<endl;
	cout<<" #"<<setw(30)<<"Customer's Name"
	<<setw(20)<<"Order Date"
	<<setw(15)<<"Items"
	<<setw(15)<<"Price"
	<<setw(15)<<"Quantity"<<endl;
	
	for (i=0;i<3;i++){
		total=0;
		cout<<" "<<i+1
		<<setw(23)<<e[i].name.lName<<","
		<<setw(6)<<e[i].name.fName
		<<setw(11)<<e[i].order.day<<"/"<<e[i].order.month<<"/"<<e[i].order.year<<endl;
		
    	for (t=0;t<3;t++){
    		cout<<setw(67)<<e[i].order.item[t].itemName
			<<setw(15)<<e[i].order.item[t].Price
			<<setw(15)<<e[i].order.quan<<endl;
    		total += e[i].order.item[t].Price;
		}
		total =total*e[i].order.quan;
		cout<<setw(96)<<"TOTAL PRICE: "<<total<<endl;
	}
}

main(){
//	problem2();
	problem3();
}


