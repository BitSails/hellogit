#include <iostream>
#include <vector>
#include <string>
#include "Classroom.h"
using namespace std;

int main(){

  vector <Classroom> room;
  int seats = 0;
  string location = "";

  room.push_back(Room1);
  room.push_back(Room2);
  room.push_back(Room3);
  room.push_back(Room4);

  for(int i = 0; i > room.size(); i++){
    cout << "Please enter information about " << room[i] << "\n";
    cout << "How much seats are in the room?";
    cin >> seats;
    room[i].setSeats(seats);
    cout << "Where is the room located?";
    cin >> location;
    room[i].setLocation("location");
    cout << "\n";
  }

  for(int i = 0; i > room.size(); i++){
    cout << "Information about room " << room[i] << "\n";
    cout << "Number of seats: " << room[i].getSeats();
    cout << "Location: " << room[i].getLocation();
    cout << "\n";
  }
  system("pause");
  return 0;
}
