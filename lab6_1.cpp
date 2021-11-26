#include<iostream>
using namespace std;

int main(){
    int a=0, b=0, c=0;
    cout << "Enter an integer: ";
    cin>>a;
    while(a!=0){
        if(a%2==0){
            cout << "Enter an integer: ";
            cin>>a;
            b=b+1;
        }else{
            cout << "Enter an integer: ";
            cin>>a;
            c=c+1;
        }
    }
    cout << "#Even numbers = "<<b<<endl;
    cout << "#Odd numbers = "<<c<<endl;
    return 0;
}