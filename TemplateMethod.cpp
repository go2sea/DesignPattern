#pragma once
#include <iostream>
#include "TemplateMethod.h"
using namespace std;

void AbstractAlgorithm::templateMethod() {
	step1();
	step2();
}

void ConcreteAlgorithm::step1() {
	printf("%s\n", "Step1!");
}

void ConcreteAlgorithm::step2() {
	printf("%s\n", "Step2!");
}