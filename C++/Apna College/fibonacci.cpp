#include<iostream>
using namespace std;

/*

5
0
1
1
2
3

*/
void fib(int n){
    int t1=0;
    int t2=1;
    int nextTerm;

    for(int i = 1; i<=n;i++){
        cout<<t1<<endl;
        nextTerm = t1 + t2;
        t1=t2;
        t2=nextTerm;
    }
    return;
}

int main(){
    
    int n;
    cin>>n;

    fib(n);
    
    return 0;
}