#include "Clientinfo.h"

void Clientinfo::setname (std::string clientname)
{
   name = clientname;
}

std::string Clientinfo::getname ()
{
   return name;
}

void Clientinfo::setage (int clientage)
{
   age = clientage;
}

int Clientinfo::getage ()
{
   return age;
}
