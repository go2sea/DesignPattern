/*
	ģ�巽��ģʽ��Template-Method)
*/
#ifndef TEMPLATEMETHOD_H
#define TEMPLATEMETHOD_H

//������ࣺ�����㷨�Ǽ�
class AbstractAlgorithm {
public:
	AbstractAlgorithm()	{};
	virtual ~AbstractAlgorithm() {};

	virtual void templateMethod();
protected:
	//���岽�裺��������ʵ��
	virtual void step1() = 0;
	virtual void step2() = 0;
};
//�����ࣺ�㷨���岽���ʵ��
class ConcreteAlgorithm : public AbstractAlgorithm {
public:
	ConcreteAlgorithm() {};
	virtual ~ConcreteAlgorithm() {};
protected:
	//�㷨���岽���ʵ��
	virtual void step1();
	virtual void step2();
};
#endif