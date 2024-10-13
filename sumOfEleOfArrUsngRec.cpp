#include<iostream>
using namespace std;

int sumEle(int array[] , int indx ,int size)
{
    // Base case
    if(indx == size-1)return array[indx];

    // assumption ,  self work
    return array[indx] + sumEle(array , indx+1 , size);
}


int main()
{
    int array[6] = {1,2,3,4,5,6};
    int indx = 0;
    int size = 6;
    cout <<"sum of all elements of array " << sumEle(array , indx , size) <<endl;

    return 0;
}