//define functions of contact
#include<iostream>
#include<vector>
#include "Contact.h"
using namespace std;

void Contact::set_name(string s)
{
  mname=s;
}

string Contact::get_name()
{
  return mname;
}

void Contact::set_email(string email)
{
  memail=email;
}

string Contact::get_email()
{
  return memail;
}

void Contact::set_address(string address)
{
  maddress=address;
}

string Contact::get_address()
{
  return maddress;
}

void Contact::set_phone_number( string phone)
{
  
  
    mphone_number=phone;
  
}

string Contact::get_phone_number()
{
  return mphone_number;
}

void  Contact::set_department(string department)
{
  mdepartment=department;
}

string Contact::get_department()
{
  return mdepartment;
}

int Contact::identity=20200000;

// Contact::Contact()
// {
//   identity++;

// }

void Contact::set_id()
{
  ++identity;
  mid=identity;
}

int Contact::get_id()
{
  return mid;
}