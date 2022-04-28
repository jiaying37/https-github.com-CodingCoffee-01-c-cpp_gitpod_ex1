#include <iostream>

using namespace std;

float c_degree(int b){
    
    return 5.0/9.0*(b-32);
}


int main()
{
    float a , b ;
    printf(" degree h:");
    scanf("%f", &b );
  

    cout << " degree C = "<<  c_degree(b) << endl;
    
    
    return 0;
}
