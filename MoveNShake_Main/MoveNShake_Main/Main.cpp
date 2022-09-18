#include <iostream>
#include <string.h>
#include "Person.h"
#include "Train.h"
#include "Bus.h"
#include "Transporter.h"

using namespace std;

int main() {
	Train train;
	Bus bus;

	Cargo cargo("Heavy Weight", 60.4);
	Cargo cargo2("Light Weight", 30.4);

	Person person("Damon", 6.4);
	Person person2("Elena", 5.3);

	train.loadItem(cargo);
	train.loadItem(cargo2);

	bus.loadPerson(person);
	bus.loadPerson(person2);

	cout << "Number of cargo: " << train.numberOfItems() << endl;
	cout << "Number of people: " << bus.numberOfPeople() << endl;

	return 0;
}
