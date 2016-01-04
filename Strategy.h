/*
	策略模式（Strategy）
*/
#ifndef STRATEGY_H
#define STRATEGY_H

//策略基类（Strategy）：遍历
class Traverse {
public:
	Traverse() {};
	virtual ~Traverse() {};

	//策略接口（AlgorithmInterface）
	virtual void process() = 0;
};
//策略派生类（ConcreteStrategy）：深度优先
class DFS : public Traverse {
public:
	DFS() {};
	virtual ~DFS() {};

	virtual void process();
};


//调用者：Context
class Context {
public:
	Context(Traverse* pTraverse) : m_pTraverse(pTraverse) {};
	virtual ~Context();

	virtual void process();
private:
	Traverse* m_pTraverse;
};
#endif