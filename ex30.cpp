#include <iostream>

using namespace std;

int add(int a ,int b){
    return a+b/60;
    }


int main()
{
    int a , b ;
    printf(" hr:");
    scanf("%d", &a );
    printf(" min:");
    scanf("%d", &b );

    cout << " hour = "<< add(a,b) << endl;
    cout << " minute = " << b%60 <<endl;
    
    return 0;
}
