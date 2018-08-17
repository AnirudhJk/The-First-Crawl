//Write a C++ program to perform declaration and output of all (values of) basic data types and also print out the sizes of data types
//Library
#include<iostream>
using namespace std;
//Main programme
int main()
{
//Displaying the size of variables
    int a;
    cout<<"Size of integer = " << sizeof(a)<< "bytes"<<endl;
    char Charcharacter;
    cout<<"Size of character = " <<sizeof(Charcharacter)<< "bytes"<<endl;
    bool True;
    cout<<"Size of boolean = " << sizeof(True)<<"bytes"<<endl;
    double Doublevar;
    cout <<"Size of Double = " << sizeof(Doublevar)<< "bytes"<<endl;
    float swim;
    cout<<"Size of float = " << sizeof(swim)<< "bytes"<< endl;
    return 0;
}
