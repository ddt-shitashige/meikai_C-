/**
 * @file Exerises2-7.cpp
 * @brief ���K2-7 �r�b�g�x�N�g���ɂ��W���N���XBitSet�ɑ΂��āA�ȉ��̃����o�֐���ǉ�����B
 * @author shitashige
 * @date 20020424
 */

#include "Exercises2-7.h"


/**
 * @fn
 * @brief �R���X�g���N�^
 */
BitSet::BitSet() {
	/* �����������̂�0�ɂ��� */
	bitVector = 0;
}

/**
 * @fn
 * @brief �R���X�g���N�^
 * @param ���l
 */
BitSet::BitSet(unsigned long number) {
	/* �����̒l�ɂ��� */
	bitVector = number;
}


/**
 * @fn
 * @brief �W���̍ŏ��v�f�̒l
 * @return ��
 */
int BitSet::min() const{

	unsigned long cacheNumber = bitVector;	// �r�b�g�x�N�g���̈ꎞ�ۑ��ԍ�

	/* Bit�̒��g�S���[�v */
	for (int i = 0; i < sizeof(bitVector) * 8; i++) {
		/* �r�b�g�x�N�g���̍ŉ��l��1�������ꍇ�̏��� */
		if ((cacheNumber & 1) == 1) {
			return i;
		 }
		else {
			/* ���l�̌���1���������� */
			cacheNumber = cacheNumber >> 1;
		}
	}
	return -1;

}

/**
 * @fn
 * @brief �W���̍ő�v�f�̒l
 * @return ��
 */
int BitSet::max() const {

	unsigned long cacheNumber = bitVector;	// �r�b�g�x�N�g���̈ꎞ�ۑ��ԍ�
	unsigned long comparisonNumber = ~0;	// ��r���l
	comparisonNumber = comparisonNumber >> 1;	// �ŏ�ʃr�b�g��0�ɂ���
	comparisonNumber = ~comparisonNumber;	// �ŏ�ʃr�b�g�̂�1�ɂ���



	/* Bit�̒��g�S���[�v */
	for (int i = 0; i < sizeof(bitVector) * 8; i++) {
		/* �r�b�g�x�N�g���̍ŉ��l��1�������ꍇ�̏��� */
		if ((cacheNumber & comparisonNumber) == comparisonNumber) {
			return sizeof(bitVector) * 8 - i - 1;
		}
		else {
			/* ���l�̌���1�傫������ */
			cacheNumber = cacheNumber << 1;
		}
	}
	return -1;

}



/**
 * @fn
 * @brief �W�����폜
 * @return ��
 */
void BitSet::clear() {
	/* 0�ɂ��� */
	bitVector = 0;
}

/**
 * @fn
 * @brief ����ւ���
 * @param ����ւ���v�f
 */
void BitSet::swap(BitSet& r) {

	BitSet cacheBitSet; // �ꎞ�ۑ��̃r�b�g�Z�b�g

	/* �ꎞ�ۑ��Ɏ�����n�� */
	cacheBitSet = *this;
	/* �v�f�������Ɋi�[ */
	*this = r;
	/* �����Ǝ󂯎�����̂����� */
	r = cacheBitSet;
}

/**
 * @fn
 * @brief ����ւ���
 * @param ����ւ���v�f
 * @param ����ւ���v�f2
  */
void BitSet::swap(BitSet& s1, BitSet& s2) {

	BitSet cacheBitSet; // �ꎞ�ۑ��̃r�b�g�Z�b�g

	/* �ꎞ�ۑ��Ɏ�����n�� */
	cacheBitSet = s1;
	/* �v�f�������Ɋi�[ */
	s1 = s2;
	/* �����Ǝ󂯎�����̂����� */
	s2 = cacheBitSet;
}


/**
 * @fn
 * @brief �Ώۍ��i���낢��Ƃ����������A��蕶�ɑ���j
 * @param �Ώۗv�f
 * @param �Ώۗv�f2
  */
BitSet BitSet::symmetric_diffference(const BitSet& s1, const BitSet& s2) {
	BitSet cache;	// �ꎞ�ۑ��̃r�b�g�Z�b�g
	/* ���̌��ʂ͏��0�ȈׁA�����OK */
	return cache;
}

/**
 * @fn
 * @brief �яW��
 * @param �Ώۗv�f
  */
BitSet BitSet::operator&(const BitSet& s1) {
	BitSet cache = *this;	// �ꎞ�ۑ��̃r�b�g�Z�b�g
	cache.bitVector&= s1.bitVector;	// �яW��
	return cache;
}

/**
 * @fn
 * @brief �a�W��
 * @param �Ώۗv�f
  */
BitSet BitSet::operator|(const BitSet& s1) {
	BitSet cache = *this;	// �ꎞ�ۑ��̃r�b�g�Z�b�g
	cache.bitVector |= s1.bitVector;	// �a�W��
	return cache;
}

/**
 * @fn
 * @brief ���W��
 * @param �Ώۗv�f
  */
