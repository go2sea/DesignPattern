/*
	工厂方法模式（Factory Method）
*/
#ifndef	FACTORY_H
#define FACTORY_H

//产品父类
class Product {
public:
	Product() {};
	virtual ~Product() {};
};
//两个产品子类
class ProductA : public Product {
public:
	ProductA();
	virtual ~ProductA() {};
};
class ProductB : public Product {
public:
	ProductB();
	virtual ~ProductB() {};
};

//工厂方法接口（有纯虚函数）
class Factory {
public:
	Factory() {};
	virtual ~Factory() {};

	//纯虚方法FactoryMethod
	virtual Product* createProduct() = 0;

};
//两个工厂，分别生产两种不同产品
class FactoryA : public Factory {
public:
	FactoryA() {};
	virtual ~FactoryA() {};

	virtual Product* createProduct();
};
class FactoryB : public Factory {
public:
	FactoryB() {};
	virtual ~FactoryB() {};

	virtual Product* createProduct();
};

#endif