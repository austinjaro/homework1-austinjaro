#ifndef TRAIN_H
#define TRAIN_H

#include <iostream>
#include "Transporter.h"
using namespace std;

template<class ItemType>
class Train : public Transporter<ItemType>
{

public:
	Train();
	Train(string, int);
	void loadItem(Cargo cargo);
	void unloadItem(Cargo cargo);
	void emptyAllItems();
	bool isEmpty() const;
	int numberOfItems() const;
	void loadPerson(ItemType& person);
	void unloadPerson(ItemType& person);
	void emptyAllPeople();
	int numberOfPeople() const;
	~Train() {};

};
#include "Train.cpp"
#endif