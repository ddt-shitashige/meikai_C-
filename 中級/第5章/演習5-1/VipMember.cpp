#include <string>
#include<iostream>
#include"VipMember.h"

using namespace std;

/* コンストラクタ */
VipMember::VipMember(const string& name, int no, double w, const string& prv) :Member(name, no, w) {
	/* 特典を設定 */
	set_privilege(prv);
}

/* 関数情報表示 */
void VipMember::print() const {
	/* メッセージ表示 */
	cout << "No." << no() << ":" << name() << "(" << get_weight() << "kg)" << "特典=" << privilege << "\n";
}


void Member::introduce() {
	/* メッセージ表示 */
	cout << "上級国民の" << name();
}