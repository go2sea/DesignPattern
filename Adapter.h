/*
	������ģʽ��Adapter��
*/
#ifndef ADAPTER_H
#define ADAPTER_H

//�û����ڴ��Ľӿ�
class Target {
public:
	Target() {};
	virtual ~Target() {};

	virtual void Request() = 0;
};

//��Ҫ������ࣨԭ�еģ�
class Adaptee {
public:
	Adaptee() {};
	virtual ~Adaptee() {};

	virtual void SpecialRequest();
};

//������
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
