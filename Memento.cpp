#pragma once
#include <iostream>
#include "Memento.h"
using namespace std;


SSTATE Originator::getState() {
	return m_State;
}

void Originator::printState() {
	printf("%s\n", m_State.c_str());
}

void Originator::setState(SSTATE state) {
	m_State = state;
}

Memento* Originator::createMemento() {
	return new Memento(m_State);
}

void Originator::setMemento(Memento* pMemento) {
	pMemento->m_MementoState = m_State;
}

void Originator::restoreState(Memento* pMemento) {
	m_State = pMemento->m_MementoState;
}

void Memento::setState(SSTATE state) {
	m_MementoState = state;
}

SSTATE Memento::getState() {
	return m_MementoState;
}
