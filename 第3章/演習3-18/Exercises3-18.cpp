/**
 * @file Exerises3-18.cpp
 * @brief	���̕\��\������List3-13(p.106)���Asetw����q��p���邱�ƂȂ���������悤�ɏ����������v���O�������쐬����B
 * @author shitashige
 * @date 20200122
 */

#include "iostream"

using namespace std;
/**
 * @fn
 * ���C���֐�
 * @brief ����\������֐�
 * @return 0:����I��
 */
int main() {
	/* ���̗񕪃��[�v���� */
	for (int i = 1; i <= 9; i++) {
		/* ���̍s�����[�v���� */
		for (int j = 1; j <= 9; j++) {
			/* ����1���������ꍇ�A�󔒂�2�Ƃ��� */
			if (i * j / 10 == 0) {
				/* �����o�� */
				cout << "  " << i * j;
			}
			/* ����2���������ꍇ�󔒂�1�Ƃ��� */
			else {
				/* �����o�� */
				cout << " " << i * j;
			}
		}
		/* ���s */
		cout << "\n";
	}
}