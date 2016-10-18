#include<iostream>
#include<fstream>
using namespace std;
int main(){
	 ifstream f("input.txt");
	 int b;
	 while(f >> b){
	 		if(b%3==0 && b%5==0){
	 			cout<<"FizzBuzz"<<endl;
	 }
	 		else if(b%3==0){
	 			cout<<"Fizz"<<endl;
	 }
	 		else if (b%5==0){
	 			cout<<"Buzz"<<endl;
	 }
	 		else{
	 			cout<<b<<endl;
	 }
	 }
	 system("pause");
	 return 0;
}
