
#include <string>
#include<iostream>
#include"SeniorMember.h"

using namespace std;

/* コンストラクタ */
SeniorMember::SeniorMember(const std::string& name, int no, double w, int level):Member(name,no,w) {
	/* レベル設定 */
	set_care_level(level);
}

/* 会員情報表示 */
void SeniorMember::print() const {
	/* メッセージ表示 */
	cout << "No." << no() << ":" << name() << "(" << get_weight() << "kg)" << "要介護度=" << care_level << "\n";

}

void Member::introduce() {
	/* メッセージ表示 */
	cout << "介護が必要な" << name();
}