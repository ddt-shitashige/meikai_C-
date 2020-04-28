#pragma once
#include<string>
#include"Member.h"

/* 長寿会員クラス */
class SeniorMember :public Member {
	int care_level;	// 要介護度

public:
	/* コンストラクタ */
	SeniorMember(const std::string& name, int no, double w, int level = 0);

	/* 要介護度取得 */
	int get_care_level() const { return care_level; }

	/* 要介護度設定 */
	void set_care_level(int level) {
		/* 要介護度設定 */
		care_level = (level >= 1 && level <= 5) ? level : 0;
	}
	void print() const;
	/* 自己紹介 */
	void introduce();

};