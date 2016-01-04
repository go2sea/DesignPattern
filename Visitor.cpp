#pragma once
#include <iostream>
#include "Visitor.h"
using namespace std;

void ConcreteElementA::accept(Visitor* pVisitor) {
	pVisitor->visitConcreteElementA();
}

void ConcreteElementB::accept(Visitor* pVisitor) {
	pVisitor->visitConcreteElementB();
}

void ConcreteVisitor1::visitConcreteElementA() {
	printf("%s\n", "ConcreteVisitor1 visiting ConcreteElementA!");
}

void ConcreteVisitor1::visitConcreteElementB() {
	printf("%s\n", "ConcreteVisitor1 visiting ConcreteElementB!");
}

void ConcreteVisitor2::visitConcreteElementA() {
	printf("%s\n", "ConcreteVisitor2 visiting ConcreteElementA!");
}

void ConcreteVisitor2::visitConcreteElementB() {
	printf("%s\n", "ConcreteVisitor2 visiting ConcreteElementB!");
}


