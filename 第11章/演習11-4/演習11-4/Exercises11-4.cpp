/**
 * @file Exerises11-4.cpp
 * @brief 演習11-4	コンストラクタ初期化子によって明示的に初期化しない場合に、メンバ部分オブジェクトがデフォルトコンストラクタで初期化されることをプログラムを作成して確認せよ。
 * @author shitashige
 * @date 20200330
 */


#include <iostream>

class Test {
public:
	Test();
	Test(int Number);
	int GetNumber();

private:
	int Number = 0;
};

/**
 * @fn
 * Test
 * @brief コンストラクタ
 * @return
 */
Test::Test() {
	Number = 1;
}

/**
 * @fn
 * Test
 * @brief コンストラクタ
 * @return
 */
Test::Test(int firstNumber) {
	/* ここでメッセージ表示を行う事により、0で初期化されていることを確認 */
	std::cout << "現在のNumberは：" << Number << "です\n";
	Number = firstNumber;
}

/**
 * @fn
 * GetNumber
 * @brief ナンバー取得
 * @return
 */
int Test::GetNumber() {
	return Number;
}
/**
 * @fn
 * main
 * @brief メイン関数
 * @return
 */
int main() {

	Test test;	// テストクラス
	/* メッセージ表示 */
	std::cout << "デフォルトコンストラクタ呼び出し" << test.GetNumber() << "\n";

	/* コンストラクタ呼び出し */
	test = Test(10);

	/* メッセージ表示 */
	std::cout << "コンストラクタ呼び出し" << test.GetNumber();

}