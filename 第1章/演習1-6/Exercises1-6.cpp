/**
 * @file Exerises1-6.cpp
 * @brief ���K1-6	List1-7�̃v���O������ύX���āA�����l���������l��x��y�ɑ������v���O�������쐬����B
					���̎��s���ʂ���Aint�^�ϐ��������l�݂̂��������Ȃ������m�F���鎖�B
 * @author shitashige
 * @date 20191204
 */


#include <iostream>

using namespace std;

/**
* @brief int�^�͏����_�������Ȃ����Ƃ�F�m����֐��j
* @return 0�F����
*/
int main() {

	int firstInt = 63.9;			// ��ڂ�int�^��63.9�ɂ���B
	int secondInt = 18.4;			// ��ڂ�int�^��18.4�ɂ���B

	float firstFloat = 63.9;		// ��ڂ�float�^��63.9�ɂ���B
	float secondFloat = 18.4;		// ��ڂ�float�^��18.4�ɂ���B


	/*
	 * �����o�͂�p���āAint�^�͐������������Ȃ������ؖ�����B
	 */
	/* int�^�����o�� */
	cout << "int�^��63.9+18.4���s�������ʂ́u" << firstInt + secondInt << "�v\n";
	/* float�^�����o�� */
	cout << "float�^��63.9+18.4���s�������ʂ́u" << firstFloat + secondFloat << "�v\n";

	return 0;
}