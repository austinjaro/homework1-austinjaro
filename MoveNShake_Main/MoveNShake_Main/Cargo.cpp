#include "Cargo.h"

Cargo::Cargo() {
	type = "";
	weight = 0;
}
Cargo::Cargo(string newType, float newWeight) {
	setType(newType);
	setWeight(newWeight);
}
Cargo::Cargo(const Cargo& rhs) {
	type = rhs.type;
	weight = rhs.weight;
}
float Cargo::getWeight() const {
	return weight;
}
string Cargo::getType() const {
	return type;
}
void Cargo::setType(string newType) {
	type = newType;
}
void Cargo::setWeight(float newWeight) {
	weight = newWeight;
}