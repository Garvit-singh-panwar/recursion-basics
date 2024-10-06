#include<iostream>
using namespace std;

int factorial(int a)
{
int Factorial = 1;
if(a > 1)
{
 Factorial = a * factorial(a-1);
}

return Factorial;
}



int main()
{
int a =5;
cout << "Factorial of " << a <<" is : " << factorial(a) << endl;

    return 0;
}
