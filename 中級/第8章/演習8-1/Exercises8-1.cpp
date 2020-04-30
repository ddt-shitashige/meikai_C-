/**
 * @file Exerises8-1.cpp
 * @brief 演習8-1　左ページにて示したset_terminate関数によって、exception_errorを登録するaを実際に含むプログラムを作成して、動作の検証を行え。
 * @author shitashige
 * @date 20200430
 */

#include <iostream>

/* 例外関連のエラーが発生したことを表示してプログラムを強制終了 */
void exception_error() {
	/* 文字列出力 */
	std::cout << "例外関連のエラーが発生しました。\n";
	/* プログラムの異常終了 */
	abort();
}

/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {

	int* c1 = NULL;
		/* 例外発生時の処理を設定 */
		set_terminate(exception_error);
		/* エラー処理 */
		terminate();
}