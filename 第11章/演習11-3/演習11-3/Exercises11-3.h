#pragma once
class Time {
private:
	int hour;	// 時間
	int minute;	// 分
	int second;	// 秒

public:
	/* コンストラクタ */
	Time(int hour, int minute, int second);

	int GetHour() const;
	int GetMinute() const;
	int GetSecond() const;

};

std::ostream &operator<<(std::ostream &s, const Time &x);
std::istream &operator>>(std::istream &s, Time &x);