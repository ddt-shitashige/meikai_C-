#include <string>
#include<iostream>
#include "Member.h"

using namespace std;

/* コンストラクタ */
Member::Member(const string& name, int no, double w) :full_name(name), number(no) {
	/* 体重設定 */
	set_weight(w);
}

void Member::print() const {
	/* メッセージ表示 */
	cout << "No." << number << ":" << full_name << "(" << weight << "kg)\n";
}

void Member::introduce() {
	/* メッセージ表示 */
	cout << "自分の名前は" << name();
}