// Implement aa simple calculator using a switch.
#include<iostream>
using namespace std;

/*

Input 2 numbers.
15
25
Input an operator
-
-10

*/
int main(){
    int n1,n2;
    cout<<"Input 2 numbers."<<endl;
    cin>>n1>>n2;

    char op;
    cout<<"Input an operator"<<endl;
    cin>>op;

    switch(op){
        case '+':
            cout<<n1+n2<<endl;
            break;
        case '-':
            cout<<n1-n2<<endl;
            break;
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '/':
            cout<<n1/n2<<endl;
            break;
        default:
            cout<<"Enter another operator"<<endl;
            break;
    }
    return 0;
}