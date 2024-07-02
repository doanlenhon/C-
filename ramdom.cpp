#include<iostream>
#include<string>
using namespace std ;
int main ( )
{
srand ( time ( NULL));
int x = rand ( );
  float y= (time (NULL)/60/60/24/355) + 1970;

    int num = ( rand ( ) % 6 + 1);
    // lay phan du cua rand chia cho 6 
    // ket qua tu 0 den 5 , sau do cong them 1 => ramdom tu 1 den 6
    cout << num<<"  and  " << x << "and " << y;
    return 0;
}