/*
	原型模式（Prototype)
*/
#ifndef PROTOTYPE_H
#define PROTYTYPE_H

//原型基类（接口，有纯虚函数）
class Prototype {
public:
	Prototype() {};
	virtual ~Prototype() {};

	virtual Prototype* clone() = 0;
};
//原型派生类A 
class ConcretePrototypeA : public Prototype {
public:
	ConcretePrototypeA();
	ConcretePrototypeA(ConcretePrototypeA& pa);
	virtual ~ConcretePrototypeA() {};
	
	virtual Prototype* clone();
public:
	int value = 0;
};
//原型派生类B
class ConcretePrototypeB : public Prototype {
public:
	ConcretePrototypeB();
	ConcretePrototypeB(ConcretePrototypeB& pb);
	virtual ~ConcretePrototypeB() {};

	virtual Prototype* clone();
public:
	int value = 0;
};


#endif