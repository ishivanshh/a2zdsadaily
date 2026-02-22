#include <iostream>
using namespace std;


void patter1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void patter2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout <<"*";
        }
        cout<<endl;
    }
}
void patter3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j <<" ";
        }
        cout<<endl;
    }
}
void patter4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i <<" ";
        }
        cout<<endl;
    }
}
void patter5(int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout << "* ";
        }
        cout<<endl;
    }
}
void patter6(int n){
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
        cout << j <<"";
    }
    cout<<endl;
}
}

void patter7(int n){
    for(int i=0;i<n;i++){
        // space
        for(int j=0; j<n-i-1;j++){
            cout << " ";
        }
        // stars 
        for(int j=0;j< 2*i+1; j++){
            cout << "*";    
        }
        //space 
        for (int j=0; j<n-i-1;j++){
            cout << " ";
        }
        cout<<endl;
    }
}

void patter8(int n){
    for(int i=0;i<n;i++){
        // space
        for(int j=0; j<i;j++){
            cout << " ";
        }
        // stars 
        for(int j=0;j< 2*n-2*i-1; j++){
            cout << "*";    
        }
        //space 
        for (int j=0; j<i;j++){
            cout << " ";
        }
        cout<<endl;
    }
}

void patter9(int n){
    for(int i=1;i<= 2*n-1;i++){
        int stars = i;
        if (i>n)stars = 2*n-i;
        for(int j=1; j<= stars;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void patter10(int n){
    int start = 1; 
    for(int i=0;i<n;i++){ 
        // i = 0 => i%2 == 0 => start =1 => j =0; cout << start = 1 => start = 1-1 =0 => again start = 0; then same again.. 
        if(i%2 == 0) start = 1; 
        else start = 0;
        for(int j=0;j<=i;j++){
            cout << start;
            start = 1 - start; 
            // toggle between 0 and 1
        }
        cout << endl;
    }
}

void patter11(int n){
    int spaces = 2*(n-1);
    for(int i=1;i<=n;i++){
        // numbers 

        for(int j=1;j<=i;j++){
            cout << j;
        }
        // spaces 
        for(int j=1;j<= spaces; j++){

            cout << " ";
        }
        // numbers 

        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout << endl;
        spaces -=2;
    }
}

void patter12(int n){
    int num = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << num << " ";
            num = num +1;
        }
        cout << endl;
    }
}

void pattern13(int n) {

    for(int i = 0; i < n; i++) {

        for(char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";
        }

        cout << endl;
    }
}
void pattern14(int n){
    char ch = 'A';
    for(int i =0;i<=n;i++){
        for(char ch = 'A'; ch <= 'A'+(n-i-1) ; ch ++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main(){
    //patter1(5);
    // patter2(5);
    //patter7(5);
    pattern14(5);
    return 0;
}

