/**
 * @file Exerises13-1.cpp
 * @brief 演習13-1	日付クラスDate第4版に対して、以下の演算子関数を追加した日付クラスを作成せよ。
 *					・二つの日付が等しいかどうかを判定する等価演算子==
 *					・二つの日付が等しくないかどうかを判定する等価演算子!=
 *					・二つの日付の大小関係を判定する関係演算子>,>=,<,<=
 *					※より新しい日付のほうを大きいと判定すること。
 *					・二つの日付の減算を行う（何日離れているかを求める）減算演算子－
 *					※左オペランドから右オペランドを引くこと。左右のオペランドの日付が等しければ0を返し、左オペランドの方が新しい日付であれば、日付の差を正の値として返し、より古い日付であれば、日付の差を負値として返すこと。
 *					・日付を翌日の日付に更新する増分演算子++（前置き及び後置き）
 *					・日付を前日の日付に更新する増分演算子--（前置き及び後置き）
 *					・日付をn日進めた日付に更新する複合代入演算子+=
 *					・日付をn日戻した日付に更新する複合代入演算子-=
 *					・日付のn日後の日付を求める加算演算子＋
 *					・日付のn日前の日付を求める減算演算子－
 * @author shitashige
 * @date 20200401
 */

#include <iostream>
#include "Date.h"

using namespace std;

int main() {

	Date firstDate(2020, 2, 20);	// 1つ目の日付
	Date secondDate(2020, 2, 25);	// 2つ目の日付
	Date thirdDate(2020, 2, 15);	// 2つ目の日付


	/* ブーリアン形式で表示 */
	cout << boolalpha;

	/* メッセージ表示 */
	cout << "[==]同じ日付[" << (firstDate == firstDate) << "]\n";

	/* メッセージ表示 */
	cout << "[==]違う日付[" << (firstDate == secondDate) << "]\n";

	/* メッセージ表示 */
	cout << "[!=]同じ日付[" << (firstDate != firstDate) << "]\n";

	/* メッセージ表示 */
	cout << "[!=]違う日付[" << (firstDate != secondDate) << "]\n";

	/* メッセージ表示 */
	cout << "[>]同じ日付[" << (firstDate > firstDate) << "]\n";

	/* メッセージ表示 */
	cout << "[>]右が大きい日付[" << (firstDate > secondDate) << "]\n";

	/* メッセージ表示 */
	cout << "[>]左が大きい日付[" << (secondDate > firstDate) << "]\n";

	/* メッセージ表示 */
	cout << "[>=]同じ日付[" << (firstDate >= firstDate) << "]\n";

	/* メッセージ表示 */
	cout << "[>=]右が大きい日付[" << (firstDate >= secondDate) << "]\n";

	/* メッセージ表示 */
	cout << "[>=]左が大きい日付[" << (secondDate >= firstDate) << "]\n";

	/* メッセージ表示 */
	cout << "[<]同じ日付[" << (firstDate < firstDate) << "]\n";

	/* メッセージ表示 */
	cout << "[<]右が大きい日付[" << (firstDate < secondDate) << "]\n";

	/* メッセージ表示 */
	cout << "[<]左が大きい日付[" << (secondDate < firstDate) << "]\n";

	/* メッセージ表示 */
	cout << "[<=]同じ日付[" << (firstDate <= firstDate) << "]\n";

	/* メッセージ表示 */
	cout << "[<=]右が大きい日付[" << (firstDate <= secondDate) << "]\n";

	/* メッセージ表示 */
	cout << "[<=]左が大きい日付[" << (secondDate <= firstDate) << "]\n";

	/* メッセージ表示 */
	cout << "[-5]右が大きい日付[" << (firstDate - secondDate) << "]\n";

	/* メッセージ表示 */
	cout << "[5]左が大きい日付[" << (secondDate - firstDate) << "]\n";

	/* メッセージ表示 */
	cout << "日付をインクリメント(前置)[" << (++firstDate) << "]\n";

	/* メッセージ表示 */
	cout << "日付をインクリメント(後置)[" << (firstDate++) << "]\n";

	/* メッセージ表示 */
	cout << "日付をデクリメント(前置)[" << (--firstDate) << "]\n";

	/* メッセージ表示 */
	cout << "日付をデクリメント(後置)[" << (firstDate--) << "]\n";

	/* メッセージ表示 */
	cout << "[+5]複合代入演算子[" << (firstDate += 5) << "]\n";

	/* メッセージ表示 */
	cout << "[-5]複合代入演算子(後置)" << (firstDate -= 5) << "]\n";

	/* メッセージ表示 */
	cout << "[+5]加算演算子[" << (firstDate + 5) << "]\n";

	/* メッセージ表示 */
	cout << "[-5]減算演算子[" << (firstDate - 5) << "]\n";

}