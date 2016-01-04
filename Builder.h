/*
	建造者模式（Builder）
*/
#ifndef BUILDER_H
#define BUILDER_H

//建造者基类（接口，有纯虚函数）
class Builder {
public:
	Builder() {};
	virtual ~Builder() {};

	virtual void buildSOC() = 0;
	virtual void buildScreen() = 0;
};
//派生类：锤子手机建造者 SmartisanBuilder
class SmartisanBuilder : public Builder {
public:
	SmartisanBuilder() {};
	virtual ~SmartisanBuilder() {};

	virtual void buildSOC();
	virtual void buildScreen();
};
//派生类：小米手机建造者 MiBuilder
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