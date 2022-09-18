#ifndef CARGO_H_INCLUDED
#define CARGO_H_INCLUDED

#include <iostream>
#include <string.h>

using namespace std;

class Cargo {
private:
	string type;
	float weight;

public:
	Cargo();
	Cargo(string, float);
	Cargo(const Cargo&);
	void setType(string);
	void setWeight(float);
	float getWeight() const;
	string getType() const;
};

#endif