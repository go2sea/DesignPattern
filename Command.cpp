#pragma once
#include <iostream>
#include "Command.h"
using namespace std;

void Receiver::action() {
	printf("%s\n", "Receiver Action!");
}

Invoker::~Invoker() {
	delete m_pCommand;
	m_pCommand = NULL;
}

void Invoker::invoke() {
	m_pCommand->execute();
}

ConcreteCommand::~ConcreteCommand() {
	delete m_pReceiver;
	m_pReceiver = NULL;
}

void ConcreteCommand::execute() {
	printf("%s\n", "ConcreteCommand::execute():m_pReceiver->action()");
	m_pReceiver->action();
}