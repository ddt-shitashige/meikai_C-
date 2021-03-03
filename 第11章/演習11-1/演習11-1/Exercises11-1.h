#pragma once
class Time {
private:
	int hour;	// 時間
	int minute;	// 分
	int second;	// 秒

	public:
	/* コンストラクタ */
	Time(int hour, int minute, int second);

	int GetHour();
	int GetMinute();
	int GetSecond();
};