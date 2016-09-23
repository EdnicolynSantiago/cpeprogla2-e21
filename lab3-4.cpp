#include<iostream>
using namespace std;

int main( )
{
    char str[80];

	    cout<<"Enter string: ";
	    cin.getline(str, 80);
	
    int t;
    for(t = 0; str[t] = '\0'; t++);

    int i;
    for(i = 0; (i < t/2) && (str[i] == str[t - i - 1]); i++);

    if(i == t/2)
        cout<< str << "  is a palindrome";
    else
        cout<< str << "  is not a palindrome";
return 0;
}
