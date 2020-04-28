#pragma once

class SimpleDate {
	int y;	// 西暦年
	int m;	// 月
	int d;	// 日

public:
	SimpleDate(int yy = 1, int mm = 1, int dd = 1) :y(yy), m(mm), d(dd) {}

	int year() const { return y; }	// 念を返却
	int month() const { return m; }	//月を返却
	int day() const { return d; }	//日を返却

	int comp_y(int yy)const { return yy - y; }	// yyから年を減じた値を返却
	int comp_m(int mm)const { return mm - m; }	// mmから月を減じた値を返却
	int comp_d(int dd)const { return dd - d; };	// ddから日を減じた値を返却


};