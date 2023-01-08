#include "birds.h"

int main() {

	birds Bird(39, "gray", 12);
	parrots par(70, "white", 9, "bent", "feathered");
	budgerigar budge(120, "yellow", 12, "bent", "blue", 40, 18);
	
	std::cout << "Unknown bird speed = " << Bird.get_flight_speed() << '\n';
	std::cout << "Unknown parrot speed = " << par.get_flight_speed() << '\n';
	std::cout << "Budgerigar speed = " << budge.get_flight_speed() << '\n';


}