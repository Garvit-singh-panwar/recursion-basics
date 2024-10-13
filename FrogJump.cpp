// there are N Stones , numbered 1,2,...,N 
// for each i ( 1 to N) , the height of stone i is hi 
// there is a frog who is initally on 1.
// he will repeat the following action some no of times to reach stone N

// if the frog is currently on stone i , jump to stone i+1 or stone i+2
// here , a cost of |hi - hj| is incurred ,where j is the stone to land on 

// Find the minimum possible total cost incurred before the frog reaches Stone N.


// input n = 4;
// arra[] = 10 ,30 , 40 , 20;
// output = 30;




#include<iostream>
using namespace std;

int frogJump(int h[] , int i , int N)
{

// Base case 
if(i == N-1) return 0;

// assumption 
if(i == N-2) return frogJump(h ,i+1,N)+abs(h[i] - h[i+1]);

// selfWork
return min(frogJump(h,i+1 ,N) + abs(h[i]- h[i+1]) , frogJump(h , i+2 , N)+abs(h[i] - h[i+2] ) ) ;
}


int frogJump2(int h[] , int i , int N)
{

    // base case 
    if(i  == N-1) return 0;
    // assumption
    if(i ==  N-2) return h[i];

    // self work 
    if(h[i+1] > h [i+2])
    {
        return frogJump2(h , i+2 , N) + abs(h[i] - h[i+2]);

    }
    else return frogJump2(h , i+1 , N) + abs(h[i] - h[i+2] );
}



int main()
{


int height[] ={10 ,20 , 10 , 40 , 20};
int N = 5 ;
int indx = 0;

cout << " chepest cost of frog jump is :  " << frogJump(height , indx ,N) << endl;

cout << " cheapest Cost of frog Jump is :  " << frogJump2(height , indx , N);
    return 0;
}