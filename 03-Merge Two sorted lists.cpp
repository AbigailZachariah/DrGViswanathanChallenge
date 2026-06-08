#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1){
        data = data1;
        next = next1;
    }

public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node *convertArr2LL(vector<int> &arr){
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++){
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* mergeTwoLists(Node*list1, Node*list2){
    if(list1==nullptr)return list2;
    if(list2==nullptr)return list1;

    if(list1->data<list2->data){
        list1->next=mergeTwoLists(list1->next,list2);
        return list1;
    }
    else{
        list2->next=mergeTwoLists(list1,list2->next);
        return list2;
    }    
}

int main(){
    vector<int>nums1;
    int n1;
    cout<<"Enter number of elements: ";
    cin>>n1;

    int number1;
    cout<<"Enter the element: ";
    for(int i=0;i<n1;i++){
        cin>>number1;
        nums1.push_back(number1);
    }

    vector<int>nums2;
    int n2;
    cout<<"Enter number of elements: ";
    cin>>n2;

    int number2;
    cout<<"Enter the element: ";
    for(int i=0;i<n2;i++){
        cin>>number2;
        nums2.push_back(number2);
    }
    
    Node*list1=convertArr2LL(nums1);
    Node*list2=convertArr2LL(nums2);

    Node* merged=mergeTwoLists(list1,list2);
    
    print(merged);
    
    return 0;
}