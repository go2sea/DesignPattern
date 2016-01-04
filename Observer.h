/*
	观察者模式（Observer）
*/
#ifndef OBSERVER_H
#define OBSERVER_H

#include <list>

//模拟被观察者的状态
typedef int STATE;

//观察者基类
//Subject已被定义，用SSubject
class Observer;

//被观察者基类
class SSubject {
public:
	SSubject() {};
	virtual ~SSubject();

	//基类默认实现
	virtual void attach(Observer* pObserver);
	virtual void detach(Observer* pOvserver);
	virtual	STATE getState();
	virtual void setState(STATE state);//只set，不notify

	virtual void notify();
private:
	STATE m_nState;
	std::list<Observer*> m_ObserverList;
};
//被观察者派生类
class ConcreteSSubject : public SSubject {
public:
	ConcreteSSubject() {};
	virtual ~ConcreteSSubject() {};

	virtual void attach(Observer* pObserver);
	virtual void detach(Observer* pOvserver);
	virtual	STATE getState();
	virtual void setState(STATE state);
};

//观察者基类
class Observer {
public:
	Observer() : m_nObserverState(-1) {};
	virtual ~Observer() {};

	virtual void update(SSubject* subject) = 0;
protected:
	//上次观测到的状态
	STATE m_nObserverState;
};
//观察者派生类
class ConcreteObserver : public Observer {
public:
	ConcreteObserver() {};

	virtual void update(SSubject* subject);
};

#endif

