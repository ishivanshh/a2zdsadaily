#include<iostream>
using namespace std;
// brute force => to tell the maximum and min element with the max and min freq in an array. time cpmplexity =>o(n*n)

int main() {
    int n ;
    cin >> n;

    int a[n];
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    int minFreq = INT_MAX , maxFreq = 0;
    int minElem = -1 , maxElem = -1;

    for(int i= 0; i < n;i++){
        int count = 0;

        for(int j = 0; j < n;j++){
            if(a[j] == a[i]){
                count ++;
            }
        }
        
        if(count < minFreq){
            minFreq = count;
            minElem = a[i];
        }

        if(count > maxFreq){
            maxFreq = count;
            maxElem = a[i];
        }
    }
    cout << maxElem << " " << "\n";
    cout << maxFreq << " " << "\n";
    cout << minElem << " " << "\n";
    cout << minFreq << " " << "\n";
    return 0;
}

// Optimized Approach:- Use Hashmap to Store the Frequencies of Elements where key will be the Array Element and Value will be the Frequency of Array Element and Update our Maximum and Minimum Frequencies accordingly.
