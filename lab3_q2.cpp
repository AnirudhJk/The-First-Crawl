//Basic airthmetic operations on integers
//define Library
#include<iostream>
using namespace std;
// Main function
int main()
{
int a,b;
cout << "Choose a number" << endl;
cin >> a;
cout << "Choose another number"<<endl;
cin >>b;
int sum = a+b;
cout << "The sum of these numbers is " <<sum<< endl;
int minus=a-b;
cout << "The difference between these two numbers is "<<minus<<endl;
int divide =a/b;
cout << "The division of these two numbers gives " <<divide<<endl;
int modulus=a%b;
cout << "The modulus of there two integers is " <<modulus<<endl;
return 0;
}