BitSet BitSet::operator^(const BitSet& s1) {
	BitSet cache = *this;	// �ꎞ�ۑ��̃r�b�g�Z�b�g
	cache.bitVector ^= s1.bitVector;	// ���W��
	return cache;
}

/**
 * @fn
 * @brief �����W��
 * @param �Ώۗv�f
  */
bool BitSet::is_subset_of(const BitSet& s) {
	BitSet cache = *this;	// �ꎞ�ۑ��̃r�b�g�Z�b�g
	cache.bitVector &= s.bitVector;	// �яW��
	return cache.bitVector == s.bitVector;	// ��r
}

/**
 * @fn
 * @brief �^�����W��
 * @param �Ώۗv�f
  */
bool BitSet::is_proper_subset_of(const BitSet& s) {
	BitSet cache = *this;	// �ꎞ�ۑ��̃r�b�g�Z�b�g
	cache.bitVector &= s.bitVector;	// �яW��
	return (cache.bitVector == s.bitVector) && (cache.bitVector != this->bitVector);	// ��r
}


/**
 * @fn
 * @brief ���C���֐�
 * @param �Ώۗv�f
  */
int main() {

	BitSet bitset(5);	// �r�b�g�Z�b�g��`
	BitSet bitsetSecond(170);	// �r�b�g�Z�b�g��`
	BitSet bitsetThird(240);	// �r�b�g�Z�b�g��`

	/* ���ʏo�� */
	cout<<"min:"<< bitset.min()<<"\n";
	/* ���ʏo�� */
	cout << "max:" << bitset.max()<<"\n";

	/* �폜 */
	bitset.clear();

	/* ���ʏo�� */
	cout << "min(�폜��):" << bitset.min() << "\n";
	/* ���ʏo�� */
	cout << "max(�폜��):" << bitset.max() << "\n";

	/* ����ւ�� */
	bitset.swap(bitsetSecond);
	/* ���ʏo�� */
	cout << "min(����ւ��):" << bitset.min() << "\n";
	/* ���ʏo�� */
	cout << "max(����ւ��):" << bitset.max() << "\n";

	/* ���ʏo�� */
	cout << "min(����ւ��2):" << bitsetSecond.min() << "\n";
	/* ���ʏo�� */
	cout << "max(����ւ��2):" << bitsetSecond.max() << "\n";

	/* ����ւ�� */
	bitset.swap(bitsetSecond,bitsetThird);
	/* ���ʏo�� */
	cout << "min(����ւ��2):" << bitsetSecond.min() << "\n";
	/* ���ʏo�� */
	cout << "max(����ւ��2):" << bitsetSecond.max() << "\n";

	/* ���ʏo�� */
	cout << "min(����ւ��3):" << bitsetThird.min() << "\n";
	/* ���ʏo�� */
	cout << "max(����ւ��3):" << bitsetThird.max() << "\n";

	/* �߂� */
	bitset.swap(bitsetThird,bitset);

	BitSet bitsetForth;	// �r�b�g�Z�b�g4

	/* �Ώۍ� */
	bitsetForth = bitset.symmetric_diffference(bitsetSecond, bitsetThird);

	/* ���ʏo�� */
	cout << "min(�Ώۍ�4):" << bitsetForth.min() << "\n";
	/* ���ʏo�� */
	cout << "max(�Ώۍ�4):" << bitsetForth.max() << "\n";

	/* �яW�� */
	bitset = bitsetSecond & bitsetThird;

	/* ���ʏo�� */
	cout << "min(��):" << bitset.min() << "\n";
	/* ���ʏo�� */
	cout << "max(��):" << bitset.max() << "\n";

	/* �a�W�� */
	bitset = bitsetSecond | bitsetThird;

	/* ���ʏo�� */
	cout << "min(�a):" << bitset.min() << "\n";
	/* ���ʏo�� */
	cout << "max(�a):" << bitset.max() << "\n";

	/* ���W�� */
	bitset = bitsetSecond ^ bitsetThird;

	/* ���ʏo�� */
	cout << "min(��):" << bitset.min() << "\n";
	/* ���ʏo�� */
	cout << "max(��):" << bitset.max() << "\n";

	BitSet bitsetFifth(160);	// �r�b�g�Z�b�g5
	
	/* ���ʏo�� */
	cout << "�����W��:" << (bitsetSecond.is_subset_of(bitsetThird)?"True":"False") << "\n";
	/* ���ʏo�� */
	cout << "�����W��:" << (bitsetSecond.is_subset_of(bitsetFifth) ? "True" : "False") << "\n";

	/* ���ʏo�� */
	cout << "�^�����W��:" << (bitsetSecond.is_proper_subset_of(bitsetFifth) ? "True" : "False") << "\n";
	/* ���ʏo�� */
	cout << "�^�����W��:" << (bitsetSecond.is_proper_subset_of(bitsetSecond) ? "True" : "False") << "\n";
}



