#include <iostream>
using namespace std;

struct node{
	int data;
	node *next;
};
node *head=NULL;

void insert(){
	node *n=new node;
	cout<<"Enter a Number:";
	scanf("%d",n);
	
	if(head==NULL){
		head=n;
		n->next=NULL;
		cout<<"First Node Inserted";
	}
	else{
		node *t;
		t=head;
		n->next=t;
		head=n;
		cout<<"Node Inserted";
	}
}

void display(){
	
	if(head==NULL){
		cout<<"No Node Available";
	}
	
	node *t=head;
	
	while(t->next!=NULL){
		cout<<t->data<<"|";
	}
}

int main(){
	int ch;

    while (1)
    {
        cout << "\n1. Insert\n2. Display\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        default:
            exit(0);
        }
    }

    return 0;
}
