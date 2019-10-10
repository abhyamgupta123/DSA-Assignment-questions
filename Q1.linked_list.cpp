#include<bits/stdc++.h>
using namespace std;

//declaring the pointer node class which makes the node.
class Node{
	public:
	int data;
	Node *link;
};
//class linked used to bind nodes in single class
class linked{
	public:
	Node *Head;
	linked(){	                       //default constructor
		Head=NULL;	                   //using null pointer as initialising.
	}


	void push(int data1){                                    	//function to push data from starting of the linked list.
		Node* new_node=new Node();
		new_node->data=data1;
		new_node->link=Head;
	  	Head=new_node;
	}


	void append(int data1){                               //function to add data in the end of linked list
		Node *tem=Head;
	  	Node* new_node=new Node();
	  	new_node->data=data1;
	  	new_node->link=NULL;
	  	while(tem->link!=NULL){
	    	tem=tem->link;
	  	}
	  	tem->link=new_node;
	}


	void insert(int key,int da){                               //function to add data at a particular location in linked list.
	    Node *te=Head;
	    Node* new_node=new Node();
	    new_node->data=da;
	    while(te->link!=NULL && te->data!=key){
	      te=te->link;
	    }
	    new_node->link=te->link;
	    te->link=new_node;
	}


	void display(){                                        //function to print data in linked list
	  	Node *temp=Head;
	  	while(temp!=NULL){
	    	cout<<temp->data<<" ";
	    	temp=temp->link;
	  	}
	  	cout<<endl;
	}


	void delete_ele(int da){                               //function to delete data from linked list
	  	Node *tem=Head,*t2;
	  	if(tem->data==da){
	    	Head=tem->link;
	    	free(tem);
	  	}
	  	else{
	    	t2=tem->link;
	    	while(t2!=NULL){
		      	if(t2->data==da){
		        	tem->link=t2->link;
		        	free(t2);
		        	break;
		      	}
	      		tem=tem->link;
	      		t2=tem->link;
	    	}
	  	}
	}

	//mergesort adder funtion
	Node* SortedMerge(Node* a, Node* b){
	    Node* head = NULL;
	    if (a == NULL) 	//base continitons
	        return (b);
	    else if (b == NULL)
	        return (a);
	    if (a->data <= b->data) {
	        head = a;
	        head->link = SortedMerge(a->link, b); //calling mergesort adder again for next elements
	    }
	    else {
	        head = b;
	        head->link = SortedMerge(a, b->link); //calling mergesort adder again for next elements
	    }
	    return (head);
	}

	//merge sort funtion
	void merge_sort(Node **head)
	{
	    Node *tem = *head;
	    Node *a,*b; //creating two pointer to divide linked list into two
	    if ((tem == NULL) || (tem->link == NULL)) { //base contition
	        return;
	    }
	    Node *t1,*t2;
	    t1 = tem;
	    t2 = tem->link;
	    //mid finder
	    while (t2 != NULL) {
	        t2= t2->link;
	        if (t2 != NULL) {
	            t1 = t1->link;
	            t2 = t2->link;
	        }
	    }
	    a = tem; //a to first
	    b = t1->link; //b to mid
	    t1->link = NULL;
	    merge_sort(&a); //caliing merge_sort with a
	    merge_sort(&b); //caliing merge_sort with b
	    *head = SortedMerge(a, b); //combining sorted a and b
	}

	void mergesort(){                      //mergesort caller funtion with arggument as head
		merge_sort(&Head);
	}

};
//main function to call mergesort
int main(){
	linked list;
	list.push(1);
	list.push(2);
	list.push(6);
	list.push(8);
	list.display();
	list.mergesort();
	list.display();
	return 0;
}
