//
//  member.hpp
//  swe-hw3-member
//
//  Created by LeeYeEun on 2022/06/01.
//

#ifndef Member_hpp
#define Member_hpp

#include <stdio.h>
#include <string>

class Member
{
public:
   Member();
   Member(std::string name, std::string ssn, std::string id, std::string password);

   void CheckMember();
   void CreateMember();
   void DeleteMember();
   void CheckLogInInfo();

   std::string GetID() { return id; }

private:
   std::string name;
   std::string ssn;
   std::string id;
   std::string password;
};


#endif /* member_hpp */
