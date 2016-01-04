#pragma once
#include <iostream>
#include "Prototype.h"
using namespace std;

ConcretePrototypeA::ConcretePrototypeA() {
	printf("%s\n", "Construction of ConcretePrototypeA!");
}

ConcretePrototypeA::ConcretePrototypeA(ConcretePrototypeA& pa) {
	value = pa.value;
	printf("%s\n", "Copy construction of ConcretePtototypeA!");
}

Prototype* ConcretePrototypeA::clone() {
	return new ConcretePrototypeA(*this);
}

ConcretePrototypeB::ConcretePrototypeB() {
	printf("%s\n", "Construction of ConcretePrototypeB!");
}


ConcretePrototypeB::ConcretePrototypeB(ConcretePrototypeB& pb) {
	value = pb.value;
	printf("%s\n", "Copy construction of ConcretePtototypeB!");
}

Prototype* ConcretePrototypeB::clone() {
	return new ConcretePrototypeB(*this);
}