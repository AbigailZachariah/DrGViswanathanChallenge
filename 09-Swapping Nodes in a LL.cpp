#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

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

Node* convertArr2LL(vector<int>&nums){
    int n=nums.size();
    Node*head=new Node(nums[0]);
    Node* mover=head;

    for(int i=1;i<n;i++){
        Node*temp=new Node(nums[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void print (Node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node* swapKNodes(Node*head,int k){
    Node*first=head;

    for(int i=1;i<k;i++){
        first=first->next;
    }

    Node*fromBegin=first;
    Node*second=head;

    while(first->next!=NULL){
        first=first->next;
        second=second->next;
    }

    Node*fromEnd=second;
    swap(fromBegin->data,fromEnd->data);

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

    int k;
    cout<<"Enter the value of k: ";
    cin>>k;

    Node*head=convertArr2LL(nums);
    Node*swapNodes=swapKNodes(head,k);
    print(swapNodes);
    return 0;
}