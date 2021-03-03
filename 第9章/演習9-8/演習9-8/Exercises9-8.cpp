/**
 * @file Exerises9-8.cpp
 * @brief 演習9-8	前問を、名前空間メンバの宣言と定義を分離したプログラムとして作成せよ。
 * @author shitashige
 * @date 20200328
 */



#include <iostream>
using namespace std;



namespace English {
	extern int x;
	void print_x();
	void hello();
}

namespace Japanese {
	extern int x;
	void print_x();
	void hello();
	namespace Osaka {
		void print_x();
		void hello();
	}
}


int English::x = 1;	// 変数x

/**
 * @fn
 * print_x
 * @brief メッセージ表示
 * @return
 */
void English::print_x() {
	/* メッセージ表示 */
	cout << "The value of x is " << x << ".\n";
}
/**
 * @fn
 * hello
 * @brief メッセージ表示
 * @return
 */
void English::hello() {
	/* メッセージ表示 */
	cout << "Hello!\n";
}



int Japanese::x = 2;	// 変数x


/**
 * @fn
 * print_x
 * @brief メッセージ表示
 * @return
 */
void Japanese::print_x() {
	/* メッセージ表示 */
	cout << "変数xの値は" << x << "です。\n";
}
/**
 * @fn
 * hello
 * @brief メッセージ表示
 * @return
 */
void Japanese::hello() {
	/* メッセージ表示 */
	cout << "こんにちは！\n";
}

/**
 * @fn
 * print_x
 * @brief メッセージ表示
 * @return
 */
void Japanese::Osaka::print_x() {
	/* メッセージ表示 */
	cout << "変数xの値は" << English::x << "でっせ。\n";
}
/**
	* @fn
	* hello
	* @brief メッセージ表示
	* @return
	*/
void Japanese::Osaka::hello() {
	/* メッセージ表示 */
	cout << "もうかってまっか？\n";
}



/**
 * @fn
 * main
 * @brief メイン関数
 * @return
 */

int main() {
	cout << "English::x = " << English::x << '\n';
	English::print_x();
	English::hello();

	cout << "Japanese::x = " << Japanese::x << '\n';
	Japanese::print_x();
	Japanese::hello();

	cout << "Japanese::Osaka::x = " << English::x << '\n';
	Japanese::Osaka::print_x();
	Japanese::Osaka::hello();
}