/*
	����¼ģʽ��Memento��
*/
#ifndef MEMENTO_H
#define MEMONTO_H

#include <string>

typedef std::string SSTATE;

//����¼��
class Memento;

class Originator {
public:
	Originator() {};
	Originator(SSTATE state) : m_State(state) {};
	virtual ~Originator() {};

	SSTATE getState();
	void printState();
	void setState(SSTATE state);

	//��������¼
	Memento* createMemento();
	//���±���¼״̬
	void setMemento(Memento* pMemento);
	//�ӱ���¼�ָ�״̬
	void restoreState(Memento* pMemento);
private:
	SSTATE m_State;
};

//����¼��
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
