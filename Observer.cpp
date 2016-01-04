#pragma once
#include <iostream>
#include "Observer.h"
using namespace std;

SSubject::~SSubject() {
	for (auto i : m_ObserverList)
		delete i;
	m_ObserverList.clear();
}

void SSubject::attach(Observer* pObserver) {
	//ºÏ≤È «∑Ò÷ÿ∏¥attach
	for (auto i:m_ObserverList)
		if (i == pObserver) {
			printf("%s\n", "Observer already exist!");
			return;
		}
	printf("%s\n", "Observer attached!");
	m_ObserverList.push_back(pObserver);
}

void SSubject::detach(Observer* pObserver) {
	//list<Observer*>::iterator it;
	//it = find(m_ObserverList.begin(), m_ObserverList.end(), pObserver);
	//if (it != m_ObserverList.end())
	//	m_ObserverList.erase(it);
	printf("%s\n", "Observer detached!");
	m_ObserverList.remove(pObserver);
}

STATE SSubject::getState() {
	return m_nState;
}

void SSubject::setState(STATE state) {
	m_nState = state;
}

void SSubject::notify() {
	for (auto i : m_ObserverList)
		i->update(this);
	printf("%s\n", "All observers notified!");
}

void ConcreteSSubject::attach(Observer* pObserver) {
	SSubject::attach(pObserver);
}

void ConcreteSSubject::detach(Observer* pObserver) {
	SSubject::detach(pObserver);
}

STATE ConcreteSSubject::getState() {
	return SSubject::getState();
}

void ConcreteSSubject::setState(STATE state) {
	printf("%s%d%s\n", "State is set to ", state, "!");
	SSubject::setState(state);
}

void ConcreteObserver::update(SSubject* subject) {
	STATE now = subject->getState();
	if (now == m_nObserverState) {
		printf("%s\n", "State is not changed!");
		return;
	}
	STATE old = m_nObserverState;
	m_nObserverState = now;
	printf("%s%d%s%d%s\n", "State updated from ", old, " to ", now, "!");
}
