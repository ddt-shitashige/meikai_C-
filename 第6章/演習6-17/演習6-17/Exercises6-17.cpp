/**
 * @file Exerises6-17.cpp
 * @brief ���K6-17	�Ăяo���ꂽ�񐔂�\������֐�put_count���쐬����B�E�Ɏ����̂́A�֐�put_count��3��Ăяo�������s���ʂł���B
 					void put_count ()
 * @author shitashige
 * @date 20200322
 */


#include <iostream>


 /**
   * @fn
   * put_count
   * @brief ���̊֐����Ăяo���ꂽ�񐔂�\������
   * @return
   */
void put_count() {
	static int countNumber; // �J�E���g���l
	/* �J�E���g���l�J�E���g�A�b�v */
	countNumber++;
	/* ���b�Z�[�W�o�� */
	std::cout<<"put_count�F"<< countNumber <<"���\n";
}

/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {


	/* ���b�Z�[�W�o�� */
	std::cout << "�J�E���g�l����͂��Ă��������B\n";

	int count;   // �J�E���g�l

	/* �ŏ��l�ƍő�l�����[�U�[���� */
	std::cin >> count;

	/* ���[�U�[�����͂������l�����[�v */
	for (int i=0; i < count; i++) {
		/* �Ăяo���J�E���g�֐��Ăяo�� */
		put_count();
	}

	return 0;
}