//student id#: 412004841
//this is the definition of the Class called SportsCar


#ifndef SPORTSCAR_H
#define SPORTSCAR_H

class SportsCar
{
	private: // data members
		int numPassengers;
		double temperature;

	public:// member functions
		SportsCar(int=0, float=0.0);// constructor initializes variables to zero
		void set_numPassengers(int x);
		int get_numPassengers();
		void set_temperature(float y);
		float get_temperature();
		
};
#endif		

