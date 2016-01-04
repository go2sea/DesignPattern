/*
	���ģʽ��Composite��
*/
#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <list>
using namespace std;

//�������
class Component {
public:
	Component() {};
	virtual ~Component() {};

	//operation����������
	virtual void sales() = 0;

	virtual void add(Component* pChild) {};		//������
	virtual void remove(Component* pChild) {};	//ɾ�����
	virtual Component* getChild(int index) { return NULL; };//�õ������ָ��
};
//�����ࣺLeaf��Ҷ������Ļ��ࣩ
class Leaf : public Component {
public:
	Leaf() {};
	virtual ~Leaf() {};

	virtual void sales() = 0;
};
//�����ࣺComposite����Ҷ������Ļ��ࣩ
class Composite : public Component {
public:
	Composite() {};
	virtual ~Composite() {};

	virtual void sales();
	virtual void add(Component* pChild);
	virtual void remove(Component* pChild);
	virtual Component* getChild(int index);

private:
	list<Component*> m_list;
};
//����Ҷ�������SOC��Screen���ֻ������
class SOC : public Leaf {
public:
	SOC() {};
	virtual ~SOC() {};

	virtual void sales();
};
class Screen : public Leaf {
public:
	Screen() {};
	virtual ~Screen() {};

	virtual void sales();
};
//һ�ַ�Ҷ�������SmartisanT1���ֻ�������
class SmartisanT1 : public Composite {
public:
	SmartisanT1() {};
	virtual ~SmartisanT1() {};
};

#endif
