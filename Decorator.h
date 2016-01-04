/*
	装饰器模式（Decorator）
*/
#ifndef DECORATOR_H
#define DECORATOR_H

//手机基类（component）
class IphoneComponent {
public:
	IphoneComponent() {};
	virtual ~IphoneComponent() {};

	//operation()函数：多点触控
	virtual void multiTouch() = 0;
};
//派生类：Iphone6（ConcreteComponent）
class Iphone6 : public IphoneComponent {
public:
	Iphone6() {};
	virtual ~Iphone6() {};

	virtual void multiTouch();
};

//派生类：IphoneDecorator基类（Decorator，维护一个Component基类指针）
class IphoneDecorator : public IphoneComponent {
public:
	IphoneDecorator(IphoneComponent* pIphone) : m_pIphone(pIphone) {};
	virtual ~IphoneDecorator();
	//不重载multiTouch函数，说明不能该装饰器父类不能实例化，调用不能通过编译
	//virtual void multiTouch();
protected:
	IphoneComponent* m_pIphone;
};
//派生类：Iphone6s（ConcreteDecorator，为ConcreteComponent添加职责）
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


