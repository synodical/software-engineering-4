//
//  member.cpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#include "Member.hpp"

Member::Member()
{
   id = 1;// For Test
}

Member::Member(std::string name, std::string ssn, std::string id, std::string password)
{
   this->name = name;
   this->ssn = ssn;
   this->id = id;
   this->password = password;
}
