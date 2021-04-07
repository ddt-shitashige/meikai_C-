/**
 * @file Exerises4-2.cpp
 * @brief	以下の2つのプログラムを作成せよ。
			・int型の最小値から最大値までの全整数値を8進数・10進数・16進数で表示。
			・unsigned型の最小値から最大値までの全整数値を8進数・10進数・16進数で表示。
 * @author shitashige
 * @date 20200205
 */
#include <cctype>
#include <climits>
#include <iostream>

 /**
  * @fn
  * メイン関数
  * @brief intとuintの最小値から最大値をカウントアップする関数。
  * @return 0:正常終了
  */
int main() {

	/* 定義表示 */
	std::cout << "<int型>\n\n";

	/* iをカウントアップしながら無限ループ */
	for (int i = INT_MIN;; i++) {
		/* 定義表示 */
		std::cout << "8進数：";
		/* 8進数表示 */
		std::cout << std::oct << i;
		/* 定義表示 */
		std::cout <<std::dec <<" 10進数：";
		/* 10進数表示 */
		std::cout << i;
		/* 定義表示 */
		std::cout << " 16進数：";
		/* 16進数表示 */
		std::cout << std::hex << i << "\n";

		/* intの最大値を超えたらループから抜ける */
		if (i == INT_MAX) {
			/* ループから抜ける */
			break;
		}
	}

	/* 定義表示 */
	std::cout << "<unsigned int型>\n\n";

	/* iをカウントアップしながら無限ループ */
	for (int i = 0;; i++) {
		/* 定義表示 */
		std::cout << "8進数：";
		/* 8進数表示 */
		std::cout << std::oct << i;
		/* 定義表示 */
		std::cout << std::dec << " 10進数：";
		/* 10進数表示 */
		std::cout << i;
		/* 定義表示 */
		std::cout << " 16進数：";
		/* 16進数表示 */
		std::cout << std::hex << i << "\n";

		/* intの最大値を超えたらループから抜ける */
		if (i == UINT_MAX) {
			/* ループから抜ける */
			break;
		}
	}

}