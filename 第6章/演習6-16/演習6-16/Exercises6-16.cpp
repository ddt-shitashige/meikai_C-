/**
 * @file Exerises6-16.cpp
 * @brief ���K6-16	�ÓI�L������Ԃ����z��̑S�v�f��0�ŏ���������邱�Ƃ��m�F����v���O�������쐬����B
 * @author shitashige
 * @date 20200322
 */


#include <iostream>

/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {

	const int element = 5;	// �v�f��
	static int staticArray[5];	// ���I�L�����Ԃ����z��
    int Array[5];	// �����L�����Ԃ����z��


    /* ���b�Z�[�W�o�� */
    std::cout << "�ÓI�L�����Ԃ̏ꍇ\n";

	/* �z��̒��g�o�� */
	for (int i=0; i < element; i++) {
		/* ���b�Z�[�W�o�� */
		std::cout<<"["<<i<<"]="<<staticArray[i]<<" \n";
	}
    /* ���b�Z�[�W�o�� */
    std::cout << "�����L�����Ԃ̏ꍇ\n";

    /* �z��̒��g�o�� */
    for (int i = 0; i < element; i++) {
        /* ���b�Z�[�W�o�� */
        std::cout << "[" << i << "]=" << Array[i] << " \n";
    }

	return 0;
}