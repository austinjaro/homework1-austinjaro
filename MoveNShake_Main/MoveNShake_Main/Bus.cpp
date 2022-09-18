#include <iostream>
#include <string.h>
#include <vector>
#include "Bus.h"
#include "Transporter.h"
#include "Person.h"
#include "Cargo.h"

using namespace std;

template<class ItemType>
Bus<ItemType>::Bus() {
	string name = "";
	int height = 0;
}

std::vector<Person> persons;

	vector<Person> Getpersons() { return persons; }
	template<class ItemType>
	void Bus<ItemType>::Setpersons(ItemType& val) { persons = val; }

	template<class ItemType>
	void Bus<ItemType>::loadPerson(ItemType& person) {
		persons.push_back(person);
		sortPeople();
	}

	template<class ItemType>
	void Bus<ItemType>::unloadPerson(ItemType& person) {
		bool found = false;

		for (int i = 0; i < persons.size(); i++) {
			if (persons.at(i).getName() == person.getName()) {
				persons.erase(persons.begin() + i);
			}
		}
		if (found == true) {
			cout << "Person has got off the bus!" << endl;
			sortPeople();
		}

		else {
			cout << "Person is not on the bus!" << endl;
		}
	}

	template<class ItemType>
	void Bus<ItemType>::emptyAllPeople() {
		persons.clear();
	}

	template<class ItemType>
	int Bus<ItemType>::numberOfPeople() {
		return persons.size();
	}

	template<class ItemType>
	void Bus<ItemType>::sortPeople() {
		Person temp;

		for (int i = 0; i < persons.size(); i++) {
			for (int j = 0; j < persons.size() - i - 1; j++) {
				if (persons.at(j).getHeight() < persons.at(j + 1).getHeight()) {
					temp = persons.at(j);
					persons.at(j) = persons.at(j + 1);
					persons.at(j + 1) = temp;
				}
			}
		}
	}

	template<class ItemType>
	bool Bus<ItemType>::isEmpty() {
		if (persons.size() == 0) {
			return true;
		}

		else {
			return false;
		}
	}

	template<class ItemType>
	void Bus<ItemType>::loadItem(Cargo cargo) {}
	template<class ItemType>
	void Bus<ItemType>::unloadItem(Cargo cargo) {}
	template<class ItemType>
	void Bus<ItemType>::emptyAllItems() {}
	template<class ItemType>
	int Bus<ItemType>::numberOfItems() {}

