/**
 * @file Exerises3-17.cpp
 * @brief 演習3-17	季節を求めるList3-1(p.82)の月の読み込みに置いて1～12以外の値が入力された場合は、再入力させるように変更したプログラムを作成せよ。
					(do文の中にdo文が入る二十ループとなる)
 * @author shitashige
 * @date 20200104
 */

#include <iostream> 
using namespace std;

 /**
  * @fn
  * メイン関数
  * @brief 季節を求める関数
  * @return 0:正常終了
  */
int main() {

	int month;				// 月
	string retry;			// リトライ確認メッセージ
	/* ループ開始 */
	do {
		/* 入力した値が期待値通りになるまでループ */
		do{
			/* メッセージ出力 */
			cout << "季節を求めます。\n何月ですか：";
			/* ユーザー入力待ち */
			cin >> month;
		/* 1以上12以下で無いとループ */
		} while (month < 1 && month > 12);
		/* 月が3以上5以下だと春とする */
		if (month >= 3 && month <= 5) {
			/* メッセージ出力 */
			cout << "それは春です。\n";
		}
		/* 月が6以上8以下だと夏とする */
		else if (month >= 6 && month <= 8) {
			/* メッセージ出力 */
			cout << "それは夏です。\n";
		}
		/* 月が9以上11以下だと秋とする */
		else if (month >= 9 && month <= 11) {
			/* メッセージ出力 */
			cout << "それは秋です。\n";
		}
		/* 月が12と1と2だと冬とする */
		else if (month == 12 || month == 1 || month == 2) {
			/* メッセージ出力 */
			cout << "それは冬です。\n";
		}
		/* メッセージ表示 */
		cout << "もう一度？　Y…Yes/N…No：";
		/* 入力待機 */
		cin >> retry;
		/* 文字入力判定 */
	} while (retry == "Y" || retry == "y");
	return 0;
}