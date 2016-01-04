/*
	�۲���ģʽ��Observer��
*/
#ifndef OBSERVER_H
#define OBSERVER_H

#include <list>

//ģ�ⱻ�۲��ߵ�״̬
typedef int STATE;

//�۲��߻���
//Subject�ѱ����壬��SSubject
class Observer;

//���۲��߻���
class SSubject {
public:
	SSubject() {};
	virtual ~SSubject();

	//����Ĭ��ʵ��
	virtual void attach(Observer* pObserver);
	virtual void detach(Observer* pOvserver);
	virtual	STATE getState();
	virtual void setState(STATE state);//ֻset����notify

	virtual void notify();
private:
	STATE m_nState;
	std::list<Observer*> m_ObserverList;
};
//���۲���������
class ConcreteSSubject : public SSubject {
public:
	ConcreteSSubject() {};
	virtual ~ConcreteSSubject() {};

	virtual void attach(Observer* pObserver);
	virtual void detach(Observer* pOvserver);
	virtual	STATE getState();
	virtual void setState(STATE state);
};

//�۲��߻���
class Observer {
public:
	Observer() : m_nObserverState(-1) {};
	virtual ~Observer() {};

	virtual void update(SSubject* subject) = 0;
protected:
	//�ϴι۲⵽��״̬
	STATE m_nObserverState;
};
//�۲���������
class ConcreteObserver : public Observer {
public:
	ConcreteObserver() {};

	virtual void update(SSubject* subject);
};

#endif

