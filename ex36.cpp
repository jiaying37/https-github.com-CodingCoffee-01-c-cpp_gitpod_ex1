
#include<iostream>
using namespace std;

int IsPrime(int m)
{
    int i;
    for(i=2;i<m;i++)
{
    if(m%i==0)
    return 0;
    
}
return 1;
 } 
 int main()
{
    int n;
    cout<<"Please Input a Int number:";
    cin>>n;
    if(IsPrime(n)) 
    cout<<"Yes is Prime Number!";
    else
    cout<<"  No is not Prime Number!";
    return 0;
 } 
