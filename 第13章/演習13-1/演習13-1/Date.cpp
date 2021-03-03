#include <ctime>
#include <sstream>
#include <iostream>
#include "Date.h"

using namespace std;

/* 平年の各月の日数 */
int Date::dmax[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

/* y年m月の日数を求める */
int Date::days_of_month(int y, int m) {
	return dmax[m - 1] + (leap_year(y) && m == 2);
}

/* Dateの出デフォルトコンストラクタ */
Date::Date() {
	time_t current = time(NULL);	// 現在の暦時刻を取得
	struct tm *local = localtime(&current);	// 要素別の時刻に変換

	y = local->tm_year + 1900;	// 年：tm_yearは西暦年-1900
	m = local->tm_mon + 1;	// 月：tm_monは0～11
	d = local->tm_mday;	// 日
}

/* Dateのコンストラクタ */
Date::Date(int yy, int mm, int dd) {
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

/* 等価演算子== */
bool operator==(const Date &x, const Date &y) {
	/* 判定をリターン */
	return x.y == y.y && x.m == y.m && x.d == y.d;
}

/* 等価演算子!= */
bool operator!=(const Date &x, const Date &y) {
	/* 判定をリターン */
	return !(x == y);

}

/* 関係演算子< */
bool operator<(const Date &x, const Date &y) {
	/* 年が同じだった場合の処理 */
	if (x.y == y.y) {
		/* 経過日数で比較 */
		return x.day_of_year() < y.day_of_year();
	}
	/* 年が違った場合の処理 */
	else {
		/* 年で比較 */
		return x.y < y.y;
	}

}

/* 関係演算子<= */
bool operator<=(const Date &x, const Date &y) {
	/* 結果を返却 */
	return x < y || x == y;
}

/* 関係演算子> */
bool operator >(const Date &x, const Date &y) {
	/* 結果を返却 */
	return !(x <= y);
}

/* 関係演算子>= */
bool operator>=(const Date &x, const Date &y) {
	/* 結果を返却 */
	return !(x < y);
}

/* 減算演算子 */
int operator-(const Date &x, const Date &y) {
	
	int sinseDate=x.day_of_year()-y.day_of_year();	// 経過日数
	/* 正値であった場合の処理 */
	if (x.y > y.y) {
		/* 日数計算 */
		for (int i = y.y; i < x.y; i++) {
			/* 1年の日数を加算 */
			sinseDate+=(365+Date::leap_year(i));
		}
	}
	/* 負値であった場合の処理 */
	if (x.y < y.y) {
		/* 日数計算 */
		for (int i = x.y; i < y.y; i++) {
			/* 1年の日数を減算 */
			sinseDate -= (365 + Date::leap_year(i));
		}
	}
	return sinseDate;
}

/* 増分演算子（前置） */
Date &Date::operator++() {
	/* 1日加算 */
	*this = following_day();
	return *this;
}
/* 増分演算子（後置） */
Date  Date::operator++(int) {
	Date cacheDate = *this;	// 一時保存日時
	/* 1日加算 */
	*this = following_day();
	return cacheDate;
}

/* 減分演算子（前置） */
Date &Date::operator--() {
	/* 1日減算 */
	*this = preceding_day();
	return *this;
}


/* 減分演算子（後置） */
Date  Date::operator--(int) {
	Date cacheDate = *this;	// 一時保存日時
	/* 1日減算 */
	*this = preceding_day();
	return cacheDate;
}

/* 複合代入演算子+= */
Date &Date::operator+=(int n) {
	/* 後に指定された数だけインクリメントするループ */
	for (int i = 0; i < n; i++){
		/* インクリメント */
		++ *this;
	}
	return *this;
}

/* 複合代入演算子-= */
Date &Date::operator-=(int n) {
	/* 後に指定された数だけデクリメントするループ */
	for (int i = 0; i < n; i++){
		/* デクリメント */
		-- *this;
	}
	return *this;
}
/* 加算演算子 */
Date Date::operator+(int n) {
	Date cacheDate = *this;	// 一時保存日時

	/* 加算する数値分ループ */
	for (int i = 0; i < n; i++)
		/* インクリメント */
		cacheDate++;
	return cacheDate;
}
/* 減算演算子 */
Date Date::operator-(int n) {
	Date cacheDate = *this;	// 一時保存日時

	/* 減算する数値分ループ */
	for (int i = 0; i < n; i++)
		/* デクリメント */
		cacheDate--;
	return cacheDate;
}

/* 出力ストリームsにxを挿入 */
ostream &operator<<(ostream &s, const Date &x) {
	return s << x.to_string();
}