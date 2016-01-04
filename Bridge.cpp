#pragma once
#include <iostream>
#include "Bridge.h"
using namespace std;

Phone::~Phone() {
	delete m_pMusic;
	m_pMusic = NULL;
}

T1::T1(Music* pMusic) {
	m_pMusic = pMusic;
}

T1::~T1() {
	Phone::~Phone();
}

void T1::ring() {
	Phone::m_pMusic->ring();
}

T2::T2(Music* pMusic) {
	m_pMusic = pMusic;
}

T2::~T2() {
	Phone::~Phone();
}

void T2::ring() {
	Phone::m_pMusic->ring();
}

void MiDian::ring() {
	printf("%s\n", "This is MiDian ringing!");
}

void XiuShuiJie::ring() {
	printf("%s\n", "This is XiuShuiJie ringing!");
}