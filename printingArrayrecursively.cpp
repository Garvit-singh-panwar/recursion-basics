#include<iostream>
void printArrayEle(int array[] , int indx)
{
     if(indx == 0)
    {
        std::cout << array[indx] <<" ";
        return;
    }
    printArrayEle( array , indx-1);
   std::cout<<array[indx] <<" ";
   return;
}
void printArrayEle2(int array[] , int indx ,int size)
{
    if(size == indx)return ;
     
    std::cout << array[indx];
    printArrayEle2(array , indx+1 , size);
    return;

}
int main()
{
int array[6]={1,2,3,4,5,6};
int indx = 0 ;
int size =6;
std::cout << "elements of array " <<std::endl;

printArrayEle(array,size-1);
std::cout << std::endl;
printArrayEle2(array , indx , size);
return 0;
}