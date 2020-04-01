#include <ctime>
#include <sstream>
#include <iostream>
#include "Date.h"

using namespace std;

/* ���N�̊e���̓��� */
int Date::dmax[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

/* y�Nm���̓��������߂� */
int Date::days_of_month(int y, int m) {
	return dmax[m - 1] + (leap_year(y) && m == 2);
}

/* Date�̏o�f�t�H���g�R���X�g���N�^ */
Date::Date() {
	time_t current = time(NULL);	// ���݂̗�����擾
	struct tm *local = localtime(&current);	// �v�f�ʂ̎����ɕϊ�

	y = local->tm_year + 1900;	// �N�Ftm_year�͐���N-1900
	m = local->tm_mon + 1;	// ���Ftm_mon��0�`11
	d = local->tm_mday;	// ��
}

/* Date�̃R���X�g���N�^ */
Date::Date(int yy, int mm, int dd) {
	y = yy;	// �N
	m = mm;	// ��
	d = dd;	// ��
}

/* �N���̌o�ߓ�����ԋp */
int Date::day_of_year() const {
	int days = d;	// �N���̌o�ߓ���

	/* 1���`�̓����������� */
	for (int i = 1; i < m; i++)
		/* �������Z */
		days += days_of_month(y, i);
	return days;
}

/* �O���̓��t��ԋp */
Date Date::preceding_day() const {
	Date temp = *this;	// ����̓��t

	/* ���t��1���傫�������ꍇ�̏��� */
	if (temp.d > 1)
		/* ���t���f�N�������g */
		temp.d--;
	/* ���t��1�������ꍇ */
	else {
		/* 1���������ꍇ�̏��� */
		if (--temp.m < 1) {
			/* �N���f�N�������g */
			temp.y--;
			/* 12���Ɍ��� */
			temp.m = 12;
		}
		/* ���͍ő�ɂ��� */
		temp.d = days_of_month(temp.y, temp.m);
	}
	return temp;
}

/* �����̓��t��ԋp */
Date Date::following_day() const {
	Date temp = *this;	// ����̓��t

	/* �����ő�ȊO�������ꍇ�̏��� */
	if (temp.d < days_of_month(temp.y, temp.m))
		/* ���t���C���N�������g */
		temp.d++;
	/* ���t���ő傾�����ꍇ�̏��� */
	else {
		/* ���t��12���𒴂��Ă����ꍇ�̏��� */
		if (++temp.m > 12) {
			/* �N���C���N�������g */
			temp.y++;
			/* ����1�ɂ��� */
			temp.m = 1;
		}
		/* ���t��1�ɂ��� */
		temp.d = 1;
	}
	return temp;
}

/* ������\����ԋp */
string Date::to_string() const {
	ostringstream s;	// �����o�͂̃X�g���[��
	/* �����o�� */
	s << y << "�N" << m << "��" << d << "��";
	return s.str();
}

/* �j����ԋp */
int Date::day_of_week() const {
	int yy = y;	// �N
	int mm = m;	// ��
	/* ����1��2�̏ꍇ�̏��� */
	if (mm == 1 || mm == 2) {
		/* �N���f�N�������g */
		yy--;
		/* ����12�ǉ� */
		mm += 12;
	}
	return (yy + yy / 4 - yy / 100 + yy / 400 + (13 * mm + 8) / 5 + d) % 7;
}

/* �������Z�q== */
bool operator==(const Date &x, const Date &y) {
	/* ��������^�[�� */
	return x.y == y.y && x.m == y.m && x.d == y.d;
}

/* �������Z�q!= */
bool operator!=(const Date &x, const Date &y) {
	/* ��������^�[�� */
	return !(x == y);

}

/* �֌W���Z�q< */
bool operator<(const Date &x, const Date &y) {
	/* �N�������������ꍇ�̏��� */
	if (x.y == y.y) {
		/* �o�ߓ����Ŕ�r */
		return x.day_of_year() < y.day_of_year();
	}
	/* �N��������ꍇ�̏��� */
	else {
		/* �N�Ŕ�r */
		return x.y < y.y;
	}

}

/* �֌W���Z�q<= */
bool operator<=(const Date &x, const Date &y) {
	/* ���ʂ�ԋp */
	return x < y || x == y;
}

/* �֌W���Z�q> */
bool operator >(const Date &x, const Date &y) {
	/* ���ʂ�ԋp */
	return !(x <= y);
}

/* �֌W���Z�q>= */
bool operator>=(const Date &x, const Date &y) {
	/* ���ʂ�ԋp */
	return !(x < y);
}

/* ���Z���Z�q */
int operator-(const Date &x, const Date &y) {
	
	int sinseDate=x.day_of_year()-y.day_of_year();	// �o�ߓ���
	/* ���l�ł������ꍇ�̏��� */
	if (x.y > y.y) {
		/* �����v�Z */
		for (int i = y.y; i < x.y; i++) {
			/* 1�N�̓��������Z */
			sinseDate+=(365+Date::leap_year(i));
		}
	}
	/* ���l�ł������ꍇ�̏��� */
	if (x.y < y.y) {
		/* �����v�Z */
		for (int i = x.y; i < y.y; i++) {
			/* 1�N�̓��������Z */
			sinseDate -= (365 + Date::leap_year(i));
		}
	}
	return sinseDate;
}

/* �������Z�q�i�O�u�j */
Date &Date::operator++() {
	/* 1�����Z */
	*this = following_day();
	return *this;
}
/* �������Z�q�i��u�j */
Date  Date::operator++(int) {
	Date cacheDate = *this;	// �ꎞ�ۑ�����
	/* 1�����Z */
	*this = following_day();
	return cacheDate;
}

/* �������Z�q�i�O�u�j */
Date &Date::operator--() {
	/* 1�����Z */
	*this = preceding_day();
	return *this;
}


/* �������Z�q�i��u�j */
Date  Date::operator--(int) {
	Date cacheDate = *this;	// �ꎞ�ۑ�����
	/* 1�����Z */
	*this = preceding_day();
	return cacheDate;
}

/* ����������Z�q+= */
Date &Date::operator+=(int n) {
	/* ��Ɏw�肳�ꂽ�������C���N�������g���郋�[�v */
	for (int i = 0; i < n; i++){
		/* �C���N�������g */
		++ *this;
	}
	return *this;
}

/* ����������Z�q-= */
Date &Date::operator-=(int n) {
	/* ��Ɏw�肳�ꂽ�������f�N�������g���郋�[�v */
	for (int i = 0; i < n; i++){
		/* �f�N�������g */
		-- *this;
	}
	return *this;
}
/* ���Z���Z�q */
Date Date::operator+(int n) {
	Date cacheDate = *this;	// �ꎞ�ۑ�����

	/* ���Z���鐔�l�����[�v */
	for (int i = 0; i < n; i++)
		/* �C���N�������g */
		cacheDate++;
	return cacheDate;
}
/* ���Z���Z�q */
Date Date::operator-(int n) {
	Date cacheDate = *this;	// �ꎞ�ۑ�����

	/* ���Z���鐔�l�����[�v */
	for (int i = 0; i < n; i++)
		/* �f�N�������g */
		cacheDate--;
	return cacheDate;
}

/* �o�̓X�g���[��s��x��}�� */
ostream &operator<<(ostream &s, const Date &x) {
	return s << x.to_string();
}