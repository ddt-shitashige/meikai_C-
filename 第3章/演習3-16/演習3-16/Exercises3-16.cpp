/**
 * @file Exerises3-16.cpp
 * @brief ���K3-16	�E�Ɏ����悤��1����n�܂ł̐����l��2���\������v���O�������쐬����B
 * @author shitashige
 * @date 20200119
 */
#include <iostream>


/**
 * @fn
 * ���C���֐�
 * @brief �搔��\������֐�
 * @return 0:����I��
 */
int main() {
	int countNumber;		// �J�E���g�ԍ�

	/* �����o�� */
	std::cout << "n�̒l\n";

	/* �������� */
	std::cin >> countNumber;


	/* ���͂����J�E���g�ԍ��ɂȂ�܂ŏ搔��\�����郋�[�v */
	for (int count = 1; count <= countNumber; count++) {
		std::cout << count << "��2���" << count * count << "\n";
	}

}