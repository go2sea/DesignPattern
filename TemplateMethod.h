/*
	模板方法模式（Template-Method)
*/
#ifndef TEMPLATEMETHOD_H
#define TEMPLATEMETHOD_H

//抽象基类：定义算法骨架
class AbstractAlgorithm {
public:
	AbstractAlgorithm()	{};
	virtual ~AbstractAlgorithm() {};

	virtual void templateMethod();
protected:
	//具体步骤：由派生类实现
	virtual void step1() = 0;
	virtual void step2() = 0;
};
//派生类：算法具体步骤的实现
class ConcreteAlgorithm : public AbstractAlgorithm {
public:
	ConcreteAlgorithm() {};
	virtual ~ConcreteAlgorithm() {};
protected:
	//算法具体步骤的实现
	virtual void step1();
	virtual void step2();
};
#endif