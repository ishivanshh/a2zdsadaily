#include<iostream>
using namespace std;

// extraction of digits... 

/*
int extraction(int n){
    while(n>0){
    int lastDigit = n % 10;
    cout << lastDigit;
    n = n /10;
}};
int main(){
    int n;
    cin >> n;
    extraction(n);
}

*/


// print names five times..


int func1(int i,int n){
    if(i<n){
        cout << "shivansh" << " ";
        func1(i+1,n);
    } else return 0;
}

int func2(int i, int n){
    if(i<n){
        cout << i << endl;
        func2(i+1,n);
    } else return 0;
}
int func3(int i, int n){
    if(i<n){
        return;
    } else {
        cout << i << endl;
        func3(i-1,n);
    }
}
int main(){
    int n;
    cin>>n;
    func3(1,n);
}