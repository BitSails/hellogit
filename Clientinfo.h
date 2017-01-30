#ifndef Client_H
#define Client_H
#include <iostream>
#include <string>

class Clientinfo
{
   public:
          void setname (std::string clientname);

          std::string getname ();
      
          void setage (int clientage);

          int getage ();

   private:
           int age = 0;
           std::string name;
};
#endif
