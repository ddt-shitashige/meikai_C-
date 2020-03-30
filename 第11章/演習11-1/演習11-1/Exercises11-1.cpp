/**
 * @file Exerises11-1.cpp
 * @brief 演習11-1-	時・分・秒のデータメンバで構成される時刻クラスを作成せよ。コンストラクタやメンバ関数については、自由に設計すること。
 * @author shitashige
 * @date 20200330
 */


#include <iostream>
#include"Exercises11-1.h"


/**
 * @fn
 * GetHour
 * @brief 時間設定
 * @return
 */
int Time::GetHour() {
	return Time::hour;
}

/**
 * @fn
 * GetMinute
 * @brief 分設定
 * @return
 */
int Time::GetMinute() {
	return Time::minute;
}

/**
 * @fn
 * GetSecond
 * @brief 秒設定
 * @return
 */
int Time::GetSecond() {
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

	std::cout << "現在の時刻は" << time.GetHour() << "時" << time.GetMinute() << "分" << time.GetSecond() << "秒";

}