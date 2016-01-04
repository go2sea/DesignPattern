/*
	享元模式（Flyweight）
*/
#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include <list>
#include <string>

//享元基类
class Flyweight {
public:
	Flyweight(std::string k) : key(k) {};
	virtual ~Flyweight() {}

	std::string key;//享元的id标志

	std::string getKey();
	virtual void operation() = 0;
};

//派生类
class ConcreteFlyweight : public Flyweight {
public:
	ConcreteFlyweight(std::string k) : Flyweight(k) {};
	virtual ~ConcreteFlyweight() {};

	virtual void operation() {};
};

//享元工厂：
class FlyweightFactory {
public:
	FlyweightFactory() {};
	virtual ~FlyweightFactory();

	Flyweight* getFlyweight(std::string key);
private:
	std::list<Flyweight*> m_list;
};

#endif


