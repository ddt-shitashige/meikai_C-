#pragma once
#include<string>

class Member{
	std::string full_name;	// 氏名
	int number;	// 会員番号
	double weight;	// 体重

public:
	/* コンストラクタ */
	Member(const std::string& name, int no, double w);
	/* 氏名取得 */
	std::string name() const { return full_name; }
	/* 会員番号取得 */
	int no() const { return number; }
	/* 体重取得 */
	double get_weight() const { return weight; }
	/* 体重設定 */
	void set_weight(double w) { weight = (w > 0) ? w : 0; }
	/* 会員情報表示 */
	virtual void print() const;
	/* 自己紹介 */
	void introduce();

private:

};