/**
 * @file Exerises3-13.cpp
 * @brief 演習3-13　List3-19は、ユーザーが年/月/日の中から選んだ値を当てさせる日付宛ゲームであった。年/月/日の全てをこの順で当てさせるように変更したプログラムを作成せよ。なお、全ての値が当たるまでは、プログラムは終了しないものとする。
 * @author shitashige
 * @date 20200428
 */


#include<iostream>
#include"SimpleDate.h"

using namespace std;

int main() {

	/* 型名定義 */
	typedef int (SimpleDate::* Comp)(int)const;	// 
	Comp pcomp[] = {
		&SimpleDate::comp_y,
		&SimpleDate::comp_m,
		&SimpleDate::comp_d,
	};

	const SimpleDate birthday(1963, 11, 18);	// 誕生日

	/* メッセージ出力 */
	cout << "私の誕生日を当てて下さい。\n";

	int value;	// 値
	int diff;	// 差分値
	int count = 0;	// カウント
	/* メッセージ出力 */
	cout << "年→月→日で入力してください。\n";

	do {
		/* メッセージ出力 */
		cout << "いくつかな：";
		/* メッセージ入力 */
		cin >> value;

		/* 差分を格納 */
		diff = (birthday.*pcomp[count])(value);	

		/* 値が同じだった場合 */
		if (!diff) {
			/* メッセージ出力 */
			cout << "正解です\n";
			/* カウントインクリメント */
			count++;
		}
		/* 差分が正だった場合 */
		else if (diff > 0) {
			/* メッセージ出力 */
			cout << diff << "だけ大きいです\n";
		}
		else {
			/* メッセージ出力 */
			cout << -diff << "だけ小さいです\n";
		}
	} while (count != 3);
}