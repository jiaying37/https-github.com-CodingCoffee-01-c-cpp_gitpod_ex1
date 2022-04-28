#include <iostream>

using namespace std;

int add(int a ,int b){
    return a*60+b;
}

int main()
{
    int a , b ;
    printf(" hr:");
    scanf("%d", &a );
    printf(" min:");
    scanf("%d", &b );

    cout << " minute = "<< add(a,b) << endl;
    
    return 0;
}
