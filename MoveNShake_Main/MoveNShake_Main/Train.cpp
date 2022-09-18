
#include <iostream>
#include <string.h>
#include <vector>
#include "Train.h"
#include "Transporter.h"
#include "Cargo.h"
#include "Person.h"

using namespace std;

template<class ItemType>
Train<ItemType>::Train() {
	string type = "";
	int weight = 0;
}
std::vector<Cargo> myvecCarg;

template<class ItemType>
Train<ItemType>::Train(string, int);

	vector<Cargo> Getcargo() { return myvecCarg; }

	void Setcargo(vector<Cargo> val) { myvecCarg = val; }

	template<class ItemType>
	int Train<ItemType>::numberOfItems()const {
		return myvecCarg.size();
	}

	template<class ItemType>
	void Train<ItemType>::loadItem(Cargo cargo) {
		myvecCarg.push_back(cargo);
	}

	template<class ItemType>
	void Train<ItemType>::unloadItem(Cargo cargo) {
		bool found = false;

		for (int i = 0; i < myvecCarg.size(); i++) {
			if (myvecCarg.at(i).getType() == cargo.getType()) {
				myvecCarg.erase(myvecCarg.begin() + i);
				found = true;
			}
		}

		if (found == true) {
			cout << "Cargo unloaded!" << endl;
		}

		else {
			cout << "Cargo not found!" << endl;
		}
	}

	template<class ItemType>
	bool Train<ItemType>::isEmpty() const {
		if (myvecCarg.size() == 0) {
			return true;
		}

		else {
			return false;
		}
	}

	template<class ItemType>
	void Train<ItemType>::emptyAllItems() {
		myvecCarg.clear();
	}

	template<class ItemType>
	void Train<ItemType>::loadPerson(ItemType& person) {}
	template<class ItemType>
	void Train<ItemType>::unloadPerson(ItemType& person) {}
	template<class ItemType>
	void Train<ItemType>::emptyAllPeople() {}
	template<class ItemType>
	int Train<ItemType>::numberOfPeople() const {}

	