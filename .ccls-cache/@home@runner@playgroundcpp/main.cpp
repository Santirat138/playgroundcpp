#include<iostream>
using namespace std;
class node{
    public:
        int num=-1;
        node *next;
};
node *nullNode=new node();
void addFirst(node **headRef, int newNum);
void show(node **headRef);
node *findNode(node **headRef, int target);
node *findPrevNode(node **headRef, int target);
void deleteNode(node **headRef, int target);
/*-----------------------------------------*/ 
int main(){
    node *head=NULL;
    node **headR=&head;
    for(int i=0;i<=5;i++){
        addFirst(headR, i);
    }
	show(headR);
	node *testPrev=findPrevNode(headR, 5);
	cout<<endl<<testPrev->num;
}
/*-----------------------------------------*/ 
void addFirst(node **headRef, int newNum){
    node *newNode=new node();
	newNode->num=newNum;
    if(*headRef==NULL){
        *headRef=newNode;
    }
    else if(*headRef!=NULL){
        newNode->next=*headRef;
        *headRef=newNode;
    }
}
void show(node **headRef){
    node *showNode=*headRef;
    while(showNode!=NULL){
        cout<<showNode->num<<" ";
        showNode=showNode->next;
    }
    cout<<endl<<endl;
}
node *findNode(node **headRef, int target){
    node *currNode=*headRef;
    while(currNode!=NULL){
        if(currNode->num==target){
            break;
        }
        else{
            currNode=currNode->next;
        }
    }
    return currNode;
}
node *findPrevNode(node **headRef, int target){
    node *prevNode=nullNode;
    node *currNode=findNode(headRef, target);
    if(currNode==*headRef){
        return prevNode;
    }
    else if(currNode!=*headRef){
        prevNode=*headRef;
        while(currNode!=NULL){
            if(currNode->num==target){
                break;
            }
            else{
                prevNode=currNode;
                currNode=currNode->next;
            }
        }
        return prevNode;
    }
    else{
        return nullNode;
    }
}
/*void deleteNode(node **headRef, int target){
    
}*/