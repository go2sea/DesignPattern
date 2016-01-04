/*
	������ģʽ��Iterator��
*/
#ifndef ITERATOR_H
#define ITERATOR_H

//ģ����������
typedef int DATA;

//����������
class Iterator;

//��������
class Aggregate {
public:
	Aggregate() {};
	virtual ~Aggregate() {};

	virtual Iterator* createIterator() = 0;
	virtual int getSize() = 0;
	virtual DATA getItem(int nIndex) = 0;
};
//����������
class ConcreteAggregate : public Aggregate {
public:
	ConcreteAggregate(int nSize);
	virtual ~ConcreteAggregate();

	virtual Iterator* createIterator();
	virtual int getSize();
	virtual DATA getItem(int nIndex);
private:
	int m_nSize;
	DATA* m_pData;
};

//����������
class Iterator {
public:
	Iterator() {};
	virtual ~Iterator() {};

	virtual void first() = 0;
	virtual void next() = 0;
	virtual bool isDone() = 0;
	virtual DATA currentItem() = 0;
};
//������������
class ConcreteIterator : public Iterator {
public:
	ConcreteIterator(Aggregate* pAggregate) : m_pAggregate(pAggregate), m_nCurrentIndex(0) {};
	virtual ~ConcreteIterator();

	virtual void first();
	virtual void next();
	virtual bool isDone();
	virtual DATA currentItem();
private:
	int m_nCurrentIndex;
	Aggregate* m_pAggregate;
};

#endif