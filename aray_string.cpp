#include<iostream>
#include<string>
using namespace std ;
int find_index ( string PC[ ] , string choice , int size );
int main ( )
{
string  PC  []= { "asus", "acer" , "HP" , "dell" };
int size = sizeof ( PC ) / sizeof ( string );

string choice  ;
cout << " Enter PC you want to find : ";
 cin >> choice  ;
int resuilt = find_index ( PC , choice , size );

  if ( resuilt!=-1 )
  {
    cout << choice  << " is located at : " << resuilt ;

  }
  else cout << choice <<" not at number ";

    return 0 ;
}
int find_index ( string PC[ ] , string choice , int size )
{
for ( int i = 0 ; i <=size ; i++)
   {
                if ( choice == PC [i ])
                return i+10 ;

   }
   return -1 ;

   }