/*
	��Ԫģʽ��Flyweight��
*/
#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include <list>
#include <string>

//��Ԫ����
class Flyweight {
public:
	Flyweight(std::string k) : key(k) {};
	virtual ~Flyweight() {}

	std::string key;//��Ԫ��id��־

	std::string getKey();
	virtual void operation() = 0;
};

//������
class ConcreteFlyweight : public Flyweight {
public:
	ConcreteFlyweight(std::string k) : Flyweight(k) {};
	virtual ~ConcreteFlyweight() {};

	virtual void operation() {};
};

//��Ԫ������
class FlyweightFactory {
public:
	FlyweightFactory() {};
	virtual ~FlyweightFactory();

	Flyweight* getFlyweight(std::string key);
private:
	std::list<Flyweight*> m_list;
};

#endif


