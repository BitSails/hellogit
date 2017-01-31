# include <iostream>
# include <vector>
# include <string>
# include "Classroom.h"
using namespace std;

int main() {

	vector <Classroom> room;

	room.push_back({50 , "Lesile Robinson Building"});
	room.push_back({ 40, "Roy Marshall Teaching Complex" });
	room.push_back({ 45, "Roy Marshall Teaching Complex" });
	room.push_back({ 60, "Clico Building" });

	for (unsigned int i = 0; i < room.size(); i++) {
		cout << "Information about Room " << i + 1 << "\n";
		cout << "Number of seats: " << room[i].getSeats() << "\n";
		cout << "Location: " << room[i].getLocation();
		cout << "\n";
	}
	system("pause");
	return 0;
}
