#include<iostream>
using namespace std;

int main() {
    int i , x , y=0;
    cout <<"請輸入一個數:"<<endl;
    cin>>x;
    for (i=1;i<=x;i++)
    if(x%i==0){
        cout<<i<<" ";y++;
        
    }
     cout<<"因數有"<<y<<"個"<<endl;

     return 0;
}
