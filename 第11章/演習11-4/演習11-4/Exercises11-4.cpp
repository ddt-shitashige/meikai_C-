/**
 * @file Exerises11-4.cpp
 * @brief ���K11-4	�R���X�g���N�^�������q�ɂ���Ė����I�ɏ��������Ȃ��ꍇ�ɁA�����o�����I�u�W�F�N�g���f�t�H���g�R���X�g���N�^�ŏ���������邱�Ƃ��v���O�������쐬���Ċm�F����B
 * @author shitashige
 * @date 20200330
 */


#include <iostream>

class Test {
public:
	Test();
	Test(int Number);
	int GetNumber();

private:
	int Number = 0;
};

/**
 * @fn
 * Test
 * @brief �R���X�g���N�^
 * @return
 */
Test::Test() {
	Number = 1;
}

/**
 * @fn
 * Test
 * @brief �R���X�g���N�^
 * @return
 */
Test::Test(int firstNumber) {
	/* �����Ń��b�Z�[�W�\�����s�����ɂ��A0�ŏ���������Ă��邱�Ƃ��m�F */
	std::cout << "���݂�Number�́F" << Number << "�ł�\n";
	Number = firstNumber;
}

/**
 * @fn
 * GetNumber
 * @brief �i���o�[�擾
 * @return
 */
int Test::GetNumber() {
	return Number;
}
/**
 * @fn
 * main
 * @brief ���C���֐�
 * @return
 */
int main() {

	Test test;	// �e�X�g�N���X
	/* ���b�Z�[�W�\�� */
	std::cout << "�f�t�H���g�R���X�g���N�^�Ăяo��" << test.GetNumber() << "\n";

	/* �R���X�g���N�^�Ăяo�� */
	test = Test(10);

	/* ���b�Z�[�W�\�� */
	std::cout << "�R���X�g���N�^�Ăяo��" << test.GetNumber();

}