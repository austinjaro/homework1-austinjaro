#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <iostream>
#include <string.h>

using namespace std;

class Person {
private:
	string name;
	float height;

public:
	Person();
	Person(string, float);
	Person(const Person&);
	void setName(string);
	void setHeight(float);
	string getName() const;
	float getHeight() const;
};
#endif