/**
 * @file Exerises9-7.cpp
 * @brief 演習9-7	名前空間Japaneseの中に大阪弁を表す名前空間OsakaをList9-15（p.339）に追加したプログラムを作成せよ。追加した名前空間の中に、『変数xの値は1でっせ。』と表示する関数print_xと、『もうかってまっか？』と表示する関数helloを定義すること（変数xは定義しない）。
 * @author shitashige
 * @date 20200328
 */



#include <iostream>
using namespace std;


namespace English {
	int x = 1;	// 変数x

	/**
	 * @fn
	 * print_x
	 * @brief メッセージ表示
	 * @return
	 */
 	void print_x() {
		/* メッセージ表示 */
		cout << "The value of x is " << x << ".\n";
	}
	/**
	 * @fn
	 * hello
	 * @brief メッセージ表示
	 * @return
	 */
	void hello() {
		/* メッセージ表示 */
		cout << "Hello!\n";
	}
}


namespace Japanese {
	int x = 2;	// 変数x


	/**
	 * @fn
	 * print_x
	 * @brief メッセージ表示
	 * @return
	 */
	void print_x() {
		/* メッセージ表示 */
		cout << "変数xの値は" << x << "です。\n";
	}
	/**
	 * @fn
	 * hello
	 * @brief メッセージ表示
	 * @return
	 */
	void hello() {
		/* メッセージ表示 */
		cout << "こんにちは！\n";
	}

	namespace Osaka {
	/**
	 * @fn
	 * print_x
	 * @brief メッセージ表示
	 * @return
	 */
		void print_x() {
			/* メッセージ表示 */
			cout << "変数xの値は" << English::x << "でっせ。\n";
		}
		/**
		 * @fn
		 * hello
		 * @brief メッセージ表示
		 * @return
		 */
		void hello() {
			/* メッセージ表示 */
			cout << "もうかってまっか？\n";
		}

	}

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