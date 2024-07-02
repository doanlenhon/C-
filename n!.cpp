#include<iostream>
#include<string>
#include <math.h>
using namespace std ;
 int giaithua(int a);
int main (){
 int a ;
 cout << " nhap a :  ";
 cin >> a ; 
  cout << " giai thua cua  a la :  ";

  int rs= giaithua(a);
 cout << rs << " can bat 2 "<< sqrt(4);
}
 int giaithua(int a){

    if ( a ==0 )
    return 1;
    return a*giaithua(a-1);
 }