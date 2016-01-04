#pragma once
#include <iostream>
#include "Adapter.h"
using namespace std;

void Adaptee::SpecialRequest() {
	printf("%s\n", "Answering SpecialRequest!");
}

Adapter::Adapter(Adaptee* pAdaptee) {
	m_pAdaptee = pAdaptee;
}

Adapter::~Adapter() {
	delete m_pAdaptee;
	m_pAdaptee = NULL;
}

void Adapter::Request() {
	printf("%s\n", "Pretending to answer Request...");
	m_pAdaptee->SpecialRequest();
}