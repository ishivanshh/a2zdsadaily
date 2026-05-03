// function call itself is called recursion.

// 1. print name five times 
// TC,SC => 0(N)

#include<iostream>
using namespace std;

void func(int i, int n){
    if (i>n) return; 
    cout << "i love cricket!" << endl;
    func(i+1,n);
}

// int main(){
//     int n;
//     cin >> n;
//     func(1,n);
// }

// 2. print lineraly from 1 to n

void func2(int i, int n){
    if(i>n) return;
    cout << i << endl;
    func2(i+1,n);
}


// int main(){
//     int n; 
//     cin >> n; // n=6
//     func2(1,n);
// }

// 3. print in reverse order from n to 1.


void func3(int i, int n){
    if(i<1) return;
    cout << i << endl;
    func3(i-1,n);
}

// int main(){
//      int n;
//      cin >> n;
//      func3(n,n);
// }

// 4. print in reverse order from n to 1 using backtracking. means after recursion we will print the value of i.

void func4(int i, int n){
    if(i<1) return;
    func4(i-1,n);
    printf("%d\n",i);
 }


// int main(){
//    int n;
//     cin >> n;
//     func4(n,n);
// }

// 5. print in reverse order from n to 1 using backtracking.

void func5(int i, int n){
    if(i>n) return;
    func5(i+1,n);
    printf("%d\n",i);   
}

// int main(){
//     int n;
//     cin >> n;
//     func5(1,n);
// }

// 6. sum of first n numbers using recursion, parameterised recursion.


void func6(int i, int sum){
    if(i<1){
        cout << sum << endl;
        return; 
    } 
    func6(i-1,sum+i);
}


// int main(){
//     int n;
//     cin >> n;
//     func6(n,0);
// }

// 7. functional sum of first n numbers using recursion.

int func7(int n){
    if(n==0) return 0;
    return n + func7(n-1);
}

// int main(){
//     int n;
//     cin >> n;
//     printf("%d\n",func7(n));
// } 

// 8. factorial of a number using recursion.

int func8(int n){
    if(n==0) return 1;
    return n * func8(n-1);
}

// int main(){
//     int n;
//     cin >> n;
//     printf("%d\n",func8(n));
// }

// 9. reverse an array 

void func9(int i, int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i] , arr[n-i-1]);
    func9(i+1, arr, n);

}
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++) cin >> arr[i];
//     func9(0, arr, n);
//     for(int i = 0; i<n;i++) cout << arr[i] << " ";

//     return 0;
// }

//10. check is a string is palindrome(string on reversal reads the same) or not

// i = 0 , s = madsm
// s.size()/2 => 3
// s[i] = m .... s[n-i-1] =  m same again call function s[i] = a.... s[n-i-1] = s not same condition satisfy return false;
bool func(int i, string s){
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    return func(i+1,s);
}

int main(){
    string s = "madam";
     cout << func(0,s);
}


// ..................................

// Multiple recursion calls.. 



int func11(int n){
    if(n<=1) return n;

    int last = func11(n-1);
    int seclast = func11(n-2);

    return last + seclast;
}

// int main(){
//     int n;
//     cin >> n;
//     cout << func11(n);
// }

