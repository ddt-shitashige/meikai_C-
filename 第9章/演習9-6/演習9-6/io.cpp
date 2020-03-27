#include <iostream>
#include "kazuate.h"
using namespace std;


/**
  *@fn
  *prompt
  *@brief 入力促しメッセージ表示
  *@return
  */
static void prompt() {
	/* メッセージ表示 */
	cout << "0～" << max_no << "の数：";
}

/**
  *@fn
  *input
  *@brief 回答入力
  *@return
  */
int input() {
	int val;	// 入力値
	do {
		/* メッセージ表示 */
		prompt();
		/* 値入力 */
		cin >> val;
		/* 入力値が0以上、最大値以下になるまでループ */
	} while (val < 0 || val > max_no);
	return val;
}

/**
  *@fn
  *confirm_retry
  *@brief コンテニュー確認
  *@return
  */
bool confirm_retry() {

	int cont;
	cout << "もう一度しますか？\n"
		<< "<Yes...1/No...0>:";
	cin >> cont;
	return static_cast<bool>(cont);
}

