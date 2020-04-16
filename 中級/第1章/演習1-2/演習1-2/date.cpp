#include <ctime>
#include <sstream>
#include <iostream>
#include "Date.h"

using namespace std;

/* 平年の各月の日数 */
int Date::dmax[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


/* year年の日数 */
int Date::days_of_year(int year) {
	return 365 + leap_year(year);
}

/* y年m月の日数を求める */
int Date::days_of_month(int year, int month) {
	return dmax[month - 1] + (month == 2 && leap_year(year));
}

/* Dateのデフォルトコンストラクタ */
Date::Date() {
	time_t current = time(NULL);	// 現在の暦時刻を取得
	struct tm* local = localtime(&current);	// 要素別の時刻に変換

	y = local->tm_year + 1900;	// 年：tm_yearは西暦年-1900
	m = local->tm_mon + 1;	// 月：tm_monは0～11
	d = local->tm_mday;	// 日
}

/* Dateのコンストラクタ */
Date::Date(int yy, int mm, int dd) {

	/* 年設定 */
	set_year(yy);
	/* 月が12より小さい */
	if (mm <= 12) {
		/* 月設定 */
		set_month(mm);
	}
	else {
		/* 月設定 */
		set_month(12);
	}

	/* 日が最大値より小さい */
	if (days_of_month(yy, mm) > dd) {
		/* 日時を格納 */
		set_day(dd);
	}
	else {
		/* 最大日時を格納 */
		set_day(days_of_month(yy, mm));
	}
}

/* 年月日を設定 */
void Date::set(int yy, int mm, int dd) {
	y = yy;	// 年
	m = mm;	// 月
	d = dd;	// 日
}

/* 年内の経過日数を返却 */
int Date::day_of_year() const {
	int days = d;	// 年内の経過日数

	/* 1月～の日数を加える */
	for (int i = 1; i < m; i++)
		/* 日数加算 */
		days += days_of_month(y, i);
	return days;
}

/* 前日の日付を返却 */
Date Date::preceding_day() const {
	Date temp = *this;	// 同一の日付

	/* 日付が1より大きかった場合の処理 */
	if (temp.d > 1)
		/* 日付をデクリメント */
		temp.d--;
	/* 日付が1だった場合 */
	else {
		/* 1月だった場合の処理 */
		if (--temp.m < 1) {
			/* 年をデクリメント */
			temp.y--;
			/* 12月に決定 */
			temp.m = 12;
		}
		/* 日は最大にする */
		temp.d = days_of_month(temp.y, temp.m);
	}
	return temp;
}

/* 翌日の日付を返却 */
Date Date::following_day() const {
	Date temp = *this;	// 同一の日付

	/* 日が最大以外だった場合の処理 */
	if (temp.d < days_of_month(temp.y, temp.m))
		/* 日付をインクリメント */
		temp.d++;
	/* 日付が最大だった場合の処理 */
	else {
		/* 日付が12月を超えていた場合の処理 */
		if (++temp.m > 12) {
			/* 年をインクリメント */
			temp.y++;
			/* 月を1にする */
			temp.m = 1;
		}
		/* 日付は1にする */
		temp.d = 1;
	}
	return temp;
}

/* 文字列表現を返却 */
string Date::to_string() const {
	ostringstream s;	// 文字出力のストリーム
	/* 文字出力 */
	s << y << "年" << m << "月" << d << "日";
	return s.str();
}

/* 曜日を返却 */
int Date::day_of_week() const {
	int yy = y;	// 年
	int mm = m;	// 月
	/* 月が1か2の場合の処理 */
	if (mm == 1 || mm == 2) {
		/* 年をデクリメント */
		yy--;
		/* 月を12追加 */
		mm += 12;
	}
	return (yy + yy / 4 - yy / 100 + yy / 400 + (13 * mm + 8) / 5 + d) % 7;
}

/* 1970年1月1日からの経過日数を返却 */
Date::operator long() const {
	return *this - Date(1970, 1, 1);
}


/* 増分演算子（前置） */
Date& Date::operator++() {

	/* 月末より前であれば */
	if (d < days_of_month(y, m)) {
		/* インクリメント */
		d++;
	}
	else {
		/* 12月を超えたら */
		if (++m > 12) {
			/* 年をインクリメント */
			y++;
		}
		/* 1日に設定 */
		d = 1;
	}
	return *this;
}

/* 増分演算子（後置） */
Date  Date::operator++(int) {
	Date temp(*this);	// インクリメントの前の値をコピー
	/* インクリメント */
	++(*this);
	return temp;
}


/* 減分演算子（前置） */
Date& Date::operator--() {

	/* 月初めでなければ */
	if (d > 1) {
		/* デクリメント */
		d--;
	}
	else {
		/* 1月を超えたら */
		if (--m <= 1) {
			/* 年をデクリメント */
			y--;
		}
		/* 前月の月末に設定 */
		d = days_of_month(y, m);
	}
	return *this;
}

/* 減分演算子（後置） */
Date  Date::operator--(int) {
	Date temp(*this);	// インクリメントの前の値をコピー
	/* デクリメント */
	--(*this);
	return temp;
}


/* 複合代入演算子+= */
Date& Date::operator+=(int dn) {
	/* dnが負であった場合の処理 */
	if (dn < 0) {
		/* 演算子-=に処理を委ねる */
		return *this -= -dn;
	}
	/* 日にdnを加算 */
	d += dn;

	/* 日が月の日数内に収まるように調整 */
	while (d > days_of_month(y, m)) {
		/* 減算 */
		d -= days_of_month(y, m);
		/* 月が12を超えた場合の処理 */
		if (++m > 12) {
			/* インクリメント */
			y++;
			/* 月を1にする */
			m = 1;
		}
	}
	return *this;
}

/* 複合代入演算子-= */
Date& Date::operator-=(int dn) {
	/* dnが負であった場合の処理 */
	if (dn < 0) {
		/* 演算子+=に処理を委ねる */
		return *this += -dn;
	}
	/* 日にdnを減算 */
	d -= dn;

	/* 日が正値になるように調整 */
	while (d < 1) {
		/* 月が1以下だった場合の処理 */
		if (--m < 1) {
			/* デクリメント */
			y--;
			/* 月を12に */
			m = 12;
		}
		/* 加算 */
		d += days_of_month(y, m);

	}
	return *this;
}

/* dn日後を求める */
Date Date::operator+(int dn) {
	Date temp(*this);	// 日付
	return temp += dn;

}

/* dn日後を求める */
Date operator+(int dn, const Date& day) {
	return day + dn;
}

long Date::operator- (const Date& day) const {
	long count;	// カウント
	long count1 = this->day_of_year();	// *thisの年内の経過日数
	long count2 = day.day_of_year();	// dayの年内の経過日数

	/* thisとdayが同じ年だった場合の処理 */
	if (y == day.y) {
		/* 普通に計算 */
		count = count1 - count2;
	}
	/* thisの方が新しい場合 */
	else if (y > day.y) {
		/* 年も含めて計算 */
		count = days_of_year(day.y) - count2 + count1;
		/* 年が同じになるまで */
		for (int yy = day.y + 1; yy < y; yy++) {
			/* 計算 */
			count += days_of_year(yy);
		}
	}
	else {
		/* 年も含めて計算 */
		count = -(days_of_year(y) - count1 + count2);
		/* 年が同じになるまで */
		for (int yy = y + 1; yy < day.y; yy++) {
			/* 計算 */
			count -= days_of_year(yy);
		}
	}
	return count;
}

/* dayと同じ日付か */
bool Date::operator==(const Date& day)const {
	return y == day.y && m == day.m && d == day.d;
}


/* dayと違う日付か */
bool Date::operator!=(const Date& day)const {
	return !(*this == day);
}

/* dayより後の新しい日付か */
bool Date::operator>(const Date& day)const {
	if (y > day.y)return true;	// 年が異なる
	if (y < day.y)return false;	// 年が異なる

	if (m > day.m)return true;	// 年が等しい月が異なる
	if (m < day.m)return false;	// 年が等しい月が異なる
	return d > day.d;				// 日を比較
}

/* day以降の日付か */
bool Date::operator>=(const Date& day)const {
	return !(*this < day);
}

/* dayより前の古い日付か */
bool Date::operator<(const Date& day)const {
	if (y < day.y)return true;	// 年が異なる
	if (y > day.y)return false;	// 年が異なる

	if (m < day.m)return true;	// 年が等しい月が異なる
	if (m > day.m)return false;	// 年が等しい月が異なる
	return d < day.d;				// 日を比較
}

/* day以前の日付か */
bool Date::operator<=(const Date& day)const {
	return !(*this > day);
}


/* 出力ストリームsにxを挿入 */
ostream& operator<<(ostream& s, const Date& x) {
	return s << x.to_string();
}

/* 入力ストリームsから日付を抽出してxに格納 */
istream& operator>>(istream& s, Date& x) {
	int yy, mm, dd;	// 年月日
	char ch;	/* 文字列 */

	/* 文字抽出 */
	s >> yy >> ch >> mm >> ch >> dd;

	/* 文字格納 */
	x = Date(yy, mm, dd);
	return s;
}