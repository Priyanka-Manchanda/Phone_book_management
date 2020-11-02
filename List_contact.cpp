//define functions
#include<iostream>
#include "List_contact.h"
#include "Contact.h"
#include<array>
#include<vector>
using namespace std;

void List_contact::add_contact()
{
  Contact c;
  string name,email,address,department;
  string phone_number;
  int id,len=0;
  //cout<<"Enter details of the contact"<<endl;
  cout<<"Enter the name of employee"<<endl;
  cin.ignore();
  getline(cin,name);
  set_name(name);
  c.mname=get_name();

  cout<<"Enter email address"<<endl;
  //cin.ignore();
  getline(cin,email);
  set_email(email);
  c.memail=get_email();

  
  cout<<"Enter address"<<endl;
  //cin.ignore();
  getline(cin,address);
  set_address(address);
  c.maddress=get_address();

  cout<<"Enter department name"<<endl;
  //cin.ignore();
  getline(cin,department);
  set_department(department);
  c.mdepartment=get_department();

 while(len!=10)
 {
  cout<<"Enter a 10 digit phone number"<<endl;
  getline(cin,phone_number);
  len=phone_number.length();
 }
  
  set_phone_number(phone_number);
  c.mphone_number=get_phone_number();
 
  set_id();
  c.mid=get_id();


  contact_info.push_back(c);

  
  
}


void List_contact::display_contact()
{
  if(contact_info.empty())
  {
    cout<<"No contacts available at the moment"<<endl;
  }
  else
  {
  
   for(auto i:contact_info)
   {
     cout<<"Identity Number: "<<i.get_id()<<endl;
     cout<<"Name: "<<i.get_name()<<endl;
     cout<<"Email: "<<i.get_email()<<endl;
     cout<<"Phone Number: "<<i.get_phone_number()<<endl;
     cout<<"Address: "<<i.get_address()<<endl;
     cout<<"Department: "<<i.get_department()<<endl;
     cout<<endl;
     cout<<endl;
   }
  }
}