/*
	����ģʽ��Bridge��
	���֣�Builder��װ�˲�ͬ��������ɲ��ֵķ�ʽ����Bridge��װ�˲�ͬ��ʵ�ַ�ʽ
*/
#ifndef BRIDGE_H
#define BRIDGE_H

class Music;

//�ֻ����ࣨ�ӿڣ��д��麯����
class Phone {
public:
	Phone() {};
	virtual ~Phone();

	virtual void ring() = 0;
protected:
	Music* m_pMusic;
};
//�����ࣺ�����ֻ�T1
class T1 : public Phone {
public:
	T1(Music* pMusic);
	virtual ~T1();

	virtual void ring();
};
//�����ࣺС���ֻ�Mi
class T2 : public Phone {
public:
	T2(Music* pMusic);
	virtual ~T2();
	
	virtual void ring();
};

//���ֻ���
class Music {
public:
	virtual void ring() = 0;
};
//�����ࣺ���׵꡷
class MiDian : public Music {
public:
	virtual void ring();
};
//�����ࣺ����ˮ�֡�
class XiuShuiJie : public Music {
public:
	virtual void ring();
};
#endif