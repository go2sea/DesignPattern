/*
	��������ģʽ��Factory Method��
*/
#ifndef	FACTORY_H
#define FACTORY_H

//��Ʒ����
class Product {
public:
	Product() {};
	virtual ~Product() {};
};
//������Ʒ����
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

//���������ӿڣ��д��麯����
class Factory {
public:
	Factory() {};
	virtual ~Factory() {};

	//���鷽��FactoryMethod
	virtual Product* createProduct() = 0;

};
//�����������ֱ��������ֲ�ͬ��Ʒ
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