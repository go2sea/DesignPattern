/*
ְ����ģʽ��ChainOfResponsibility)
*/
#ifndef CHAINOFRESPONSIBILITY_H
#define CHAINOFRESPONSIBILITY_H

//�����߻���
class Handler {
public:
	Handler(Handler* pSuccessor = NULL) : m_pHandler(pSuccessor) {};
	virtual ~Handler();

	virtual void handleRequest() = 0;
protected:
	Handler* m_pHandler;
};
//����������
class ConcreteHandler1 : public Handler {
public:
	ConcreteHandler1(Handler* pSuccessor = NULL) : Handler(pSuccessor) {};
	virtual ~ConcreteHandler1() {};

	virtual void handleRequest();
};
class ConcreteHandler2 : public Handler {
public:
	ConcreteHandler2(Handler* pSuccessor = NULL) : Handler(pSuccessor) {};
	virtual ~ConcreteHandler2() {};

	virtual void handleRequest();
};
#endif

