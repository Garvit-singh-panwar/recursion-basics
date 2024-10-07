// program to find nth  fibonacci number ?

#include<iostream>
using namespace std;
// this is how our program works 

// int fibonacci(int n)
// {
//     int fibonacciNo = n;

// this is a base case which we know  that fionnacci no o is 0 and 1 id 1

// if(n == 1 || n == 0)
// {
//     return fibonacciNo;
// }

// this is assumption and self work 
// what is fibonacci 

// fibonacciNo = fibonacci(n-1) + fibonacci(n-2);

// return fibonacciNo;

// }

int fibonacci(int n){

    if(n == 0 || n == 1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{

int n = 7;

cout << n <<"th fibonachi no is " << fibonacci(n) <<endl;

return 0;
}
