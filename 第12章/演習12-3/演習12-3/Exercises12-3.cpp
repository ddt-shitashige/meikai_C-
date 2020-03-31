/**
 * @file Exerises12-3.cpp
 * @brief 演習12-3	演習11-3で作成した時刻クラスに、各種の演算子関数を追加せよ。仕様などは自分で考えること。
 * @author shitashige
 * @date 20200331
 */


#include <iostream>
#include"Exercises12-3.h"


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
 * GetHour
 * @brief 時間設定
 * @return
 */
void Time::SetHour(int hour) {
	/* 時間の更新 */
	Time::hour = hour;
}

/**
 * @fn
 * GetMinute
 * @brief 分設定
 * @return
 */
void Time::SetMinute(int minute) {
	/* 分の更新 */
	Time::minute = minute;
}

/**
 * @fn
 * GetSecond
 * @brief 秒設定
 * @return
 */
void Time::SetSecond(int second) {
	/* 秒の更新 */
	Time::second = second;
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
 * operator+
 * @brief 時刻の足し算
 * @return
 */
Time operator+(Time &x, Time &y) {
	Time cachetime(0, 0, 0); // 一時保存タイム

	/* 時間の足し算 */
	cachetime.SetHour(x.GetHour() + y.GetHour());

	/* 分の足し算 */
	cachetime.SetMinute(x.GetMinute() + y.GetMinute());

	/* 秒の足し算 */
	cachetime.SetSecond(x.GetSecond() + y.GetSecond());

	return cachetime;
}


/**
 * @fn
 * operator-
 * @brief 時刻の引き算
 * @return
 */
Time operator-(Time &x, Time &y) {
	Time cachetime(0, 0, 0); // 一時保存タイム

	/* 時間の引き算 */
	cachetime.SetHour(x.GetHour() - y.GetHour());

	/* 分の引き算 */
	cachetime.SetMinute(x.GetMinute() - y.GetMinute());

	/* 秒の引き算 */
	cachetime.SetSecond(x.GetSecond() - y.GetSecond());

	return cachetime;
}



/**
 * @fn
 * main
 * @brief メイン関数
 * @return
 */
int main() {
	/* 時刻設定 */
	Time firstTime(0, 0, 0);
	Time secondTime(0, 0, 0);


	/* メッセージ表示 */
	std::cout << "**:**:**で1つ目の時刻入力";
	/* 時刻入力 */
	std::cin >> firstTime;


	/* メッセージ表示 */
	std::cout << "**:**:**で2つ目の時刻入力";
	/* 時刻入力 */
	std::cin >> secondTime;

	/* メッセージ表示 */
	std::cout << "足しました:" << firstTime + secondTime << "\n";

	/* メッセージ表示 */
	std::cout << "引きました:" << firstTime - secondTime << "\n";

}


/**
 * @fn
 * operator
 * @brief 抽出子
 * @return
 */
std::ostream &operator<<(std::ostream &s, const Time &x) {
	return s << x.GetHour() << ":" << x.GetMinute() << ":" << x.GetSecond();
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

	s >> hour >> coron >> minute >> coron >> second;

	x = Time(hour, minute, second);

	return s;
}