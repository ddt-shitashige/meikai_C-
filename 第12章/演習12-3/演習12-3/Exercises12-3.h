#pragma once
class Time {
private:
	int hour;	// ����
	int minute;	// ��
	int second;	// �b

public:
	/* �R���X�g���N�^ */
	Time(int hour, int minute, int second);

	int GetHour() const;
	int GetMinute() const;
	int GetSecond() const;

	void SetHour(int hour);
	void SetMinute(int minute);
	void SetSecond(int second);


	friend Time operator+(const Time &x, const Time &y);
	friend Time operator-(const Time &x, const Time &y);

};

std::ostream &operator<<(std::ostream &s, const Time &x);
std::istream &operator>>(std::istream &s, Time &x);