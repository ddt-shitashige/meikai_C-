
#include <iostream>

#include "car.h"

char *Car::GetNumber() {
	return number;
}


void Car::SetConsumption(double consumption) {
	/* 燃費設定 */
	Car::consumption = consumption;
	return;
}
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


void Car::refueling(double amount) {
	/* 燃料加算 */
	Car::tank += amount;
}



int main() {
	Car car;	// 車
	/* 燃料追加 */
	car.refueling(30.0);

	/* 燃費設定 */
	car.SetConsumption(5.2);

	/* 移動 */
	car.Move(10);
}