/*
	访问者模式（Visitor）
*/

#ifndef VISITOR_H
#define VISITOR_H

class Visitor;

//元素基类
class Element {
public:
	Element() {};
	virtual ~Element() {};

	virtual void accept(Visitor* pVisitor) = 0;
};
//元素派生类
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


//访问者基类
class Visitor {
public:
	Visitor() {};
	virtual ~Visitor() {};

	//对每一个元素派生类都要有一个访问接口
	virtual void visitConcreteElementA() = 0;
	virtual void visitConcreteElementB() = 0;
};
//访问者派生类
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


