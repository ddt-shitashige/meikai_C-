/**
 * @file Exerises2-10.cpp
 * @brief ���K2-10	�L�[�{�[�h����ǂݍ��񂾎O�̐����̍ŏ��l�����߂ĕ\������v���O�������쐬����B
 * @author shitashige
 * @date 20191225
 */
#include <iostream>
using namespace std;
 /**
  * @fn
  * ���C���֐�
  * @brief 3�̐�������͂����čŏ��l�����߂郁�\�b�h
  * @return 0:����I��
  */
int main() {

	int firstInputNumber;	// 1�Ԗڂɓ��͂��ꂽ����
	int secondInputNumber;	// 2�Ԗڂɓ��͂��ꂽ����
	int thirdInputNumber;	// 3�Ԗڂɓ��͂��ꂽ����
	int minimumResukt;		// �ŏ�����

	/* ���[�U�[�ɓ��͂𑣂����b�Z�[�W */
	cout << "������3�A���œ��͂��Ă�������";

	/* ��������� */
	cin >> firstInputNumber >> secondInputNumber >> thirdInputNumber;

	/* firstInputNumber�� secondInputNumber���r���āA����������minimumResukt�Ɋi�[���� */
	minimumResukt = firstInputNumber < secondInputNumber ? firstInputNumber : secondInputNumber;

	/* minimumResukt��thirdInputNumber���r���āA����������minimumResukt�Ɋi�[���� */
	minimumResukt = minimumResukt < thirdInputNumber ? minimumResukt : thirdInputNumber;

	/* ���ʕ\�� */
	cout << "�ŏ����l��" << minimumResukt << "�ł��B";

	return 0;
}