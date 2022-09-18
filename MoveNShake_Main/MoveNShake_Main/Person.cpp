#include "Person.h"

Person::Person() {
	name = "";
	height = 0;
}
Person::Person(string newName, float newHeight) {
	setName(newName);
	setHeight(newHeight);
}
Person::Person(const Person& rhs) {
	name = rhs.name;
	height = rhs.height;
}
float Person::getHeight() const {
	return height;
}
string Person::getName() const {
	return name;
}
void Person::setName(string newName) {
	name = newName;
}
void Person::setHeight(float newHeight) {
	height = newHeight;
}