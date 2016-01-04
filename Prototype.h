/*
	ԭ��ģʽ��Prototype)
*/
#ifndef PROTOTYPE_H
#define PROTYTYPE_H

//ԭ�ͻ��ࣨ�ӿڣ��д��麯����
class Prototype {
public:
	Prototype() {};
	virtual ~Prototype() {};

	virtual Prototype* clone() = 0;
};
//ԭ��������A 
class ConcretePrototypeA : public Prototype {
public:
	ConcretePrototypeA();
	ConcretePrototypeA(ConcretePrototypeA& pa);
	virtual ~ConcretePrototypeA() {};
	
	virtual Prototype* clone();
public:
	int value = 0;
};
//ԭ��������B
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