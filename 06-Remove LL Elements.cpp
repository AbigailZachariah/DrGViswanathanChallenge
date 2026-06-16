#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node*next1){
        data=data1;
        next=next1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node*convertArr2LL(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node*removeElements(Node*head,int val){
    while(head!=NULL && head->data==val){
        Node*newHead=head->next;
        delete(newHead);
        head=newHead;
    }

    if(head==NULL)return head;

    Node*prev=nullptr;
    Node*temp=head;

    while(temp!=NULL){
        Node*front=temp->next;
        if(temp->data==val){
            prev->next=front;
            delete(temp);
            temp=front; //prev not moved cuz after node is deleted prev still remains as prev
        }
        else{
            prev=temp;
            temp=front;
        }
    }
    return head;
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
    int val;
    cout<<"Enter an integer:";
    cin>>val;

    Node*head=convertArr2LL(nums);
    Node*result=removeElements(head,val);
    print(result);
    return 0;
}