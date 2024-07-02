#include<iostream>
#include<ctime>
#include<string>

using namespace std ;

char banchon ( ){
char banchon ;
do 
{
cout << " tro choi keo bua bao \n";
cout << " 1 :cho lua chon keo \n"; 
cout << " 2 :cho lua chon bua \n"; 
cout << " 3 :cho lua chon bao \n"; 
cin >> banchon ;
}
while ( banchon != '1' && banchon !='2' && banchon !='3' );

return banchon ;

}
char maychon ( ){
srand ( time ( NULL ));

char maychon=rand()%3 + 1 ;

switch ( maychon )
{
    case 1 : cout <<" keo"; break ;
     case 2 : cout <<" bua"; break ;
      case 3 : cout <<" bao"; break ;

}
return maychon ;

}
void  show ( char choice )
{
    switch ( choice  )
    {
        case '1' :cout << " keo "; break ;
        case  '2': cout<<"  bua "; break ;
         case '3' :cout<< " bao "; break ;
    }
  
}
void ketqua ( char player , char computer );

if ( player = )
int main ( ){
char player , computer ;
player = banchon();
cout << " you choice : ";
show ( player );

cout << " \n may choice : ";
computer = maychon ();
show ( computer );
ketqua ( player , computer );


    return 0 ;
}
