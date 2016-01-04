#pragma once
#include <iostream>
#include "ChainOfResponsibility.h"
using namespace std;

Handler::~Handler() {
	delete m_pHandler;
	m_pHandler = NULL;
}

void ConcreteHandler1::handleRequest() {
	if (m_pHandler != NULL)
		m_pHandler->handleRequest();
	else
		printf("%s\n", "HandleRequest by ConcreteHandler1!");
}

void ConcreteHandler2::handleRequest() {
	if (m_pHandler != NULL)
		m_pHandler->handleRequest();
	else
		printf("%s\n", "HandleRequest by ConcreteHandler2!");
}