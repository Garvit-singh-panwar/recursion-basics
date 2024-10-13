#include<iostream>
using namespace std;

int maxEle(int array[], int indx , int size)
{

    if( indx == size - 1)return array[indx];
    maxEle(array ,indx +1 ,size);
    if(array[indx] > maxEle(array , indx + 1 , size) )
    {
        return array[indx];
    }
    else return maxEle(array , indx + 1 ,  size);
}

int maxEle2(int array[] , int indx , int size)
{
    if(indx == size-1) return array[indx];

    return max( array[indx],maxEle2(array,indx+1,size));
}

int main(){
int array[6] = {1,2,30,4,5,6};
int size = 6;
int indx = 0;

    cout << "max element of array  : " << maxEle(array , indx , size) << endl;
    cout << "max element of array with maxEle2 fun : " << maxEle2(array , indx ,size); 


    return 0;
}