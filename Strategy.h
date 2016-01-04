/*
	����ģʽ��Strategy��
*/
#ifndef STRATEGY_H
#define STRATEGY_H

//���Ի��ࣨStrategy��������
class Traverse {
public:
	Traverse() {};
	virtual ~Traverse() {};

	//���Խӿڣ�AlgorithmInterface��
	virtual void process() = 0;
};
//���������ࣨConcreteStrategy�����������
class DFS : public Traverse {
public:
	DFS() {};
	virtual ~DFS() {};

	virtual void process();
};


//�����ߣ�Context
class Context {
public:
	Context(Traverse* pTraverse) : m_pTraverse(pTraverse) {};
	virtual ~Context();

	virtual void process();
private:
	Traverse* m_pTraverse;
};
#endif