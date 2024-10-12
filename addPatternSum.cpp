// Given a  number n . Find the sum of natural numbers till n but with alternative signs 

#include<iostream>
using namespace std;

int ptrnSum(int n)
{

// // base case

if(n == 0 ) return 0;

// assumption 

//  ptrnSum(n-1);

// // self work

// if(n%2 == 0)
// {
//     return ptrnSum(n-1) - n;
// }
// else{
//     return ptrnSum(n-1) + n;
// }


return ptrnSum(n-1) + ((n % 2 == 0) ? -n : n);

//  calculate the sum of first n-1 natural number with alternate sign and we will add contribution of n

}

int main()
{

   cout << " pattern sum : " <<  ptrnSum(5);


    return 0;
}