#include<iostream>
#include<string>
using namespace std ;
int find_index ( int number [], int num , int size);
int main ( )
{
int  number [] = { 1,2,3,4,5,6,7,8,9,10};
int size = sizeof ( number ) / sizeof ( char );

int num ;
cout << " Enter number you want to find : ";
 cin >> num ;
int resuilt = find_index ( number , num , size );
  if ( resuilt!=-1 )
  {
    cout << num << " is located at : " << resuilt ;

  }
  else cout << num <<" not at number ";

    return 0 ;
}
int find_index ( int number [], int num , int size )
{
for ( int i = 0 ; i <=size ; i++)
   {
                if ( num == number [i ])
                return i ;

   }
   return -1 ;

   }