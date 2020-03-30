/**
 * @file Exerises11-3.cpp
 * @brief 演習11-3	演習11-1で作成した時刻クラスに挿入子と抽出子を追加せよ。
 * @author shitashige
 * @date 20200330
 */


#include <iostream>
#include"Exercises11-3.h"


 /**
  * @fn
  * GetHour
  * @brief 時間設定
  * @return
  */
int Time::GetHour() const {
	return Time::hour;
}

/**
 * @fn
 * GetMinute
 * @brief 分設定
 * @return
 */
int Time::GetMinute() const {
	return Time::minute;
}

/**
 * @fn
 * GetSecond
 * @brief 秒設定
 * @return
 */
int Time::GetSecond() const {
	return Time::second;
}

/**
 * @fn
 * Time
 * @brief コンストラクタ
 * @return
 */
Time::Time(int hour, int minute, int second) {
	/* 時間設定 */
	Time::hour = hour;
	/* 分設定 */
	Time::minute = minute;
	/* 秒設定 */
	Time::second = second;

}

/**
 * @fn
 * main
 * @brief メイン関数
 * @return
 */
int main() {
	/* 時刻設定 */
	Time time(11, 22, 33);

	/* メッセージ表示 */
	std::cout << "**:**:**で時刻入力";
	/* 時刻入力 */
	std::cin>> time;

	/* メッセージ表示 */
	std::cout<<time;

}


/**
 * @fn
 * operator
 * @brief 抽出子
 * @return
 */
std::ostream &operator<<(std::ostream &s, const Time &x) {
	return s<<x.GetHour()<<":"<<x.GetMinute()<<":"<<x.GetSecond();
}

/**
 * @fn
 * operator
 * @brief 挿入子
 * @return
 */
std::istream &operator>>(std::istream &s, Time &x) {
	int hour;	// 時刻
	int minute;	// 分
	int second;	// 秒
	char coron;	// コロン

	s>>hour>>coron>>minute>>coron>>second;

	x=Time(hour, minute,second);

	return s;
}