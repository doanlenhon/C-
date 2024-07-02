#include<iostream>
#include<string>


using namespace std ;

void getmax_min ( int number[], int size , int *max , int *min )
{for ( int i ; i < size ; i ++)
{
    if ( *max < number[i ])
    *max = number[i ];
     if ( *min > number[i ])
    *min = number[i ];
}

}
int main (){

int number []= { 3,4,5,6,5,4,3,0,8,7,6,100,99};
int size = sizeof(number)/ sizeof( int );
int max = number[ 0];

int min = number[ 0];

getmax_min ( number , size , &max , & min );

cout <<max<< endl<<min ;


    return 0 ;

}