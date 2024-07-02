#include <iostream>
#include <string>

using namespace std ;


float  square( float length ) 
{
float a ;
    return a= length*length ;
}


int main ( )
{

float length ;

cout << " nhap chieu dai length : \n ";
cin >> length ;

cout << " dien tich hinh vuong la " << square( length )<< "m^2 ";

    return 0 ;
     
}