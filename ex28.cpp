#include <iostream>

using namespace std;

int mul(int x,int y){
    return x*y;
}

int main()
{
    int x , y ;
    printf("length:");
    scanf("%d", &x );
    printf("width:");
    scanf("%d", &y );

    cout << " Rectangle area = "<< mul(x,y) << endl;
    
    return 0;
}
