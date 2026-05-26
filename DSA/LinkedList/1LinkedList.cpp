#include <iostream>
// #include<bits/stdc++.h>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    if(arr.size() == 0) return nullptr;  

    Node* head = new Node(arr[0]); // head node at first element
    Node* mover = head; // copy of head 

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthLL (Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        temp = temp -> next;
        cnt ++;
    }
    return cnt;
}

int searchElementInLL(Node* head,  int val){
    Node* temp = head;
    while(temp){
        if(temp-> data == val) return 1;
        temp = temp -> next;
    }
    return 0;
}

Node* deletionOfHead(Node* head){
    Node* temp = head;
    while(head == NULL) return head;
    head = head -> next;
    free(temp);
    return head;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    
    Node* head = convertArr2LL(arr);

    cout << deletionOfHead(head);
    // cout << searchElementInLL(head, 4);
    // lenght of linkedlist
    // cout << lengthLL(head);
    // traversal in linked list
    // Node* temp = head;
    // while(temp != nullptr){
    //       cout << temp->data << " ";
    //      temp = temp->next;
    // }
}