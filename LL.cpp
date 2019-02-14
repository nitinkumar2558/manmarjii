
#include <iostream>
using namespace std;

// Generic Programming - Ignore 

class Node{
    public:
    // Data 
    int data;
    // Pointer to the next Node
    Node * next;
    // Construct that makes the ptr to NULL
    Node(){
        next = NULL;
    }

};
//.............................................................

class LinkedList{
    // Head + Circles inside linked with each other
    public:
    // Head -> Node type ptr
    Node * head;
    Node * tail;

    // Construct
    LinkedList(){
        head = NULL;
        tail = NULL;
    } 
    // Circles inside linked with each other
    // Rules how circles will be linked

    
//...............................................................
    void insert(int value){
       
       Node * temp = new Node; 
       // Insert value in the node
       temp->data = value;


        // If 1st Node is added
       if(head == NULL){
            head = temp;
			 tail = temp;       
}


       // Any other Node only.
       else{
            tail->next = temp;
 			tail = temp;
       }
 } 
//..............................................................
    void insertAt(int pos, int value){
        // Reach the place before the pos
        Node * current = head;
        int i =1;
        while(i < pos-1){
            i++;
            current = current->next;
		if(current==NULL) break;
        }

        // Create a node
        Node * temp = new Node;
        temp -> data = value;

if(current!=NULL){
        // Moving ptrs like magic ! if not head
        temp->next = current->next;
        current->next = temp;
        
        // Update the code for 1st position
    }


else cout<<"Linked List does not have that many elements"<<endl; 
    }
//.........................................................
//INSERTING at head
  void insertAthead(int value){
        
        // Create a node
        Node * temp = new Node;
        temp -> data = value;


        // Moving ptrs like magic ! if not head
        temp->next = head;
       head = temp;
        
        // Update the code for 1st position

}
//................................................................

    // Deletion of last element
    void delet(){
        Node*temp=tail;
        Node * current = head;
        while(current->next != tail){
            current = current->next;
        }
        current->next = NULL; 

        // update tail
        tail = current;
        delete temp;
    }
//..........................................

     //delete at head
  void deletpos(){
			//aaaatttt hhheeeaaadddd  sorry!
				   
				   //reach the position
					Node * current = head;
            //difine new pointer store pos address
				 head=current->next;
				delete current;

}


//delete a node at any position pos
 void deletposion(int pos){

   Node*current=head;
  int i=1;
        while(i<pos-1){
      i++;
     current = current->next;
     }

       //difine new pointer store pos address
    Node * ptr;
   ptr=current-> next;
    current->next=ptr->next;

        
       
        // delete temp
         delete ptr;
    }

//.......................................................
    // Display
    void display(){
        Node * current = head;
        while(current!= NULL){


            cout << current->data << "->";
            current = current->next;
        }
        cout <<"NULL"<< endl;
    }

//.............................................
//count the numbers in linked list
int count(){
   Node * current = head;
   int i=0;
  while(current!= NULL){
   i++;
   current = current->next;
        }
cout<<"numbers in linked list are  "<<i<<endl<<endl<<endl;
return i;
}

//........................................
//delete last position
void deletelast(){

       
Node*temp=tail;
 Node * current = head;
 while(current->next->next!= NULL){
   
   current = current->next;}
  

current->next=NULL;
// update tail
        tail = current;
       delete temp;
}

//printing reverse linked list
void rev1(Node*current){
	
	if(current==NULL) return;
		
	else	rev1(current->next);
	cout<<current->data<<"->";	
	 
}

void rev2(){
				Node*currentt=head;
				
                   rev1(currentt);

		}
//..........................
//actually revrersing the linked list'

void revll(Node*current){

//per banaya
if (current==head)tail=current;
//sar banaya
if(current->next==NULL){
head=current;
return;
}
else revll(current->next);
current->next->next=current;


}





/*
if(current==head) tail=current;
if(current->next->next==NULL) head=current->next;     return; 

revll(current->next);
current->next->next=current;
if (current==tail) current->next=NULL;

}



void revll(Node*current){
if(current==NULL){
return;
}
else if(current->next==NULL){
head=current;
}
else{
revll(current->next);
current->next->next=current;
}
}

*/







void revlll(){
Node*temp=head;
revll(head);
temp->next=NULL;

}

//delete duplicate
void dup(){
Node*current=head;
//each element should cheak by each
int i=0;
for(Node*temp1=current;temp1!=NULL;temp1=temp1->next){

	for(Node*temp2=current->next;temp2!=NULL;temp2=temp2->next){

		if(temp1->data==temp2->data){i++; deletposion(i);} 


}}

}










};

int main(){
//making object of class
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.display();
cout<<"delete last element"<<endl;
    l1.delet();

    l1.display();
cout<<"insert 55 at position 3"<<endl;
    l1.insertAt(3,55);
    l1.display();
cout<<"inserting 3 at head position"<<endl;
   l1.insertAthead(3);
    l1.display();
cout<<"delete position 3"<<endl;
    l1.deletposion(3);
    l1.display();
   l1.count();

//making it shorted
l1.deletpos();

l1.deletposion(2);

    l1.insertAt(2,2);

l1.insertAt(4,4);

l1.insertAt(5,4);
l1.display();
l1.rev2();
cout<<endl;
l1.revlll();
l1.dup();
   l1.display();
     return 0;
}

