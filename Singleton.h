#pragma once
#include <iostream>
using namespace std;

class Singleton {
private:
	//构造方法是私有的
	Singleton() {};
	/*
		防止类拷贝和类赋值：
		显式的声明类拷贝的构造函数，和重载'='操作符
		但不实现
		调用就报错
	*/
public:
	Singleton(Singleton& s);
	Singleton& operator=(Singleton& s);
	static Singleton& getInstance() {
		//局部静态变量
		static Singleton instance;
		return instance;
	}
	void test() {
		printf("%s\n", "Singleton test!");
	}
};