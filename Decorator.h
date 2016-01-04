/*
	װ����ģʽ��Decorator��
*/
#ifndef DECORATOR_H
#define DECORATOR_H

//�ֻ����ࣨcomponent��
class IphoneComponent {
public:
	IphoneComponent() {};
	virtual ~IphoneComponent() {};

	//operation()��������㴥��
	virtual void multiTouch() = 0;
};
//�����ࣺIphone6��ConcreteComponent��
class Iphone6 : public IphoneComponent {
public:
	Iphone6() {};
	virtual ~Iphone6() {};

	virtual void multiTouch();
};

//�����ࣺIphoneDecorator���ࣨDecorator��ά��һ��Component����ָ�룩
class IphoneDecorator : public IphoneComponent {
public:
	IphoneDecorator(IphoneComponent* pIphone) : m_pIphone(pIphone) {};
	virtual ~IphoneDecorator();
	//������multiTouch������˵�����ܸ�װ�������಻��ʵ���������ò���ͨ������
	//virtual void multiTouch();
protected:
	IphoneComponent* m_pIphone;
};
//�����ࣺIphone6s��ConcreteDecorator��ΪConcreteComponent���ְ��
class Iphone6s : public IphoneDecorator {
public:
	Iphone6s(IphoneComponent* pIphone) : IphoneDecorator(pIphone) {};
	virtual ~Iphone6s() {};

	virtual void multiTouch();
private:
	//AddedOperation():3DTouch
	void threeDTouch();
};


#endif


