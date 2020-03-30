/**
 * @file Exerises11-2.cpp
 * @brief 演習11-2-	クラスDate第2版に抽出子を追加せよ。
 * @author shitashige
 * @date 20200330
 */


#include <ctime>
#include <sstream>
#include <iostream>
#include "Date.h"
using namespace std;


/**
 * @fn
 * Date
 * @brief デフォルトコンストラクタ
 * @return
 */
Date::Date() {
	time_t current = time(NULL);	// 現在の時刻を取得
	struct tm *local = localtime(&current);	// 要素別の時刻に変換

	y = local->tm_year + 1900;	// 年設定
	m = local->tm_mon + 1;	// 月設定
	d = local->tm_mday;	//日設定
}

/**
 * @fn
 * Date
 * @brief コンストラクタ
 * @return
 */
Date::Date(int yy, int mm, int dd) {
	y = yy;	// 年設定
	m = mm;	// 月設定
	d = dd;	// 日設定
}

/**
 * @fn
 * preceding_day
 * @brief 前日の日付返却
 * @return
 */
Date Date::preceding_day() const {
	int dmax[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };	// 日の最大
	Date temp = *this;	// 同一の日付
	/* 日付が1より大きかった場合の処理 */
	if (temp.d > 1)
		/* デクリメント */
		temp.d--;
	/* それ以外の処理 */
	else {
		/* 月が1よりも小さかった場合の処理 */
		if (--temp.m < 1) {
			/* 年をデクリメント */
			temp.y--;
			/* 月は12固定 */
			temp.m = 12;
		}
		/* 日付は1月前の最大値 */
		temp.d = dmax[temp.m - 1];
	}
	return temp;
}

/**
 * @fn
 * to_string
 * @brief 文字列表現を返却
 * @return
 */
string Date::to_string() const {

	ostringstream s;	// 出力ストリーム
	/* 年月日設定 */
	s << y << "年" << m << "月" << d << "日";

	return s.str();
}

/**
 * @fn
 * operator
 * @brief 出力ストリームに設定
 * @return
 */
ostream &operator<<(ostream &s, const Date &x) {
	return s << x.to_string();
}

/**
 * @fn
 * main
 * @brief 抽出子
 * @return
 */
istream &operator>>(istream &s, Date &x) {
	int year;	// 年
	int month;	// 月
	int day;	// 日
	char slash;	// スラッシュ

	/* 抽出 */
	s >> year >> slash >> month >> slash >> day;

	/* デイトのポインタに入れる */
	x = Date(year, month, day);

	return s;
}


/**
 * @fn
 * main
 * @brief メイン関数
 * @return
 */
int main()
{
	Date x;	// クラス定義
	/* メッセージ表示 */
	cout << "**/**/**形式";
	/* 入力 */
	cin >> x;
	/* 結果表示 */
	cout << "日付 … " << x << '\n';
}