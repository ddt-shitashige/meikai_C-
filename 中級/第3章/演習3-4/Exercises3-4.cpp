/**
 * @file Exerises3-4.cpp
 * @brief ���K3-4	�����Ɏ����֐�f(x)���`�����ɂ���Đϕ������l��ԋp����֐�daikei���쐬����B
 * @author shitashige
 * @date 20200426
 */



#include<iostream>


/*
 *@fn
 * @brief y���̒l��ϊ�����֐�
 * @param x x��
 * @return ����
 */
double f(double x) {
	return x*x+1;
}

/*
 *@fn
 * @brief ��`�̖ʐς����߂�֐�
 * @param x1 x�J�n��
 * @param x2 x�I����
 * @param n ������
 * @param fp �ϕ��Ώ�
 * @return ����
 */
double daikei(double x1, double x2, int n, double fp(double)) {
	double range = x2 - x1;	// �͈�

	double lastTime = x1;	// �O��̊J�n�l
	double unit = range / n;	// 1���j�b�g������͈̔�

	double area = 0;	// �ʐ�

	/* �ʐς����߂郋�[�v */
	for (int i = 0; i < n; i++) {
		/* ��`�̖ʐς����߂� */
		area += (f(lastTime) + f(lastTime + unit)) * unit / 2;

		/* �O��l�X�V */
		lastTime += unit;
	}

	return area;
}


/**
 * @fn
 * @brief ���C���֐�
 * @return 0:����I��
 */
int main() {

	std::cout << "�ʐς�" << daikei(0, 3, 3, f) << "�ł��B";

}
