#ifndef BUS_H
#define BUS_H

#include <iostream>
#include "Transporter.h"
using namespace std;

template<class ItemType>
class Bus : public Transporter<ItemType>
{
public:
	Bus();
	Bus(string, int);

	void Setpersons(ItemType&);

	void loadPerson(ItemType& person);

	void unloadPerson(ItemType& person);

	void emptyAllPeople();

	int numberOfPeople();

	void sortPeople();

	bool isEmpty();

	void loadItem(Cargo cargo);
	void unloadItem(Cargo cargo);
	void emptyAllItems();
	int numberOfItems();

};
#include "Bus.cpp"

#endif // BUS_H