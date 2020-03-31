/**
 * @file Exerises10-2.cpp
 * @brief 演習10-2	自動車クラスCarにデータメンバやメンバ関数を自由に追加せよ（ナンバーを表すデータメンバを追加する、燃費を表すデータメンバを追加する、移動による燃料残量の計算に燃費を反映させる、タンク容量を表すデータメンバを追加する、給油のためのメンバ関数を追加するetc…）。
 * @author shitashige
 * @date 20200330
 */

#include <iostream>

#include "car.h"

 /**
  * @fn
  * GetNumber
  * @brief ナンバー取得
  * @return
  */
char *Car::GetNumber() {
	return number;
}


/**
 * @fn
 * SetConsumption
 * @brief 燃費設定
 * @return
 */
void Car::SetConsumption(double consumption) {
	/* 燃費設定 */
	Car::consumption = consumption;
	return;
}

/**
 * @fn
 * SetNumber
 * @brief ナンバー設定
 * @return
 */
void Car::SetNumber(char *number) {

	/* ナンバー変更 */
	Car::number[0] = number[0];
	/* ナンバー変更 */
	Car::number[1] = number[1];
	/* ナンバー変更 */
	Car::number[2] = number[2];
	/* ナンバー変更 */
	Car::number[3] = number[3];
}

/**
 * @fn
 * Move
 * @brief 移動
 * @return
 */
void Car::Move(double distance) {
	/* 走行距離分燃料を引く */
	Car::tank -= distance / Car::consumption;

	/* 燃料が尽きた場合 */
	if (Car::tank < 0) {
		/* メッセージ表示 */
		std::cout << "燃料がつきました。\n";
		return;
	}
	/* 残念量標示 */
	std::cout << "残燃料は[" << Car::tank << "]です。";
}


/**
 * @fn
 * refueling
 * @brief 燃料追加
 * @return
 */
void Car::refueling(double amount) {
	/* 燃料加算 */
	Car::tank += amount;
}

/**
 * @fn
 * GetBuyYear
 * @brief 購入年取得
 * @param 体重
 * @return
 */
int Car::GetBuyYear() {
	return BuyYear;
}

/**
 * @fn
 * GetBuyMonth
 * @brief 購入月取得
 * @param 体重
 * @return
 */
int Car::GetBuyMonth() {
	return BuyMonth;
}


/**
 * @fn
 * GetBuyDay
 * @brief 購入日取得
 * @param 体重
 * @return
 */
int Car::GetBuyDay() {
	return BuyDay;
}


/**
 * @fn
 * SetBuyMonth
 * @brief 購入年設定
 * @param 体重
 * @return
 */
void Car::SetBuyYear(int year) {
	/* 購入年を設定 */
	BuyYear = year;
}


/**
 * @fn
 * SetBuyMonth
 * @brief 購入月設定
 * @param 体重
 * @return
 */
void Car::SetBuyMonth(int month) {
	/* 購入月を設定 */
	BuyMonth = month;
}


/**
 * @fn
 * SetBuyDay
 * @brief 購入日設定
 * @param 体重
 * @return
 */
void Car::SetBuyDay(int day) {
	/* 購入日を設定 */
	BuyDay = day;
}


/**
 * @fn
 * main
 * @brief メイン関数
 * @return
 */
int main() {
	Car car;	// 車
	/* 燃料追加 */
	car.refueling(30.0);

	/* 燃費設定 */
	car.SetConsumption(5.2);

	/* 移動 */
	car.Move(10);

	/* 購入年定義 */
	car.SetBuyYear(12);

	/* 購入月定義 */
	car.SetBuyMonth(12);
	/* 購入日定義 */
	car.SetBuyDay(14);


	std::cout << "購入年月日は[" << car.GetBuyYear() << "/" << car.GetBuyMonth() << "/" << car.GetBuyDay() << "]です";

}