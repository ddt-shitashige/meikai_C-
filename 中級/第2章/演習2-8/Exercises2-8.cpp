/**
 * @file Exerises2-8.cpp
 * @brief ���K2-8 �ȉ��̓��������r�b�g�x�N�g���ɂ��W������������N���XVecBitSet�^���쐬����B
 * �E�v�f����unsigned long�^�̃r�b�g���ɐ�������Ȃ��B
 * �E�W���̉����l�Ə���l��C�ӂ̒l�ɐݒ�ł���B
 * @author shitashige
 * @date 20020424
 */

#include "Exercises2-8.h"


 /**
  * @fn
  * @brief �R���X�g���N�^
  */
VecBitSet::VecBitSet() {
	/* �������m�� */
	bitVector = new unsigned long;
	
	/* ������ */
	bitVector[0] = 0;
}

/**
 * @fn
 * @brief �R���X�g���N�^
 * @param �ŏ����l
 * @param �ő吔�l
 */
VecBitSet::VecBitSet(int min, int max) {
	/* �l�i�[ */
	minbit = min;
	/* �l�i�[ */
	maxbit = max;

	/* �v�f������ */
	element = ((max - min) / (sizeof(unsigned long) * 8)) + 1;

	/* �������m�� */
	bitVector = new unsigned long[element];

	/* ������ */
	clear();
}




/**
 * @fn
 * @brief ���l�ݒ�
 * @param �ӏ�
 */
void VecBitSet::SetBit(int pos) {
	unsigned long number = 1;	// ���l

	/* �ӏ����ŏ����l��菬���������ꍇ�̏��� */
	if (pos < minbit) {
		return;
	}

	/* 1�̒l��z����l�����Ȃ���pos�����炷 */
	number = number << ((pos - minbit) % (sizeof(unsigned long) * 8));
	/* pos�����炵���Ƃ���ɔr���I�_���a���i�[ */
	bitVector[(pos - minbit) / (sizeof(unsigned long) * 8)] ^= number;

}
/**
 * @fn
 * @brief �W�����폜
 * @return ��
 */
void VecBitSet::clear() {
	/* ���������[�v */
	for (int i = 0; i < element; i++) {
		/* ������ */
		bitVector[i] = 0;
	}
}


/**
 * @fn
 * @brief �яW��
 * @param �Ώۗv�f
  */
VecBitSet VecBitSet::operator&(const VecBitSet& s1) {


	/* �r�b�g�l��������ꍇ�A���^�[�� */
	if (this->minbit != s1.minbit || this->maxbit != s1.maxbit) {
		return *this;
	}

	VecBitSet cache = *this;	// �ꎞ�ۑ��̃r�b�g�Z�b�g

	/* �v�f�Ń��[�v */
	for (int i = 0; i < s1.element; i++) {
		/* �яW�� */
		cache.bitVector[i] &= s1.bitVector[i];
	}
	return cache;
}

/**
 * @fn
 * @brief �a�W��
 * @param �Ώۗv�f
  */
VecBitSet VecBitSet::operator|(const VecBitSet& s1) {

	/* �r�b�g�l��������ꍇ�A���^�[�� */
	if (this->minbit != s1.minbit || this->maxbit != s1.maxbit) {
		return *this;
	}

	VecBitSet cache = *this;	// �ꎞ�ۑ��̃r�b�g�Z�b�g

	/* �v�f�Ń��[�v */
	for (int i = 0; i < s1.element; i++) {
		/* �яW�� */
		cache.bitVector[i] |= s1.bitVector[i];
	}
	return cache;
	}

/**
 * @fn
 * @brief ���W��
 * @param �Ώۗv�f
  */
VecBitSet VecBitSet::operator^(const VecBitSet& s1) {

	/* �r�b�g�l��������ꍇ�A���^�[�� */
	if (this->minbit != s1.minbit || this->maxbit != s1.maxbit) {
		return *this;
	}

	VecBitSet cache = *this;	// �ꎞ�ۑ��̃r�b�g�Z�b�g

	/* �v�f�Ń��[�v */
	for (int i = 0; i < s1.element; i++) {
		/* �яW�� */
		cache.bitVector[i] ^= s1.bitVector[i];
	}
	return cache;
}

/**
 * @fn
 * @brief char�^�̃r�b�g�l��\������֐�
 * @param x ���l
 */
void VecBitSet::printBits() {

	/* �v�f�������[�v���� */
	for (int i = element - 1; i >= 0; i--) {
		/* i���ő�̎��̏��� */
		if (i == element - 1) {
			/* �r�b�g�������[�v���� */
			for (int j = ((maxbit - minbit) % (sizeof(unsigned long) * 8)); j >= 0; j--) {
				/* ���ʂ��o�� */
				cout << ((bitVector[i] >> j) & 1U ? '1' : '0');
			}

		}
		else {
			/* �r�b�g�������[�v���� */
			for (int j = sizeof(unsigned long) * 8 - 1; j >= 0; j--) {
				/* ���ʂ��o�� */
				cout << ((bitVector[i] >> j) & 1U ? '1' : '0');
			}
		}
	}
}

/**
 * @fn
 * @brief �t�@�C�i���C�Y
 * @param x ���l
 */
void VecBitSet::cleanup() {
	/* �������J�� */
	delete[] bitVector;
}
/**
 * @fn
 * @brief ���C���֐�
 * @param �Ώۗv�f
  */
int main() {

	VecBitSet vecbitset(10, 45);	// �r�b�g�Z�b�g��`

	VecBitSet vecbitsetSecond(10, 45);	// �r�b�g�Z�b�g2��`

	/* 44�Ԗڂ𗧂Ă� */
	vecbitset.SetBit(44);

	/* 32�Ԗڂ𗧂Ă� */
	vecbitsetSecond.SetBit(32);
	/* 44�Ԗڂ𗧂Ă� */
	vecbitsetSecond.SetBit(44);

	/* �юZ */
	(vecbitset & vecbitsetSecond).printBits();
	/* ���s�o�� */
	cout << "\n";

	/* ������ */
	vecbitset.clear();

	/* 44�Ԗڂ𗧂Ă� */
	vecbitset.SetBit(44);

	/* �a�Z */
	(vecbitset | vecbitsetSecond).printBits();
	/* ���s�o�� */
	cout << "\n";

	/* ������ */
	vecbitset.clear();

	/* 44�Ԗڂ𗧂Ă� */
	vecbitset.SetBit(44);

	/* ���Z */
	(vecbitset ^ vecbitsetSecond).printBits();
	/* ���s�o�� */
	cout << "\n";

	/* �t�@�C�i���C�Y */
	vecbitset.cleanup();

	/* �t�@�C�i���C�Y */
	vecbitsetSecond.cleanup();

}