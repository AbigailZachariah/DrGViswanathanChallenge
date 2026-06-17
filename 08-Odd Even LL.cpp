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

Node* oddEven(Node*head){
    if(head==NULL ||head->next==NULL)return head;

    Node*odd=head;
    Node*even=head->next;
    Node*evenHead=head->next;

    while(even!=NULL && even->next!=NULL){
        //establishing link
        odd->next=odd->next->next;
        odd=odd->next;

        even->next=even->next->next;
        even=even->next;
    }
    
    odd->next=evenHead;
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

    Node*head=convertArr2LL(nums);
    Node*OddEven=oddEven(head);
    print(OddEven);
    return 0;
}