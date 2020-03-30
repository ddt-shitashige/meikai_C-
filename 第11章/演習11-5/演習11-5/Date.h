#pragma once
#pragma once
#include <string>
#include <iostream>

class Date {
	int y;	// ¼—ï”N
	int m;	// Œ
	int d;	// “ú

public:
	Date();
	Date(int yy, int mm = 1, int dd = 1);

	int year()  const { return y; }
	int month() const { return m; }
	int day()   const { return d; }

	Date preceding_day() const;

	std::string day_of_week() const;

	std::string to_string() const;
};

std::ostream &operator<<(std::ostream &s, const Date &x);