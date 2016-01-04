/*
	适配器模式（Adapter）
*/
#ifndef ADAPTER_H
#define ADAPTER_H

//用户所期待的接口
class Target {
public:
	Target() {};
	virtual ~Target() {};

	virtual void Request() = 0;
};

//需要适配的类（原有的）
class Adaptee {
public:
	Adaptee() {};
	virtual ~Adaptee() {};

	virtual void SpecialRequest();
};

//适配器
class Adapter : public Target {
public:
	Adapter(){};
	Adapter(Adaptee* pAdaptee);
	virtual ~Adapter();

	virtual void Request();
private:
	Adaptee* m_pAdaptee;
};

#endif
