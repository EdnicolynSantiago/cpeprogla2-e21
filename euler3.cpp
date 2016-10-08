#include<iostream>
#include<fstream>
#include<math.h>

using namespace std;

int main(){
	ifstream f("input.txt");
	
	int num,sum=0;
	while (f >> num){}
	
	for ( int i = 0 ; i < num ; i++ )
    {
        if ( i % 3 == 0 || i%5 ==0)
        sum+=i;                     
    }
    
	cout << sum << endl;
	system ("pause");
	
}
	
	
