// Given a number n . find the increasing sequence from 1 to n without using any loop 

#include<iostream>
using namespace std;

void increasingSeq(int n)
{
    // base case 
    if( n == 1)
    {
         cout << n << " "; return;
    }
    //  assumption 
    increasingSeq(n-1);
    // self work
    cout << n << " " ;
    return ;
}

int main()
{

int n =7 ;

cout << " all natural numbers between 1 to " << n << endl;
 increasingSeq(n);


    return 0;
}