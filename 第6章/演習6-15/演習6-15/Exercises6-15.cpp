/**
 * @file Exerises6-15.cpp
 * @brief ���K6-15	�������������̂�������̎��������߂�֐�spend���쐬����B�Ȃ������̕\����24���Ԑ��ł�����̂Ƃ���B�Ⴆ�΁A23��59�����2����̎�����0��1���ƂȂ�B
					void spend (int &x, int &y int dy)
 * @author shitashige
 * @date 20200322
 */


#include <iostream>


 /**
   * @fn
   * spend
   * @brief �������Z����
   * @param x ����
   * @param y ��
   * @param dy ���Z���镪
   * @return
   */
void spend(int &x, int &y, int dy) {
	/* ���ԕ����ɕ��̌J��グ���l�������l�����Z���� */
	x=(x+((y+dy)/60))%24;
	/* �������͑�����60�̗]������߂鎖�ɂ�苁�߂� */
	y=(y+dy)%60;
}

/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {

	int hour;	// ����
	int min;	// ��
	int addMin;  // ���Z����
	do{
	/* ���b�Z�[�W�o�� */
	std::cout << "���Ԃƕ��Ɖ��Z��������͂��Ă��������B\n";

	/* ���Ԃƕ��Ɖ��Z���������[�U�[���� */
	std::cin >> hour >> min >> addMin;
	/* ���l���͈͊O�Ȃ烋�[�v */
	} while (hour>24||min>60);

	/* ���Z�֐��Ăяo�� */
	spend(hour, min, addMin);

	/* ���ʂ�\��*/
	std::cout << "���Z��������["<<hour << "��" << min << "��]�ƂȂ�܂����B\n";
	return 0;
}