# include<iostream>
# include<bitstring.h>
#include <vector>
#include <map>
#include <string>

using namespace std;

// hashing of numbers in an array.

int main(){
    int n;
    cin >> n;
    int arr[n];
    // input array
    for(int i = 0; i <n; i++){
        cin >> arr[i];
    }
    // precompute
    int hash[13] = {0};
    for(int i=0; i<n;i++){
        hash[arr[i]] += 1;
    }

    int q; // query 
    cin >> q; // how many queries ex. 1,2,3,4,5
    while(q--){
        int num;
        cin >> num;
        // fetching 
        cout << hash[num] << endl;
    }
    return 0;
}
// input type case 
// 5    => size of array
// 1 3 2 1 4 => array elements
// 5 => number of queries
// 2 3 1 5 6  => queries to fetch the count of numbers in the arrays


// hashing of strings in an array.
/*
int main(){
    string s;
    cin >> s;
    // if lower [25] but if we have upper also we will take [256] with (no - 'a');
    int hash[25] = {0};
    for(int i=0;i<s.size();i++){
        hash[s[i]- 'A'] ++;
    }
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        // fetch

        cout << hash[c-'A'] << endl;
    }
    return 0 ;
}

*/


// using map STL for larger size of array is it helfull

/*
int main(){
    int n;
    cin >> n;
    int arr[n];
    for( int i=0;i<n;i++){
        cin >> arr[i];
    }
    // precompute 
    map<int,int>mpp;
    for (int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    // iterate in map

    for (auto it: mpp){
        cout << it.first << "=> " << it.second << endl;
    }
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;

        // fetch
        cout << mpp[num] << endl;


    }
}

// use map for string afterwards...

*/