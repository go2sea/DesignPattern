#pragma once
#include <iostream>
#include "Strategy.h"
using namespace std;

void DFS::process() {
	printf("%s\n", "DFS proccessing!");
}

Context::~Context() {
	delete m_pTraverse;
	m_pTraverse = NULL;
}

void Context::process() {
	if (m_pTraverse)
		m_pTraverse->process();
}