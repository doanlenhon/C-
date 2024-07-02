#include<iostream>
#include<string>

using namespace std ;

int main ( )
{
int m,n ;

int array [50][50];
cout << " nhap hang n va cot m :";

cin >> n>> m ;
for ( int i ; i<n ; i ++)
   {  for ( int j ; j < m ; j ++)
     {
        cout << "nhap cac phan tu hang 1 : ";
           cin>> array[i][j];
           


     }
     
     
     }
    for ( int i ; i<n ; i ++)
   {  for ( int j ; j < m ; j ++)
   cout << array ;

   }
    return 0 ;

}
