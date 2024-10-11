#include<iostream>
using namespace std;
int pow(int p , int q)
{

if(q == 1)
return p;

if(q % 2 == 0)
{
    int result = pow(p , (q/2));
    return result*result;
}
else{
    int result = pow(p , ((q-1)/2));
    return p*(result*result);
}

}

int main()
{
int p =2;
int q =14;
cout << p<< "^" << q << " = " << pow(p , q);

    return 0;
}