#include<iostream>
using namespace std;

// FIRST way of writing the node CLASS
/* class Node 
{
  public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data=data;
    next=NULL;
  }
}; */ 

//SECOND way of writing the node STRUCTURE
 struct Node
{
  int data;
  Node *next;
  Node *prev;
  Node(int data): data(data), next(NULL) {}
};

class LinkedList
{
  private:
  Node *header;
  Node *tail;
  int size;
  
  //default constructor
  public:
  LinkedList()
  {
    header=NULL;
    tail=NULL;
    size=0;
  }

  int getsize()
  {
    return size;
  }

  void append(int data)
  {
    Node *n=new Node(data);
    
    //case 1 if list is empty
    if(header==NULL)
    {
      header=n;
      tail=n;
    }

    //case 2 if list is non empty
    else
    {
      tail->next=n;
      n->prev=tail;
      tail=n;
    }

    //increment the size counter
    size++;
  }

  void prepend(int data)
  {
    //creating a new node
    Node *n=new Node(data);
    //case 1 if the list is empty
    if(header=NULL)
    {
      header=n;
      tail=n;
    }
    //case 2 if list is not empty
    else
    {
      header->prev=n;
      n->next=header;
      header=n;
    }

    //increment size counter
    size++;
  }

  void printing()
  {
    //create temp pointer that points to the first node
    Node *temp=header;
    cout<<"hidgvj"<<endl;

    //create a loop that stops when pointer is NULL
    while(temp!=NULL)
    {
      //print data
      cout<<temp->data<<" ";
      //advance pointer to next node
      temp=temp->next;
    }
    cout << endl;
   
  }

  void removefirst()
  {
     //Case 1: empty list
     //nothing to do

     //Case 2: non empty list
     if(header!=NULL)
     {
       Node *temp=header;
       header=header->next;
       delete temp;
       
       //decrement the size
       size--;
     }
  }

  void removelast()
  {
    //Case 1: Empty list
    // Nothing to do
    //Case 2: only 1 Node
    if(header->next==NULL)
    {
     removefirst();
    }

    //Case 3: More than 1 Node
    else if(header!=NULL)
    {
      Node *curr=header;
      Node *prev;
      while(curr ->next !=NULL)
      {
        prev=curr;
        curr=curr->next;
      }
      tail=prev;
      prev->next=NULL;           //check why did we write this
      delete curr;

      //decrement the size
      size--;
    }
  }

  void removeAt(int pos)
  {
    //Case 1: check if pos is valid
    if(pos>size || pos<1)
    return;          //but this is a void function

    //Case 2: if pos is the first node
    else if(pos==1)
    removefirst();

    //Case 3: if pos is the last node
    else if(pos==size)
    removelast();

    //Case 4: all other cases
    else if(header !=NULL)
    {
      Node *curr=header;
      Node *prev;
      for(int i=1;i<pos;i++)     //why not equal to as well?
      {
        prev=curr;
        curr=curr->next;
      }
      prev->next=curr->next;
      delete curr;

      //decrement the size counter
      size--;
    }
  }

  void InsertAt(int pos, int data)
  {
    //check if pos is valid
    if(pos>size || pos<1)
    return;

    //case 1 if insertion is at the starting
    else if(pos==1)
    {
      prepend(data);
    }

    //case 2 : if insertion is at the end
    else if(pos==size)
    {
      append(data);
    }

    //case 3 : for all other cases
    else
    {
      Node *n=new Node(data);
      Node *cur=header;
      for(int i=1;i<pos;i++)
      {
        cur=cur->next;
      }
      cur->prev->next=n;
      n->prev=cur->prev;
      n->next=cur;
      cur->prev=n;

      //increment the size counter
      size++;
    }
  }
   
  //linked list destructor
  void destr()
  {
    Node *next;
    while(header!=NULL)
    {
      next=header->next;
      delete header;
      header=next;
      size--;
    }
  }

  // to search an item in the list
  void search(int item)
  {
    Node *ans=header;
    int flag=-1;
    for(int i=1;i<=size;i++)
    {
      if(ans->data==item)
      {
        cout<<"The position of the item is "<< i << endl;
        flag=0;
        break;
      }
      ans=ans->next;
    }
    if(flag==-1)
    {
      cout<<"the item is not a part of the list"<<endl;
    }
  }

  //Sorting in ascending order the elements of the list
  void sort()
  {
    
    int i=size;
    while(i>1)
    {
      Node *curr=header->next;
      Node *prev=header;
      while(curr!=NULL)
      {
        if(curr->data<prev->data)
        swap(curr->data,prev->data);
        curr=curr->next;
        prev=prev->next;
      }
      i--;
    }
  }
};

//main method
int main()
{
  cout<<"byed"<<endl;
  LinkedList list;
  /*list.append(10);
  list.append(20);
  list.append(9);
  list.append(6);
  list.append(28);
  list.append(65);
  list.removelast();
  list.InsertAt(3,14);
  list.search(2);
  list.printing();
  list.sort(); */
  cout<<"hello"<<endl;
} 
















