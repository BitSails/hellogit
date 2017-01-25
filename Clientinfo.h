#include <iostream>
#include <string>

class CLientinfo
{
   public:
          void setname (std::string clientname)
          {
            name = clientname;
          }

          std::string getname ()
          {
            return name;
          }
      
          void setage (int clientage)
          {
            age = clientage;
          }

          int getage ()
          {
            return age;
          }

   private:
           int age = 0;
           std::string name;
};

