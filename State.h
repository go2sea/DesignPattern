/*
	状态模式（State）
*/
#ifndef STATE_H
#define STATE_H


//State基类
class State {
public:
	State() {};
	virtual ~State() {};

	virtual void handle() = 0;
};
//ConcreteState派生类：饿
class Hungry : public State {
public:
	Hungry() {};
	virtual ~Hungry() {};
	
	virtual void handle();
};
//ConcreteState派生类：渴
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