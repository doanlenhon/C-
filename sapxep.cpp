#include<iostream>
#include<string>

using namespace std ;

void sort ( int array[] , int size ){
    int temp ;
for ( int i = 0 ; i < size-1 ; i ++)
{
    for ( int j = size  ; j>i ; j --)
    {
        cout << j;
        if ( array[j]< array [ j-1 ] )
        {
            temp = array [ j-1 ];
            array [ j-1 ]= array [ j];
            array [ j]= temp ;
        }
    }
}
}
int main (){


int array [ ] = { 7,4,5,6,8,3};
int temp ;
int size = sizeof( array )/ sizeof ( array[ 0]);
sort ( array , size );
 for ( int element : array)
{
    cout << element << endl;
}
    return 0 ;

}