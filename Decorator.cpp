#pragma once
#include <iostream>
#include "Decorator.h"
using namespace std;

void Iphone6::multiTouch() {
	printf("%s\n", "multiTouch!");
}

IphoneDecorator::~IphoneDecorator() {
	delete m_pIphone;
	m_pIphone = NULL;
}

void Iphone6s::threeDTouch() {
	printf("%s\n", "threeDTouch!");
}

void Iphone6s::multiTouch() {
	m_pIphone->multiTouch();
	threeDTouch();
}