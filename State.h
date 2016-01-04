/*
	״̬ģʽ��State��
*/
#ifndef STATE_H
#define STATE_H


//State����
class State {
public:
	State() {};
	virtual ~State() {};

	virtual void handle() = 0;
};
//ConcreteState�����ࣺ��
class Hungry : public State {
public:
	Hungry() {};
	virtual ~Hungry() {};
	
	virtual void handle();
};
//ConcreteState�����ࣺ��
class Thirsty : public State {
public:
	Thirsty() {};
	virtual ~Thirsty() {};

	virtual void handle();
};

class Man {
public:
	Man(State* pState) : m_pState(pState) {};
	virtual ~Man();

	virtual void handle();
	virtual void changeState(State* pState);
private:
	State* m_pState;

};

#endif