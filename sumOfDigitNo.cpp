// given an integer , find out the sum of its digit using recursion 

#include<iostream>
using namespace std;

int digitsum(int n)
{

    if(n>=0 && n<=9){
        return n;
    }
int sum = n%10;
int digit = n/10;
 sum = digitsum(digit) + sum;

return sum;
}


int main()
{

    int n = 3455;

   cout << "sum of no of digit n is " <<  digitsum(n);



    return 0;
}