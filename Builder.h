/*
	������ģʽ��Builder��
*/
#ifndef BUILDER_H
#define BUILDER_H

//�����߻��ࣨ�ӿڣ��д��麯����
class Builder {
public:
	Builder() {};
	virtual ~Builder() {};

	virtual void buildSOC() = 0;
	virtual void buildScreen() = 0;
};
//�����ࣺ�����ֻ������� SmartisanBuilder
class SmartisanBuilder : public Builder {
public:
	SmartisanBuilder() {};
	virtual ~SmartisanBuilder() {};

	virtual void buildSOC();
	virtual void buildScreen();
};
//�����ࣺС���ֻ������� MiBuilder
class MiBuilder : public Builder {
public:
	MiBuilder() {};
	virtual ~MiBuilder() {};

	virtual void buildSOC();
	virtual void buildScreen();
};

class Director {
public:
	Director(Builder* bd);
	virtual ~Director();

	void build();
private:
	Builder* builder;
};
#endif