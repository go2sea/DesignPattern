#pragma once
#include <iostream>
using namespace std;

class Singleton {
private:
	//���췽����˽�е�
	Singleton() {};
	/*
		��ֹ�࿽�����ำֵ��
		��ʽ�������࿽���Ĺ��캯����������'='������
		����ʵ��
		���þͱ���
	*/
public:
	Singleton(Singleton& s);
	Singleton& operator=(Singleton& s);
	static Singleton& getInstance() {
		//�ֲ���̬����
		static Singleton instance;
		return instance;
	}
	void test() {
		printf("%s\n", "Singleton test!");
	}
};