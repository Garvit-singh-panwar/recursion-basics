// Given two number p & q . find the value p^q using a recursive function 

#include<iostream>
using namespace std;

int pow(int p , int q)
{
if(q == 0){
    return 1;
}
return  pow(p , q-1) * p;


}
int main()
{
    int p = 3;
    int q = 3;
    cout << p <<"^" << q << " = " << pow(p , q);
    return 0;
}