#pragma once
#include <iostream>
#include "AbstractFactory.h"
using namespace std;

Smartisan::Smartisan() {
	printf("%s\n", "A Smartisan_Factory is established!");
}

Mi::Mi() {
	printf("%s\n", "A Mi_Factory is established!");
}

qinghuaiSOC::qinghuaiSOC() {
	printf("%s\n", "A qinghuaiSOC is created!");
}

xingjiabiSOC::xingjiabiSOC() {
	printf("%s\n", "A xingjiabiSOC is created!");
}

qinghuaiScreen::qinghuaiScreen() {
	printf("%s\n", "A qinghuaiScreen is created!");
}

xingjiabiScreen::xingjiabiScreen() {
	printf("%s\n", "A xingjiabiScreen is created!");
}

AbstractSOC* Smartisan::createSOC() {
	return new qinghuaiSOC();
}

AbstractScreen* Smartisan::createScreen() {
	return new qinghuaiScreen();
}

AbstractSOC* Mi::createSOC() {
	return new xingjiabiSOC();
}

AbstractScreen* Mi::createScreen() {
	return new xingjiabiScreen();
}
