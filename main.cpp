#pragma once
#include <iostream>
#include "Factory.h"
#include "AbstractFactory.h"
#include "Prototype.h"
#include "Builder.h"
#include "Singleton.h"
#include "Adapter.h"
#include "Bridge.h"
#include "Decorator.h"
#include "Proxy.h"
#include "TemplateMethod.h"
#include "Composite.h"
#include "ChainOfResponsibility.h"
#include "Flyweight.h"
#include "Command.h"
#include "Observer.h"
#include "Strategy.h"
#include "State.h"
#include "Iterator.h"
#include "Memento.h"
#include "Visitor.h"
using namespace std;

void main() {
	//printf("%s\n\n", "This is an example of Factory-Method pattern:");
	//Factory* fa = new FactoryA();
	//Product* pa = fa->createProduct();
	//Factory* fb = new FactoryB();
	//Product* pb = fb->createProduct();

	//printf("%s\n\n", "This is an example of Abstract-Factory pattern:");
	////锤子科技生产
	//AbstractFactory* smartisan = new Smartisan();
	//AbstractSOC* sm_soc = smartisan->createSOC();
	//AbstractScreen* sm_screen = smartisan->createScreen();
	////小米科技生产
	//AbstractFactory* mi = new Mi();
	//AbstractSOC* mi_soc = mi->createSOC();
	//AbstractScreen* mi_screen = mi->createScreen();

	//printf("%s\n\n", "This is an example of Prototype pattern:");
	//Prototype* p1 = new ConcretePrototypeA();
	//Prototype* p1_copy = p1->clone();
	//Prototype* p2 = new ConcretePrototypeB();
	//Prototype* p2_copy = p2->clone();

	//printf("%s\n\n", "This is an example of Builder pattern:");
	////锤子手机build
	//Director* sm_dr = new Director(new SmartisanBuilder());
	//sm_dr->build();
	////小米手机build
	//Director* mi_dr = new Director(new MiBuilder());
	//mi_dr->build();

	//printf("%s\n\n", "This is an example of Singleton pattern::");
	//Singleton::getInstance().test();

	//printf("%s\n\n", "This is an example of Adapter pattern:");
	//Adaptee* a = new Adaptee();
	//Target* t = new Adapter(a);
	//t->Request();

	//printf("%s\n\n", "This is an example of Bridge pattern:");
	//Music* midian = new MiDian();
	//Music* xiushuijie = new XiuShuiJie();
	//Phone* t1 = new T1(midian);
	//Phone* t2 = new T2(xiushuijie);
	//t1->ring();
	//t2->ring();

	//printf("%s\n\n", "This is an example of Decorator pattern:");
	//IphoneComponent* ip6 = new Iphone6();
	//IphoneComponent* ip6s = new Iphone6s(ip6);
	//ip6s->multiTouch();

	//printf("%s\n\n", "This is an example of Proxy pattern:");
	//Subject* pro = new Proxy();
	//pro->Request();
	//pro->Request();

	//printf("%s\n\n", "This is an example of Composite Pattern:");
	//Composite* sm = new SmartisanT1();
	//Leaf* soc = new SOC();
	//Leaf* screen = new Screen();
	//sm->add(soc);
	//sm->add(screen);
	//sm->sales();
	//sm->remove(soc);
	//sm->sales();
	//sm->remove(sm->getChild(0));
	//sm->sales();

	//printf("%s\n\n", "This is am example of Template-Method pattern:");
	//ConcreteAlgorithm* ca = new ConcreteAlgorithm();
	//ca->templateMethod();

	//printf("%s\n\n", "This is an example of ChainOfResponsibility pattern:");
	//Handler* h1 = new ConcreteHandler1();
	////h1作为h2的successor
	//Handler* h2 = new ConcreteHandler2(h1);
	//h2->handleRequest();

	//printf("%s\n\n", "This is an example of Flyweight pattern:");
	//FlyweightFactory* ff = new FlyweightFactory();
	//ff->getFlyweight("ConcreteFlyweight1");
	//ff->getFlyweight("ConcreteFlyweight1");
	//ff->getFlyweight("ConcreteFlyweight2");
	//ff->getFlyweight("ConcreteFlyweight2");

	//printf("%s\n\n", "This is an example of Command pattern");
	//Receiver* receiver = new Receiver();
	//Command* command = new ConcreteCommand(receiver);
	//Invoker* invoker = new Invoker(command);
	//invoker->invoke();
	//delete invoker;

	//printf("%s\n\n", "This is an example of Observer pattern:");
	//Observer* ob1 = new ConcreteObserver();
	//Observer* ob2 = new ConcreteObserver();
	//SSubject* sub = new ConcreteSSubject();
	//sub->attach(ob1);
	//sub->attach(ob2);
	//sub->attach(ob1);
	//sub->attach(ob2);
	//sub->setState(1);
	//sub->notify();
	//sub->detach(ob1);
	//sub->setState(2);
	//sub->notify();
	//delete sub;
	//sub = NULL;
	//ob1 = NULL;
	//ob2 = NULL;

	//printf("%s\n\n", "This is an example of Strategy pattern:");
	//Traverse* dfs = new DFS();
	//Context* context = new Context(dfs);
	//context->process();
	//delete context;
	//context = NULL;
	//dfs = NULL;

	//printf("%s\n\n", "This is an example of State pattern:");
	//State* hungry = new Hungry();
	//State* thirsty = new Thirsty();
	//Man* man = new Man(hungry);
	//man->handle();
	//man->changeState(thirsty);
	//man->handle();
	//delete man;
	//man = NULL;
	//thirsty = NULL;
	//delete hungry;
	//hungry = NULL;

	//printf("%s\n\n", "This is an example of Iterator pattern:");
	//Aggregate* aggregate = new ConcreteAggregate(5);
	//Iterator* it = new ConcreteIterator(aggregate);
	//it->first();
	//for (; !it->isDone(); it->next())
	//	printf("%d\n", it->currentItem());
	//delete it;
	//it = NULL;

	//printf("%s\n\n", "This is an example of Memento pattern:");
	//Originator* pOriginator = new Originator("Old State!");
	//Memento* pMemento = pOriginator->createMemento();
	//pOriginator->printState();
	//pOriginator->setState("New State!");
	//pOriginator->printState();
	//pOriginator->restoreState(pMemento);
	//pOriginator->printState();
	//delete pOriginator;
	//pOriginator = NULL;
	//delete pMemento;//默认析构函数是public的
	//pMemento = NULL;

	printf("%s\n\n", "This is an example of Visitor pattern:");
	Visitor* pVisitor1 = new ConcreteVisitor1();
	Visitor* pVisitor2 = new ConcreteVisitor2();
	Element* pElementA = new ConcreteElementA();
	Element* pElementB = new ConcreteElementB();
	pElementA->accept(pVisitor1);
	pElementA->accept(pVisitor2);
	pElementB->accept(pVisitor1);
	pElementB->accept(pVisitor2);

	system("pause");
}
