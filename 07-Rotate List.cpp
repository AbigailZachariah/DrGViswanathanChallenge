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

Node* findTail(Node*temp,int k){
    int cnt=1;
    while(temp!=NULL){
        if(cnt==k)return temp;
        cnt++;
        temp=temp->next;
    }
    return temp;
} 

Node*rotateRight(Node*head,int k){
    if(head==NULL || k==0)return head;
    int len=1;
    Node*tail=head;

    while(tail->next!=NULL){
        len++;
        tail=tail->next;
    }

    if(k%len==0)return head;
    k=k%len;

    tail->next=head;
    Node*newTail=findTail(head,len-k);
    head=newTail->next;
    newTail->next=NULL;

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
    cout<<"Enter k:";
    cin>>k;

    Node*head=convertArr2LL(nums);
    Node*rotate=rotateRight(head,k);
    print(rotate);
    return 0;
}