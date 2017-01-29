#include <iostream>
#include <string>

class Classroom{
public:
  Classroom();
  void setSeats(int x);
  int getSeats();
  void setLocation(std::string y);
  std::string getLocation();

private:
  int seats;
  std::string location;

};
