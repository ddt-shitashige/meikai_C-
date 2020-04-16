/**
 * @file Exerises1-2.cpp
 * @brief 演習1-2　本文で学習したクラスDAては例えば2015年2月30日といった不正な初期化や代入などを許してしまう。コンストラクタなどに与えられた日付が不正デあれば、正しい日付に補正するように書き換えたクラスを作成せよ。
 * @author shitashige
 * @date 20020416
 */

#include "date.h"

 /**
  * @fn
  * メイン関数
  * @brief メイン関数
  * @return 0:正常終了
  */
int main() {
    /* Date定義 */
    Date date(2015, 2, 30);

    /* メッセージ出力 */
    std::cout << date.to_string();
}