/**
 * @file Exerises1-1.cpp
 * @brief 演習1-1　クラスHumanのコンストラクタを本ページに示したように書き換えたプログラムを作成し、初期化が期待通りに行われることを確認せよ。
 * @author shitashige
 * @date 20200413
 */


#include <iostream>
#include <string>
#include "Human.h"



/**
 * @fn
 * メイン関数
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {
    /* 人クラス定義 */
    Human human("ああああ", 156, 52);

    /* 結果表示 */
    std::cout << "名前：" << human.name() << "\n身長:" << human.get_height() << "\n体重：" << human.get_weight();
}