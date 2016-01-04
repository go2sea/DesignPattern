/*
	���󹤳�ģʽ��Abstract Factory)
*/
#ifndef ABSTRACT_FACTORY_H
#define Abstract_factory_H

//��������Ʒһ��SOC
class AbstractSOC {
public:
	AbstractSOC() {};
	virtual ~AbstractSOC() {};
};
//������Ʒ���黳SOC
class qinghuaiSOC : public AbstractSOC {
public:
	qinghuaiSOC();
	virtual ~qinghuaiSOC() {};
};
//������Ʒ���Լ۱�SOC
class xingjiabiSOC : public AbstractSOC {
public:
	xingjiabiSOC();
	virtual ~xingjiabiSOC() {};
};

//��������Ʒ����Screen
class AbstractScreen {
public:
	AbstractScreen() {};
	virtual ~AbstractScreen() {};
};
//������Ʒ���黳Screen
class qinghuaiScreen : public AbstractScreen {
public:
	qinghuaiScreen();
	virtual ~qinghuaiScreen() {};
};
//������Ʒ���Լ۱�Screen
class xingjiabiScreen : public AbstractScreen {
public:
	xingjiabiScreen();
	virtual ~xingjiabiScreen() {};
};


//���󹤳����ࣨ�ӿڣ��д��麯����
class AbstractFactory {
public:
	AbstractFactory() {};
	virtual ~AbstractFactory() {};
	virtual AbstractSOC* createSOC() = 0;
	virtual AbstractScreen* createScreen() = 0;
};
//�������������ӿƼ� Smartisan
class Smartisan : public AbstractFactory {
public:
	Smartisan();
	virtual ~Smartisan() {};
	virtual AbstractSOC* createSOC();
	virtual AbstractScreen* createScreen();
};
//����������С�׿Ƽ� Mi
class Mi : public AbstractFactory {
public:
	Mi();
	virtual ~Mi() {};
	virtual AbstractSOC* createSOC();
	virtual AbstractScreen* createScreen();
};


#endif