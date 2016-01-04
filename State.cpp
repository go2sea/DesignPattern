#pragma once
#include <iostream>
#include "State.h"
using namespace std;

void Hungry::handle() {
	printf("%s\n", "Eat!");
}

void Thirsty::handle() {
	printf("%s\n", "Drink!");
}

Man::~Man() {
	delete m_pState;
	m_pState = NULL;
}

void Man::handle() {
	if (m_pState != NULL)
		m_pState->handle();
}

void Man::changeState(State* pState) {
	m_pState = pState;
}