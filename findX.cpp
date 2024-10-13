#include<iostream>
using namespace std;

int findX(int array[] , int indx ,int N  ,int X)
{
    //  base case

if(indx == N)
{
    // end of the array
    return -1;
}


// self work , assumption
if(array[indx] == X)
{
    return indx;
}


return findX(array ,indx+1 , N , X);

}

int main()
{

int array[] = {1,2,3,4,5,6,7,8,9,10};
int N = 10;
int indx =0;
int x = 61 ;

cout << " Value " << x << " is present at indx " << findX(array , indx , N , x)  << endl;





    return 0;
}