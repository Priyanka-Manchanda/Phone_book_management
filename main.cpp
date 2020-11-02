#include <iostream>
#include "List_contact.h"
#include "Contact.h"
using namespace std;

int main() 
{
  int n;
  char ch;
  List_contact lc;
  cout<<"Welcome to PhoneBook"<<endl;
  cout<<"Enter 'm' to check menu or press any key to exit"<<endl;
  cin>>ch;
  
  while(ch=='m')
  {
  cout<<"Choose your option"<<endl;
  cout<<"Press 1 to add contact"<<endl;
  cout<<"Press 2 to display contact list"<<endl;
  cin>>n;
  switch(n)
  {
    case 1:
    lc.add_contact();
    break;
    case 2:
    lc.display_contact();
    break;
    default:
    cout<<"Invalid entry"<<endl;

  }
  
cout<<"Enter 'm' to check menu or press any key to exit"<<endl;
  cin>>ch;

 } 
}