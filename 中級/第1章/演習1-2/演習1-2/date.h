#pragma once
#ifndef ___Class_Date
#define ___Class_Date

#include <string>
#include <iostream>

/* ���t�N���X */
class Date {
	int y;	// ����N
	int m;	// ��
	int d;	// ��
	static int dmax[];	// ���t�̍ő�
	static int days_of_year(int year);	// year�N�̓���
	static int days_of_month(int y, int m);	// y�Nm���̓���

public:
	/* year�N�͉[�N�� */
	static bool leap_year(int year) {
		return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	}
	Date();	// �f�t�H���g�R���X�g���N�^
	Date(int yy, int mm = 1, int dd = 1);	// �R���X�g���N�^

	bool leap_year() const { return leap_year(y); }	// �[�N���H


	int year()  const { return y; }	// �N��ԋp
	int month() const { return m; }	// ����ԋp
	int day()   const { return d; }	// ����ԋp
	void set_year(int yy) { (y = yy); }	// �N��yy�ɐݒ�
	void set_month(int mm) { (m = mm); }	// ����mm�ɐݒ�
	void set_day(int dd) { (d = dd); }	// ����dd�ɐݒ�
	void set(int yy, int mm, int dd);		// ���t��yy�Nmm��dd���ɐݒ�
	Date preceding_day() const;	// �O���̓��t��ԋp
	Date following_day() const;	// �����̓��t��ԋp
	int day_of_year() const;	// �N���̌o�ߓ�����ԋp
	int day_of_week() const;	// �j����ԋp
	operator long() const;	// 1970�N1��1������̓���


	Date& operator++();		// 1���i�߂�(�O�u����)
	Date operator++(int);	// 1���i�߂�(��u����)
	Date& operator--();		// 1���߂�(�O�u����)
	Date operator--(int);	// 1���߂�(��u����)

	Date& operator+=(int dn);	// dn���i�߂�(Date+=int)
	Date& operator-=(int dn);	// dn���߂�(Date-=int)
	Date operator+(int dn);		// dn��������߂�(Date+int)
	friend Date operator+(int dn, const Date& day);	// dn��������߂�(int+Date)

	Date operator-(int dn);		// dn���O�����߂�(Date-int)
	long operator-(const Date& day)const;	// ���t�̍������߂�(Date-Date)



	bool operator==(const Date& day)const;	// day�Ɠ�������
	bool operator!=(const Date& day)const;	// day�ƈႤ����
	bool operator<(const Date& day)const;	// day���O��
	bool operator<=(const Date& day)const;	// day���ȑO��
	bool operator>(const Date& day)const;	// day���ォ
	bool operator>=(const Date& day)const;	// day���ȍ~��

	std::string to_string() const;	// ������\����ԋp


};

std::ostream& operator<<(std::ostream& s, const Date& x);	// �}���q
std::istream& operator>>(std::istream& s, Date& x);	// ���o�q
#endif

