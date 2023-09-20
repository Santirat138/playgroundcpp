#include<iostream>
using namespace std;
class node{
	public:
		int num=-1;
		node *next;
};
node *nullNode=new node();
bool isSameNum(node **headRef, int numIn);
void addFirst(node **headRef, int newNum);
node *findNode(node **headRef, int target);
node *findPrevNode(node **headRef, int target);
void show()
int main(){
	node *head=NULL;
	node **headR=&head;

	for(int i=0;i<=5;i++){
		addFirst(headR, i);
	}
	
}
bool isSameNum(node **headRef, int numIn){
	bool status;
	if(*headRef!=NULL){
		node *checkNode;
		checkNode=*headRef;
		while(checkNode!=NULL){
			if(checkNode->num==numIn){
				status=true;
				break;
			}
			else{
				status=false;
				checkNode=checkNode->next;
			}
		}
	}
	else if(*headRef==NULL){
		status=false;
	}
	return status;
}
void addFirst(node **headRef, int newNum){
	node *newNode=new node();
	newNode->num=newNum;
	if(headRef!=NULL){
		newNode->next=*headRef;
	}
	*headRef=newNode;
}
node *findNode(node **headRef, int target){
	if(*headRef!=NULL){
		node *targetNode=*headRef;
		while(targetNode!=NULL){
			if(targetNode->num==target){
				break;
			}
			else{
				targetNode=targetNode->next;
			}
		}
		return targetNode;
	}
	else{
		return nullNode;
	}
}
node *findPrevNode(node **headRef, int target){
	node *prevNode;
	node *currNode=findNode(headRef, target);
	
	
}