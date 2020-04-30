#include "Cube.h"
#include <iostream>

/**
 * @fn
 * @brief 長さ入力
 * @param lenght 長さ
 */
void Cube::Inputside(double lenght){
	/* 値格納 */
	side = lenght;
}

/**
 * @fn
 * @brief 面積を求める
 */
void Cube::Area() {
	area = side * side * side;
}
/**
 * @fn
 * @brief 文字列出力
 */
void Cube::Print() {
	std::cout << "面積：" << area << "\n辺の長さ：" << side;
}
