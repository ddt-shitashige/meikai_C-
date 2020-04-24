#pragma once

#include <iostream>

using namespace std;

class VecBitSet {

public:

	VecBitSet();

	VecBitSet(int min,int max);

	void SetBit(int pos);

	void cleanup();

	void clear();

	VecBitSet operator&(const VecBitSet& s1);

	VecBitSet operator|(const VecBitSet& s1);

	VecBitSet operator^(const VecBitSet& s1);

	void printBits();

private:
	unsigned long *bitVector;	// ビットベクトル
	int minbit = 0;	// ビット最小値
	int maxbit = 31;	// ビット最大値
	int element = 0;	// 要素数

};