# include <iostream>
# include <string>
using namespace std;

class Classroom{
public:
  Classroom();
  void setSeats(int x);
  int getSeats();
  void setLocation(string y);
  string getLocation();

private:
  int seats;
  string location;

};
