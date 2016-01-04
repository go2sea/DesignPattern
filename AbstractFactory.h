/*
	抽象工厂模式（Abstract Factory)
*/
#ifndef ABSTRACT_FACTORY_H
#define Abstract_factory_H

//抽象基类产品一：SOC
class AbstractSOC {
public:
	AbstractSOC() {};
	virtual ~AbstractSOC() {};
};
//派生产品：情怀SOC
class qinghuaiSOC : public AbstractSOC {
public:
	qinghuaiSOC();
	virtual ~qinghuaiSOC() {};
};
//派生产品：性价比SOC
class xingjiabiSOC : public AbstractSOC {
public:
	xingjiabiSOC();
	virtual ~xingjiabiSOC() {};
};

//抽象基类产品二：Screen
class AbstractScreen {
public:
	AbstractScreen() {};
	virtual ~AbstractScreen() {};
};
//派生产品：情怀Screen
class qinghuaiScreen : public AbstractScreen {
public:
	qinghuaiScreen();
	virtual ~qinghuaiScreen() {};
};
//派生产品：性价比Screen
class xingjiabiScreen : public AbstractScreen {
public:
	xingjiabiScreen();
	virtual ~xingjiabiScreen() {};
};


//抽象工厂基类（接口，有纯虚函数）
class AbstractFactory {
public:
	AbstractFactory() {};
	virtual ~AbstractFactory() {};
	virtual AbstractSOC* createSOC() = 0;
	virtual AbstractScreen* createScreen() = 0;
};
//派生工厂：锤子科技 Smartisan
class Smartisan : public AbstractFactory {
public:
	Smartisan();
	virtual ~Smartisan() {};
	virtual AbstractSOC* createSOC();
	virtual AbstractScreen* createScreen();
};
//派生工厂：小米科技 Mi
class Mi : public AbstractFactory {
public:
	Mi();
	virtual ~Mi() {};
	virtual AbstractSOC* createSOC();
	virtual AbstractScreen* createScreen();
};


#endif