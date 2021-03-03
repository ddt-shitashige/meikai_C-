/**
 * @file Exerises6-3.cpp
 * @brief 演習6-3　じゃんけんの<<プレーや>>を表す中小クラスを定義せよ。そのクラスから以下のクラスを派生する事。・人間プレーヤクラス(出す手をキーボードからよみこむ)・コンピュータプレーヤクラス（出す手を乱数で生成する）
 * @author shitashige
 * @date 20200430
 */


#include "human.h"

/**
 * @fn
 * @brief 要素をセット
 */
void Human::SetElement(){	/* 要素格納 */
	/* 要素をセット */
	element = inputElement;
}

/**
 * @fn
 * @brief 入力値をセット
 * @param 入力値
 */
void Human::InputElement(int inputNumber) {
	/* 入力値をセット */
	inputElement = inputNumber;
	/* セット呼び出し */
	SetElement();

}