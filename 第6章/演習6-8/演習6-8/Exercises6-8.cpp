/**
 * @file Exerises6-8.cpp
 * @brief ���K6-8	List6-8�̊֐�put_stars���A���̓�����List6-9�̊֐�put_nchar���Ăяo�����Ƃɂ���ĕ\�����s���悤�ɏ����������v���O�������쐬����B
					void print_season(int m)
 * @author shitashige
 * @date 20200319
 */



#include <iostream>
using namespace std;

/**
  * @fn
  * �����̕����������̉񐔕��o�͂���֐��B
  * @brief �����̕����������̉񐔕��o�͂���֐��B
  * @param[in] n ��
  * @param[in] c �o�͂��镶��
  * @return
  */
void put_nchar(int n, char c) {
	/* n�l��0�ɂȂ�܂Ń��[�v */
	while (n-- > 0) {
		/* �����̕������o�� */
		cout << c;
	}
}
/**
  * @fn
  * �����̉񐔕��������o�͂���֐��B
  * @brief �����̕����������̉񐔕��o�͂���֐��B
  * @param[in] n ��
  * @return
  */
void put_stars(int n) {
	/* *�}�[�N���o�͂���֐����Ăяo�� */
	put_nchar(n, '*');
}


/**
  * @fn
  * ���C���֐�
  * @brief *�}�[�N���o�͂���֐�
  * @return 0:����I��
  */
int main() {

	int n;  // n�l�i��肪�����Ȃ��Ă��莄�̈ӎu�ł͂Ȃ��j

	/* �ړI�\�� */
	cout << "�������p�̎O�p�`�������܂��B\n";

	/* ���͑����\�� */
	cout << "�i���́F";

	/* ���l���� */
	cin >> n;

	/* ���͒l�����[�v */
	for (int i = 1; i <= n; i++) {
		/* �����̉񐔕��������o�͂���֐��Ăяo�� */
		put_stars(i);
		/* ���s�\�� */
		cout << "\n";

	}
	return 0;
}
