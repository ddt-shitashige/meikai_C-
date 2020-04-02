#pragma once
#ifndef ___Class_String
#define ___Class_String

#include <iostream>

class String {
	int len;	// ������̒���
	char *s;	// ������̃|�C���^

public:
	/* �f�t�H���g�R���X�g���N�^ */
	String(const char *);

	/* �R�s�[�R���X�g���N�^ */
	String(const String &);

	/* �f�X�g���N�^ */
	~String();

	/* �����񒷂� */
	int length();

	/* +�̏��� */
	friend String operator+(const String &x, const String &y);

	/* =�̏��� */
	String &operator=(const String &x);

	/* ������ԋp�̏��� */
	char *GetString();
};

#endif