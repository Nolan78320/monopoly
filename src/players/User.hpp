#ifndef PLAYERS_USER_HPP
#define PLAYERS_USER_HPP

#include <string>

namespace players
{

   class User
   {
   public:
      User() = default;
   public:
      std::string printSomething() const;
   };
}

#endif
