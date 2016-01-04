#pragma once
#include <iostream>
#include "Proxy.h"
using namespace std;

void RealSubject::Request() {
	printf("%s\n", "RealSubject request!");
}

Proxy::~Proxy() {
	delete m_pSubject;
	m_pSubject = NULL;
}

void Proxy::Request() {
	if (!m_pSubject) {
		m_pSubject = new RealSubject();
		printf("%s\n", "m_pSubject is NULL, create it!");
	}
	m_pSubject->Request();
}