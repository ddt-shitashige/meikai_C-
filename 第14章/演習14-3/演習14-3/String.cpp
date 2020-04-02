#include "String.h"


/* �R�s�[�R���X�g���N�^ */
String::String(const char *characterString) {

	/* ������̒�����0�ɐݒ� */
	len = 0;

	/* Null�������ԂŃ��[�v */
	for (int i = 0; characterString[i] != '\0'; i++) {

		/* ��������Z */
		len++;
	}

	/* ������|�C���^�̃������m�� */
	s = new char[len + 1];

	/* Null�������ԂŃ��[�v */
	for (int i = 0; characterString[i] != '\0'; i++) {

		/* ������i�[ */
		s[i] = characterString[i];
	}

	/* Null�����Z�b�g */
	s[len] = '\0';

}

/* �R�s�[�R���X�g���N�^ */
String::String(const String &characterString) {
	/* ���ȏ��������� */
	if (&characterString == this) {
		/* ��������1�ɐݒ� */
		len = 1;
		/* �������m�� */
		s = new char[1];
		/* Null�����i�[ */
		s[0] = '\0';
	}
	/* ���ʂ̏��������� */
	else {
		/* �������ݒ� */
		len = characterString.len;

		/* �������m�� */
		s = new char[len + 1];

		/* �����i�[ */
		for (int i = 0; i <= len; i++) {
			/* ������i�[ */
			s[i] = characterString.s[i];
		}
	}
}

/* �f�X�g���N�^ */
String::~String() {
	/* �������폜 */
	delete[] s;
}

/* �����񒷂� */
int String::length() {
	/* �����񒷂� */
	return len;
}

/* +�̏��� */
String operator+(const String &x, const String &y) {

	/* ��������쐬���A������ */
	String cacheString = cacheString;

	/* ��������v�Z */
	cacheString.len = x.len + y.len;

	/* �f�t�H���g�������폜 */
	delete[] cacheString.s;

	/* �������m�� */
	cacheString.s = new char[cacheString.len + 1];

	/* x�̕�����i�[ */
	for (int i = 0; i < x.len; i++) {
		/* ������i�[ */
		cacheString.s[i] = x.s[i];
	}

	/* y�̕�����i�[ */
	for (int i = 0; i < y.len; i++) {
		/* ������i�[ */
		cacheString.s[i + x.len] = y.s[i];
	}

	/* Null�����ǉ� */
	cacheString.s[x.len + y.len] = '\0';
	return cacheString;
}

/* =�̏��� */
String &String::operator=(const String &x) {

	/* ��������������ꍇ�̏��� */
	if (len != x.len) {
		/* ���̃������m�� */
		delete[] s;

		/* �������X�V */
		len = x.len;

		/* �������m�� */
		s = new char[len + 1];
	}

	/* ������R�s�[���[�v */
	for (int i = 0; i < len; i++) {
		/* ������R�s�[ */
		s[i] = x.s[i];
	}
	return *this;
}

/* ������ԋp�̏��� */
char *String::GetString() {
	return s;
}
