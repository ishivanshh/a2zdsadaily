#include <iostream>
#include <list>
#include <stack>
#include <set>
using namespace std;

// void function does not return a value!
void printingSurname(string name){
    cout << "My surname is: " << name << endl;
}

void printingOnlySurname(string name){
    cout << "wanna change your surname to: " << name << endl;
}

// return answer with void function

int incomePlusExpense(int income , int expense){
    int totalSavings = income + expense;
    return totalSavings;
}

// there is no change in the actual value of a because we are passing the value of a.
//int passbyvalue(int num){
    //num = num + 10;
    // return num;
//}

// pass by reference is used to change the actual value.
int referenceValue(int &num){
    num = num + 10;
    return num;
}

// array printing through loops

// int main(){
//     int arr[6];
//     for(int j =0;j<6;j++){
//         cin >> arr[j];
//     }
//     for (int i = 0 ; i <6 ; i = i+1){
//         cout << arr[i] << " ";
//     }
//     return 0;
// };



// PAIRS => if you want to store more than one value in a single variable, you can use pairs. It is a container that holds two values of different data types.

// pair <int,int> p = {3,2};
//     cout << p.second << " " << p.first << endl;
//     pair<int,int>arr[] = {{1,2},{3,4},{5,6}};
//     cout << arr[2].first << endl;
//     pair<int,pair<int,int>> p1 = {1,{2,3}};
//     cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;


// vectors => unlike arrays, they can modify size of it are dynamic in nature.
/*
 vector<int>v(5,10);
    for(auto it:v){
        cout << it << " ";
    }
    v.erase(v.begin()+2);
    v.insert(v.begin(), 11);
    for(auto it:v){
        cout << it << " ";
    }
    cout << v.size();

*/

// list => it provides fast insertion and deletion of elements , it is implemented in doubly linked list.

/*
list<int> ls;
   ls.push_back(1); // 1
   ls.emplace_back(2); // 1,2
   ls.push_front(3);  // 3,1,2
   cout << ls.front() << endl;
*/

// deque => it is a double ended queue , it allows insertiona n deletion from both the ends.combination of vector and queue..

// deque<int> dq;
//     dq.push_back(1);
//     dq.push_back(2);
//     dq.push_front(3);
//     dq.pop_back();
//     dq.pop_front();
//     for (auto it : dq){
//         cout << it << " ";
//     };



// stack => works on LIFO 

int main(){
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    for (auto it : st){
        cout << it << " ";
    }
    return 0;
}

// set 

