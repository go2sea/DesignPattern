#pragma once
#include <iostream>
#include "Flyweight.h"
using namespace std;

string Flyweight::getKey() {
	return key;
}

FlyweightFactory::~FlyweightFactory() {
	for (auto i : m_list)
		delete i;
	m_list.clear();
}

Flyweight* FlyweightFactory::getFlyweight(string key) {
	for (auto i : m_list)
		if (i->getKey() == key) {
			printf("%s%s%s\n", "Flyweight ", key.c_str(), " already exists!");
			return i;
		}
	Flyweight* temp = new ConcreteFlyweight(key);
	m_list.push_back(temp);
	return temp;
}