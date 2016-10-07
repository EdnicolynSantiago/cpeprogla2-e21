//Ednicolyn Santiago
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

double problem1(double number){
	cout<<"Number to be rounded off: ";
	cin>>number;
	cout<<"The Rounded off value: "<<round(number)<<"\n\n\n";
	cout<<"============================================================="<<endl;
}


void problem2(){
	int uniques [10];
	int max = 20;
	int min = 1;
	int num1; 
	bool check = true; 
	
	srand(time(NULL)); 
	cout << "\n10 RANDOM NUMBERS: ";	
	
	for (int i=0;i<10;i++){
    	
	do{
    	num1=rand()%max+min;
    	check = true;
   		 for (int j=0;j<i;j++)
   		     if (num1 == uniques[j]) {
           	 check = false; 
             break; 
        }
    } while (!check); 
	uniques[i]=num1;
	cout << num1 << " ";
	}
	cout<<"\n\n============================================================="<<endl;
}


void call_by_value(){
	int n, result=1;
	cout<<"\n\nThe Factorial of number: ";
	cin>>n;
	for(int i=1;i<n+1;i++) {
		if(n==0){
		cout<<" Is: \n";}
		else result=result*i;
	}
	cout<<"Answer: "<<result<<endl;
	cout<<"\n\n============================================================="<<endl;
}

main(){
	double number;
	int result;
	problem1(number);
	problem2();
	call_by_value();
}
