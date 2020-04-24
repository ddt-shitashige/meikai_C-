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
	unsigned long *bitVector;	// �r�b�g�x�N�g��
	int minbit = 0;	// �r�b�g�ŏ��l
	int maxbit = 31;	// �r�b�g�ő�l
	int element = 0;	// �v�f��

};