#include<iostream>
using namespace std;

void KMultiplesOfDig(int Digit , int k)
{

// base case
if(k == 0)return ;

//  assumption
KMultiplesOfDig(Digit , k-1 );

// self work
cout << Digit * k << " ";

return;

}

int main()
{

KMultiplesOfDig(6 ,5);



    return 0;
}