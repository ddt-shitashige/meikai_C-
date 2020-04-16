#include <ctime>
#include <sstream>
#include <iostream>
#include "Date.h"

using namespace std;

/* ���N�̊e���̓��� */
int Date::dmax[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


/* year�N�̓��� */
int Date::days_of_year(int year) {
	return 365 + leap_year(year);
}

/* y�Nm���̓��������߂� */
int Date::days_of_month(int year, int month) {
	return dmax[month - 1] + (month == 2 && leap_year(year));
}

/* Date�̃f�t�H���g�R���X�g���N�^ */
Date::Date() {
	time_t current = time(NULL);	// ���݂̗�����擾
	struct tm* local = localtime(&current);	// �v�f�ʂ̎����ɕϊ�

	y = local->tm_year + 1900;	// �N�Ftm_year�͐���N-1900
	m = local->tm_mon + 1;	// ���Ftm_mon��0�`11
	d = local->tm_mday;	// ��
}

/* Date�̃R���X�g���N�^ */
Date::Date(int yy, int mm, int dd) {

	/* �N�ݒ� */
	set_year(yy);
	/* ����12��菬���� */
	if (mm <= 12) {
		/* ���ݒ� */
		set_month(mm);
	}
	else {
		/* ���ݒ� */
		set_month(12);
	}

	/* �����ő�l��菬���� */
	if (days_of_month(yy, mm) > dd) {
		/* �������i�[ */
		set_day(dd);
	}
	else {
		/* �ő�������i�[ */
		set_day(days_of_month(yy, mm));
	}
}

/* �N������ݒ� */
void Date::set(int yy, int mm, int dd) {
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

/* 1970�N1��1������̌o�ߓ�����ԋp */
Date::operator long() const {
	return *this - Date(1970, 1, 1);
}


/* �������Z�q�i�O�u�j */
Date& Date::operator++() {

	/* �������O�ł���� */
	if (d < days_of_month(y, m)) {
		/* �C���N�������g */
		d++;
	}
	else {
		/* 12���𒴂����� */
		if (++m > 12) {
			/* �N���C���N�������g */
			y++;
		}
		/* 1���ɐݒ� */
		d = 1;
	}
	return *this;
}

/* �������Z�q�i��u�j */
Date  Date::operator++(int) {
	Date temp(*this);	// �C���N�������g�̑O�̒l���R�s�[
	/* �C���N�������g */
	++(*this);
	return temp;
}


/* �������Z�q�i�O�u�j */
Date& Date::operator--() {

	/* �����߂łȂ���� */
	if (d > 1) {
		/* �f�N�������g */
		d--;
	}
	else {
		/* 1���𒴂����� */
		if (--m <= 1) {
			/* �N���f�N�������g */
			y--;
		}
		/* �O���̌����ɐݒ� */
		d = days_of_month(y, m);
	}
	return *this;
}

/* �������Z�q�i��u�j */
Date  Date::operator--(int) {
	Date temp(*this);	// �C���N�������g�̑O�̒l���R�s�[
	/* �f�N�������g */
	--(*this);
	return temp;
}


/* ����������Z�q+= */
Date& Date::operator+=(int dn) {
	/* dn�����ł������ꍇ�̏��� */
	if (dn < 0) {
		/* ���Z�q-=�ɏ������ς˂� */
		return *this -= -dn;
	}
	/* ����dn�����Z */
	d += dn;

	/* �������̓������Ɏ��܂�悤�ɒ��� */
	while (d > days_of_month(y, m)) {
		/* ���Z */
		d -= days_of_month(y, m);
		/* ����12�𒴂����ꍇ�̏��� */
		if (++m > 12) {
			/* �C���N�������g */
			y++;
			/* ����1�ɂ��� */
			m = 1;
		}
	}
	return *this;
}

/* ����������Z�q-= */
Date& Date::operator-=(int dn) {
	/* dn�����ł������ꍇ�̏��� */
	if (dn < 0) {
		/* ���Z�q+=�ɏ������ς˂� */
		return *this += -dn;
	}
	/* ����dn�����Z */
	d -= dn;

	/* �������l�ɂȂ�悤�ɒ��� */
	while (d < 1) {
		/* ����1�ȉ��������ꍇ�̏��� */
		if (--m < 1) {
			/* �f�N�������g */
			y--;
			/* ����12�� */
			m = 12;
		}
		/* ���Z */
		d += days_of_month(y, m);

	}
	return *this;
}

/* dn��������߂� */
Date Date::operator+(int dn) {
	Date temp(*this);	// ���t
	return temp += dn;

}

/* dn��������߂� */
Date operator+(int dn, const Date& day) {
	return day + dn;
}

long Date::operator- (const Date& day) const {
	long count;	// �J�E���g
	long count1 = this->day_of_year();	// *this�̔N���̌o�ߓ���
	long count2 = day.day_of_year();	// day�̔N���̌o�ߓ���

	/* this��day�������N�������ꍇ�̏��� */
	if (y == day.y) {
		/* ���ʂɌv�Z */
		count = count1 - count2;
	}
	/* this�̕����V�����ꍇ */
	else if (y > day.y) {
		/* �N���܂߂Čv�Z */
		count = days_of_year(day.y) - count2 + count1;
		/* �N�������ɂȂ�܂� */
		for (int yy = day.y + 1; yy < y; yy++) {
			/* �v�Z */
			count += days_of_year(yy);
		}
	}
	else {
		/* �N���܂߂Čv�Z */
		count = -(days_of_year(y) - count1 + count2);
		/* �N�������ɂȂ�܂� */
		for (int yy = y + 1; yy < day.y; yy++) {
			/* �v�Z */
			count -= days_of_year(yy);
		}
	}
	return count;
}

/* day�Ɠ������t�� */
bool Date::operator==(const Date& day)const {
	return y == day.y && m == day.m && d == day.d;
}


/* day�ƈႤ���t�� */
bool Date::operator!=(const Date& day)const {
	return !(*this == day);
}

/* day����̐V�������t�� */
bool Date::operator>(const Date& day)const {
	if (y > day.y)return true;	// �N���قȂ�
	if (y < day.y)return false;	// �N���قȂ�

	if (m > day.m)return true;	// �N�������������قȂ�
	if (m < day.m)return false;	// �N�������������قȂ�
	return d > day.d;				// �����r
}

/* day�ȍ~�̓��t�� */
bool Date::operator>=(const Date& day)const {
	return !(*this < day);
}

/* day���O�̌Â����t�� */
bool Date::operator<(const Date& day)const {
	if (y < day.y)return true;	// �N���قȂ�
	if (y > day.y)return false;	// �N���قȂ�

	if (m < day.m)return true;	// �N�������������قȂ�
	if (m > day.m)return false;	// �N�������������قȂ�
	return d < day.d;				// �����r
}

/* day�ȑO�̓��t�� */
bool Date::operator<=(const Date& day)const {
	return !(*this > day);
}


/* �o�̓X�g���[��s��x��}�� */
ostream& operator<<(ostream& s, const Date& x) {
	return s << x.to_string();
}

/* ���̓X�g���[��s������t�𒊏o����x�Ɋi�[ */
istream& operator>>(istream& s, Date& x) {
	int yy, mm, dd;	// �N����
	char ch;	/* ������ */

	/* �������o */
	s >> yy >> ch >> mm >> ch >> dd;

	/* �����i�[ */
	x = Date(yy, mm, dd);
	return s;
}