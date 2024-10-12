#include<iostream>
using namespace std;
string removeA(string str ,int indx , int size)
{
    // thats how this work 
// if(indx == size)return "";
// if(str[indx] == 'a') return removeA(str, indx+1 , size);
// else return str[indx]+removeA(str,indx+1,size);


if(indx == size) return "";
string curr = "";
curr += str[indx];
return ((str[indx] == 'a') ? "" : curr ) + removeA(str , indx+1 ,size);

}


int main()
{

string s ="abxace";
int size =6;
int indx = 0;

cout << "remove a from "<< s << endl;
cout << removeA(s,indx,size);


    return 0;
}