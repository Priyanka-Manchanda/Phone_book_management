//define attributes of contact
#pragma once
#include<vector>
class Contact
{
  public:
  static int identity;
  //Contact();
  void set_id();
   int get_id();
  void set_name(std::string);
  std::string get_name();
  void set_email(std::string);
  std::string get_email();
  void set_phone_number(std::string);
  std::string get_phone_number();
  void set_address(std::string);
  std::string get_address();
  void set_department(std::string);
  std::string get_department();
  std::string mname;
  std::string memail;
  std::string mphone_number;
  std::string maddress;
  std::string mdepartment;
  int mid;

};

