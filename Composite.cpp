#pragma once
#include <iostream>
#include "Composite.h"
using namespace std;

void SOC::sales() {
	printf("%s\n", "SOC sales!");
}

void Screen::sales() {
	printf("%s\n", "Screen sales!");
}

void Composite::sales() {
	printf("%s\n", "For i in m_list, i->sales():");
	for (auto i = m_list.begin(); i != m_list.end(); i++)
		(*i)->sales();
}

void Composite::add(Component* child) {
	printf("%s\n", "Add child!");
	m_list.push_back(child);
}


void Composite::remove(Component* child) {
	printf("%s\n", "remove child:");
	list<Component*>::iterator s = find(m_list.begin(), m_list.end(), child);
	if (s != m_list.end())
		m_list.erase(s);
}

Component* Composite::getChild(int index) {
	if (index < 0 || index >= (int)m_list.size())
		return NULL;
	for (auto i = m_list.begin(); i != m_list.end(); i++) {
		if (index == 0)
			return *i;
		index--;
	}
}
