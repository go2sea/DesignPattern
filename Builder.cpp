#pragma once
#include <iostream>
#include "Builder.h"
using namespace std;

void SmartisanBuilder::buildSOC() {
	printf("%s\n", "A qinghuaiSOC is built!");
}

void SmartisanBuilder::buildScreen() {
	printf("%s\n", "A qinghuaiScreen is built");
}

void MiBuilder::buildSOC() {
	printf("%s\n", "A xingjiabiSOC is built!");
}

void MiBuilder::buildScreen() {
	printf("%s\n", "A xingjiabiScreen is built!");
}

Director::Director(Builder* bd) {
	builder = bd;
}

Director::~Director() {
	delete builder;
}

void Director::build() {
	builder->buildSOC();
	builder->buildScreen();
}
