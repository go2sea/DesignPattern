/*
	组合模式（Composite）
*/
#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <list>
using namespace std;

//组件基类
class Component {
public:
	Component() {};
	virtual ~Component() {};

	//operation函数：降价
	virtual void sales() = 0;

	virtual void add(Component* pChild) {};		//添加组件
	virtual void remove(Component* pChild) {};	//删除组件
	virtual Component* getChild(int index) { return NULL; };//得到子组件指针
};
//派生类：Leaf（叶子组件的基类）
class Leaf : public Component {
public:
	Leaf() {};
	virtual ~Leaf() {};

	virtual void sales() = 0;
};
//派生类：Composite（非叶子组件的基类）
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
//两种叶子组件：SOC、Screen（手机组件）
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
//一种非叶子组件：SmartisanT1（手机整机）
class SmartisanT1 : public Composite {
public:
	SmartisanT1() {};
	virtual ~SmartisanT1() {};
};

#endif
