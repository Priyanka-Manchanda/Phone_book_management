#pragma once
#include<vector>
#include "Contact.h"
class List_contact:public Contact
{
  public:
  void add_contact();
  void display_contact();
  

  protected:
  std::vector<Contact> contact_info;
  

};