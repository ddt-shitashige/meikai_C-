#pragma once
class Time {
private:
	int hour;	// ����
	int minute;	// ��
	int second;	// �b

	public:
	/* �R���X�g���N�^ */
	Time(int hour, int minute, int second);

	int GetHour();
	int GetMinute();
	int GetSecond();
};