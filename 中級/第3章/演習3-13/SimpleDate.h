#pragma once

class SimpleDate {
	int y;	// ����N
	int m;	// ��
	int d;	// ��

public:
	SimpleDate(int yy = 1, int mm = 1, int dd = 1) :y(yy), m(mm), d(dd) {}

	int year() const { return y; }	// �O��ԋp
	int month() const { return m; }	//����ԋp
	int day() const { return d; }	//����ԋp

	int comp_y(int yy)const { return yy - y; }	// yy����N���������l��ԋp
	int comp_m(int mm)const { return mm - m; }	// mm���猎���������l��ԋp
	int comp_d(int dd)const { return dd - d; };	// dd��������������l��ԋp


};