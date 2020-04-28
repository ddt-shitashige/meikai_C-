#pragma once

class SimpleDate {
	int y;	// ¼—ï”N
	int m;	// Œ
	int d;	// “ú

public:
	SimpleDate(int yy = 1, int mm = 1, int dd = 1) :y(yy), m(mm), d(dd) {}

	int year() const { return y; }	// ”O‚ğ•Ô‹p
	int month() const { return m; }	//Œ‚ğ•Ô‹p
	int day() const { return d; }	//“ú‚ğ•Ô‹p

	int comp_y(int yy)const { return yy - y; }	// yy‚©‚ç”N‚ğŒ¸‚¶‚½’l‚ğ•Ô‹p
	int comp_m(int mm)const { return mm - m; }	// mm‚©‚çŒ‚ğŒ¸‚¶‚½’l‚ğ•Ô‹p
	int comp_d(int dd)const { return dd - d; };	// dd‚©‚ç“ú‚ğŒ¸‚¶‚½’l‚ğ•Ô‹p


};