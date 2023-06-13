#include <iostream>
using namespace std;
#include "node.h"

typedef int integer;

int i;

typedef node* nodePtr;
 int main() {
   int x=5;
//1. delete a,b,c
//2. connect them the same way
//using new
//3. change to loop
   
node *head,*temp;
head=new node;
temp=head;
   int i;
   for(i=0;i<3;i++){
     temp->next=new node;
     temp->value=x+2*i;
     temp=temp->next;
   }
temp=head;
  for(i=0;i<3;i++){
cout<<temp->value<<endl;
temp=temp->next;
}
temp=head;
   for(i=0;i<3;i++){
head=head->next;
delete temp;
temp=head;
}

   
   
   
   
   
   
   
   /*a.value = x;
a.next=&b;
head=&a;
b.value=head->value+3;
  node* temp=head;
cout <<temp->value;
cout <<temp->next->value<<endl;
   //connect b to c //temp ->a ->b ->c
   //1. using b  b.next=&c;
   //2. using a  a.next->next=&c;  
   //3. using temp 
   temp->next->next=&c;
  c.value =11;
  cout<<temp->next->next->value<<endl;
// print in a loop using temp to print everything out
   int i;
for(i=0;i<3;i++){
cout<<temp->value<<endl;
temp=temp->next;
}

  cout<<temp->value<<endl;
  temp=temp->next;*/
  
   
  //how to move temp to the next one?


   
  
   
}