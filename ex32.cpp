#include <iostream>

using namespace std;
int add(int x,int y){
    return x+y;
}
int sub(int x,int y){
    return (x > y)? x-y:y-x;

}
int main()
{
    int x=3,y=7;
    cout << " add x + y = " << add(x,y) << endl;
    cout << " sub x - y = "<< sub(x,y) << endl;
    cout << " Hello World" << endl;
    
    return 0;
    
}
