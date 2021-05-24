/**
 * @file Exerises3-1.cpp
 * @brief 演習3-1	読み込んだ整数値の符号を判定するList2-5を好きなだけ何度でも入力・表示を繰り返せるようにしたプログラムを作成せよ。
 * @author shitashige
 * @date 20200104
 */

#include <iostream> 
using namespace std;		// このnamespaceはList2-5にこう書かれてあるだけで、私が記したわけではない。

 /**
  * @fn
  * メイン関数
  * @brief List2-5 符号判別関数
  * @return 0:正常終了
  */
int main() {

	int n;					// このintはList2-5がこう書かれてある為であり、私が命名したわけではない。
	string retryMessage;	// リトライ確認メッセージ
	/* ループ開始 */
	do{
		/* メッセージ出力 */
		cout << "整数値:";
		/* ユーザー入力待ち */
		cin >> n;

		/* nが0より大きければ正値であることを表示する */
		if (n > 0) {
			/* メッセージ出力 */
			cout << "その値は正です。\n";
		}
		/* nが0より小さければ負値であることを表示する */
		else if (n < 0) {
			/* メッセージ出力 */
			cout << "その値は負です。\n";
		}
		/* それ以外の場合の出力 */
		else { 
			/* メッセージ出力 */
			cout << "その値は0です。\n";
		}
		/* メッセージ表示 */
		cout << "もう一度しますか？　Yes：y/No：それ以外";
		/* 入力待機 */
		cin >> retryMessage;
		/* 文字入力判定 */
	} while (retryMessage == "Y" || retryMessage == "y");
	return 0;
}