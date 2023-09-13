// Idea NULL 3: Set default num in class node = -1.
#include<iostream>
using namespace std;
class node{
	public:
		int num=-1;
		node *prev;
		node *next;
};
node *null=new node();

bool isSameNum(node **headRef, int numCheck);
int main(){
	node *head=NULL;
	node **headR=&head;
	node *tail=NULL;
	node **tailR=&tail;
	
}
bool isSameNum(node **headRef, int numCheck){
	node *checkNode=*headRef;
	bool status=false;
	while(checkNode!=NULL){
		if(checkNode->num==numCheck){
			status=true;
			break;
		}
		else{
			checkNode=checkNode->next;
		}
	}
	return status;
}