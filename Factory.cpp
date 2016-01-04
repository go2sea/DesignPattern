#pragma once
#include <iostream>
#include "Factory.h"
using namespace std;

ProductA::ProductA() {
	printf("%s\n", "A productA is created!");
}

ProductB::ProductB() {
	printf("%s\n", "A productB is created!");
}

Product* FactoryA::createProduct() {
	return new ProductA();
}

Product* FactoryB::createProduct() {
	return new ProductB();
}