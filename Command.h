/*
	ÃüÁîÄ£Ê½£¨Command£©
*/
#ifndef COMMAND_H
#define COMMAND_H

class Command {
public:
	Command() {};
	virtual ~Command() {};

	virtual void execute() = 0;
};

class Receiver {
public:
	void action();
};

class Invoker {
public:
	Invoker(Command* pCommand) : m_pCommand(pCommand) {};
	virtual ~Invoker();

	void invoke();
private:
	Command* m_pCommand;
};

class ConcreteCommand : public Command {
public:
	ConcreteCommand(Receiver* pReceiver) : m_pReceiver(pReceiver) {};
	virtual ~ConcreteCommand();

	void execute();
private:
	Receiver* m_pReceiver;
};

#endif


