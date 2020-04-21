/**
 * @file Exerises2-3.cpp
 * @brief ���K2-3 ������������x�̑�pos�r�b�g���A1�ɂ����l��Ԃ��֐�set�A0�ɂ����l��Ԃ��֐�reset�A���]�����l��Ԃ��֐�inverse���쐬����B
 * @author shitashige
 * @date 20020421
 */



#include<iostream>

/**
 * @fn
 * @brief ������������x�̉��ʑ�pos�r�b�g���A1�ɂ����l��Ԃ��֐�
 * @param x ����
 * @param n ��]��
 * @return ��
 */
unsigned set(unsigned x, int pos) {

	unsigned number = 1;	// ���l

	/* 1�̒l��pos�����炷 */
	number=number << pos-1;

	/* pos�����炵���Ƃ����1���i�[ */
	return x | number;

	
}


/**
 * @fn
 * @brief ������������x�̉��ʑ�pos�r�b�g���A0�ɂ����l��Ԃ��֐�
 * @param x ����
 * @param n ��]��
 * @return ��
 */
unsigned reset(unsigned x, int pos) {

	unsigned number = 1;	// ���l

	/* 1�̒l��pos�����炷 */
	number=number << pos-1;
	/* �t�]��0�ɂ��� */
	number = ~number;

	/* pos�����炵���Ƃ����0���i�[ */
	return x & number;
}


/*
 *@fn
 * @brief ������������x�̉��ʑ�pos�r�b�g���A���]�����l��Ԃ��֐�
 * @param x ����
 * @param n ��]��
 * @return ��
 */
unsigned inverse(unsigned x, int pos) {
	unsigned number = 1;	// ���l

	/* 1�̒l��pos�����炷 */
	number = number << pos -1;
	/* pos�����炵���Ƃ���ɔr���I�_���a���i�[ */
	return x ^ number;


}
/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {

	unsigned number;	// ���l
	unsigned pos;	// �ӏ�


	/* ���b�Z�[�W�o�� */
	std::cout << "���l�Ɖӏ�����͂��Ă�������\n";

	/* ���l���� */
	std::cin >> number >> pos;

	/* ���ʏo�� */
	std::cout << "����(set):" << set(number, pos) << "\n����(reset):" << reset(number, pos)<< "\n����(inverse):" << inverse(number, pos);

}
