# include <iostream>
# include <vector>
# include <string>
# include "Classroom.h"
using namespace std;

int main(){

  vector <Classroom> room;
  int s = 0;
  string l = "";

  room.push_back(Room1);
  room.push_back(Room2);
  room.push_back(Room3);
  room.push_back(Room4);

  for(int i = 0; i > room.size(); i++){
    cout << "Please enter information about " << room[i] << "\n";
    cout << "How much seats are in the room?";
    cin >> s;
    room[i].setSeats(s);
    cout << "Where is the room located?";
    cin >> l;
    room[i].setLocation("l");
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
