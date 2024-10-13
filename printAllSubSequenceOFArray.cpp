#include<iostream>
#include<vector>
#include<string>
using namespace std;

// void f(string s , int indx , string result  , vector <string> &vec )
// {


// if(indx == s.length())
// {
//     vec.push_back(result);
//     return ;
// }

// f(s , indx+1 , result + s[indx] , vec );
// f(s , indx+1 , result ,vec );


// return ;

// }


void f2( string s , int indx , string result)
{
if( indx == s.length())
{
    cout << result << " ";
    return ;
}

f2( s , indx+1 , result+s[indx]);
f2(s,indx+1  , result) ;
return ;

    
}

int main()
{

string s = "abc";
int N = 4 ;
int indx = 0 ;
string result = "";
// vector  <string > sq ;
// f(s , N , result , sq);
f2(s,indx ,result);
    return 0;
}