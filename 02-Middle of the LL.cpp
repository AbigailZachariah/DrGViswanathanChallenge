#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(Node*next1,int data1){
        data=data1;
        next=next1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArr2LL(vector<int>&nums){
    Node* head=new Node(nums[0]);
    Node* mover=head;

    for(int i=1;i<nums.size();i++){
        Node*temp=new Node(nums[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void print(Node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node*middleNode(Node*head){
    Node*slow=head;
    Node*fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

int main(){
    vector<int>nums;
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    int number;
    cout<<"Enter the element: ";
    for(int i=0;i<n;i++){
        cin>>number;
        nums.push_back(number);
    }
    Node*head=convertArr2LL(nums);
    Node*mid=middleNode(head);
    print(mid);
    return 0;
}