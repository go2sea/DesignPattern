/*
	备忘录模式（Memento）
*/
#ifndef MEMENTO_H
#define MEMONTO_H

#include <string>

typedef std::string SSTATE;

//备忘录类
class Memento;

class Originator {
public:
	Originator() {};
	Originator(SSTATE state) : m_State(state) {};
	virtual ~Originator() {};

	SSTATE getState();
	void printState();
	void setState(SSTATE state);

	//创建备忘录
	Memento* createMemento();
	//更新备忘录状态
	void setMemento(Memento* pMemento);
	//从备忘录恢复状态
	void restoreState(Memento* pMemento);
private:
	SSTATE m_State;
};

//备忘录类
class Memento {
	friend class Originator;
private:
	Memento() {};
	Memento(SSTATE state) : m_MementoState(state) {};

	void setState(SSTATE state);
	SSTATE getState();
	SSTATE m_MementoState;
};

#endif
