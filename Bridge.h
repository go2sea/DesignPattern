/*
	桥梁模式（Bridge）
	区分：Builder封装了不同的生成组成部分的方式，而Bridge封装了不同的实现方式
*/
#ifndef BRIDGE_H
#define BRIDGE_H

class Music;

//手机基类（接口，有纯虚函数）
class Phone {
public:
	Phone() {};
	virtual ~Phone();

	virtual void ring() = 0;
protected:
	Music* m_pMusic;
};
//派生类：锤子手机T1
class T1 : public Phone {
public:
	T1(Music* pMusic);
	virtual ~T1();

	virtual void ring();
};
//派生类：小米手机Mi
class T2 : public Phone {
public:
	T2(Music* pMusic);
	virtual ~T2();
	
	virtual void ring();
};

//音乐基类
class Music {
public:
	virtual void ring() = 0;
};
//派生类：《米店》
class MiDian : public Music {
public:
	virtual void ring();
};
//派生类：《秀水街》
class XiuShuiJie : public Music {
public:
	virtual void ring();
};
#endif