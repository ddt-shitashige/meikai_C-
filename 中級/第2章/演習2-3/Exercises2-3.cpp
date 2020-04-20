

#include<iostream>

unsigned set(unsigned x, int pos) {

	unsigned number = 1;	// 数値

	/* 1の値をpos分ずらす */
	number << pos;

	/* pos分ずらしたところに1を格納 */
	x |= pos;
}

unsigned reset(unsigned x, int pos) {

	unsigned number = 0;	// 数値

	/* 1の値をpos分ずらす */
	number << pos;

	/* pos分ずらしたところに1を格納 */
	x |= pos;
}