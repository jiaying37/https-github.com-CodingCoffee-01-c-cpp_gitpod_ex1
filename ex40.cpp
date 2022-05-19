#include <iostream>

using namespace std;


int main()
{
    char c[]="this is a book.";
    char* cc = c;
    int i,n = sizeof(c)/sizeof(char);
    
    printf("n = %d\n",n);
    for(i =0;i < n;i++){
        printf("%c",c[i]);
    }
     printf("\n");
    for(i =0;i < n;i++){
        printf("%c",*(cc+i));
    }
    printf("\n");
    for(i =0;i < n;i++){
        printf("%x ",cc+i);
    }
    printf("\n");
    for(i =0;i < n;i++){
        printf("%x ",*(cc+i));
    }
    printf("\n");
    
    return 0;
}
