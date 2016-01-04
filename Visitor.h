/*
	������ģʽ��Visitor��
*/

#ifndef VISITOR_H
#define VISITOR_H

class Visitor;

//Ԫ�ػ���
class Element {
public:
	Element() {};
	virtual ~Element() {};

	virtual void accept(Visitor* pVisitor) = 0;
};
//Ԫ��������
class ConcreteElementA : public Element {
public:
	ConcreteElementA() {};
	virtual ~ConcreteElementA() {};

	virtual void accept(Visitor* pVisitor);
};
class ConcreteElementB : public Element {
public:
	ConcreteElementB() {};
	virtual ~ConcreteElementB() {};

	virtual void accept(Visitor* pVisitor);
};


//�����߻���
class Visitor {
public:
	Visitor() {};
	virtual ~Visitor() {};

	//��ÿһ��Ԫ�������඼Ҫ��һ�����ʽӿ�
	virtual void visitConcreteElementA() = 0;
	virtual void visitConcreteElementB() = 0;
};
//������������
class ConcreteVisitor1 : public Visitor {
public:
	ConcreteVisitor1() {};
	virtual ~ConcreteVisitor1() {};

	virtual void visitConcreteElementA();
	virtual void visitConcreteElementB();
};
class ConcreteVisitor2 : public Visitor {
public:
	ConcreteVisitor2() {};
	virtual ~ConcreteVisitor2() {};

	virtual void visitConcreteElementA();
	virtual void visitConcreteElementB();
};


#endif


