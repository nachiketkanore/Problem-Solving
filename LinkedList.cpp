#include<bits/stdc++.h>
using namespace std;

class linklist{
    private:
        typedef struct node{
            int data ;
            node *next;
        }* nodeptr;

        nodeptr head;//first node in linklist
        nodeptr curr;
        nodeptr temp;

    public:
        linklist();
        void addnode(int data);
        void deletenode(int data);
        void printlist();

};

//constructor
linklist::linklist(){
    head = NULL;
    curr = NULL;
    temp = NULL;
}

//addnode function
void linklist::addnode(int val){
    nodeptr n = new node;
    n->next = NULL;
    n->data = val;

    //if list is already created
    if(head != NULL){
        curr = head;
            //find last node to add data to its next
        while(curr->next != NULL)
            curr = curr->next;
        
        curr->next = n;

    }else   //if list is empty
        head = n;
    
}

void linklist::deletenode(int val){
    //find a node with data = val
    nodeptr delptr = NULL;
    temp = head;
    curr = head;

    while(curr != NULL and curr->data != val){
        temp = curr;
        curr = curr->next;
    }

    if(curr == NULL){
        cout << val << " was not found in the linklist " << endl;
        delete delptr;
    }
    else{
        delptr = curr;  // val is found in this
        curr = curr->next;  // val is found behind this
        temp->next = curr;
        if(delptr == head){
            head = head->next;
            temp = NULL;
        }
        delete delptr;
        cout << val << " was deleted from the linklist " << endl;
    }

}

void linklist::printlist(){
    curr = head;
    while(curr != NULL){
        cout<< curr->data << " ";
        curr = curr->next;
    }
    cout << '\n';
}

int main(){
    linklist a;
    int n;  cin>>n;
    while(n--){
        int val ;   cin>>val;
        a.addnode(val);
    }
    a.printlist();
    int del = 0;    cin>>del;
    a.deletenode(del);

    a.printlist();

    return 0;
}
