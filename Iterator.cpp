#pragma once
#include <iostream>
#include "Iterator.h"
using namespace std;

ConcreteAggregate::ConcreteAggregate(int nSize) : m_nSize(nSize), m_pData(NULL) {
	m_pData = new DATA[m_nSize];
	for (int i = 0; i < m_nSize; i++)
		m_pData[i] = i;
}

ConcreteAggregate::~ConcreteAggregate() {
	delete[] m_pData;
	m_pData = NULL;
}

Iterator* ConcreteAggregate::createIterator() {
	return new ConcreteIterator(this);
}

int ConcreteAggregate::getSize() {
	return m_nSize;
}

DATA ConcreteAggregate::getItem(int nIndex) {
	if (nIndex < m_nSize)
		return m_pData[nIndex];
	return -1;
}

ConcreteIterator::~ConcreteIterator() {
	delete m_pAggregate;
	m_pAggregate = NULL;
}

void ConcreteIterator::first() {
	m_nCurrentIndex = 0;
}

void ConcreteIterator::next() {
	if (!isDone())
		m_nCurrentIndex++;
}

bool ConcreteIterator::isDone() {
	return m_nCurrentIndex >= m_pAggregate->getSize();
}

DATA ConcreteIterator::currentItem() {
	return m_pAggregate->getItem(m_nCurrentIndex);
}