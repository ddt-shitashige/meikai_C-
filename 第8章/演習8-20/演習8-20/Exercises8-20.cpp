/**
 * @file Exerises8-17.cpp
 * @brief ���K8-17	��̕�������w���|�C���^����������֐����쐬����B�֐��̎d�l�͎����ōl���邱�ƁB
 * @author shitashige
 * @date 20200326
 */


#include <iostream>
const int stringLen = 30;	// ��������

 /**
  * @fn
  * ChangePointer
  * @brief ���������ւ����s��
  * @param firstPointer 1�Ԗڂ̃|�C���^
  * @param secondPointer 2�Ԗڂ̃|�C���^
  * @return
  */
void ChangePointer(char **firstPointer, char **secondPointer) {

	char *cachePointer=*firstPointer;	// 1�Ԗڂ̃|�C���^���ꎞ�ۑ��|�C���^�Ɋi�[

	*firstPointer=*secondPointer;	// 1�Ԗڂ̃|�C���^��2�Ԗڂ̃|�C���^�Ɋi�[

	*secondPointer=cachePointer;	// 2�Ԗڂ̃|�C���^��1�Ԗڂ̃|�C���^�Ɋi�[

	return;
}



/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {


	char *firstInputString;	// ���͕���1
	char *secondInputString;	// ���͕���2

	/* �������m�� */
	firstInputString=new char[stringLen];
	/* �������m�� */
	secondInputString = new char[stringLen];


	/* ���b�Z�[�W�\�� */
	std::cout << "���������͂��Ă��������B";

	/* ��������� */
	std::cin.getline(firstInputString, stringLen);

	/* ���b�Z�[�W�\�� */
	std::cout << "���������͂��Ă��������B";

	/* ��������� */
	std::cin.getline(secondInputString, stringLen);


	/* ������̓���ւ����s�� */
	ChangePointer(&firstInputString, &secondInputString);

	/* ���b�Z�[�W�\�� */
	std::cout << "���ʁF\n1:" << firstInputString << "\n2:" << secondInputString;

	/* �������J�� */
	delete[] firstInputString;

	/* �������J�� */
	delete[] secondInputString;

}