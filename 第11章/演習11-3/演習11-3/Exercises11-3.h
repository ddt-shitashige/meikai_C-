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

};

std::ostream &operator<<(std::ostream &s, const Time &x);
std::istream &operator>>(std::istream &s, Time &x);