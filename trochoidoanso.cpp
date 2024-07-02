#include<iostream>
#include<string>

using namespace std ;

int main ()
{

    int tries=0  , guess ;

srand ( time ( NULL));

int num = (rand() % 100 ) + 1;

do 
{
    tries++;

cout << " ENter your Number : \n ";
 cin >> guess ;

if ( guess < num )
cout << " too LOW \n";
else if ( guess > num)
cout << "  too HIGH \n ";
else 
cout<< " CORRECT , your guess is "<< tries << " times \n " ;
cout <<  " ******************************************************** \n \n";
}
while ( guess != num   ) ;







    return 0;

}
