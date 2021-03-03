/**
 * @file Exerises9-8.cpp
 * @brief ���K9-8	�O����A���O��ԃ����o�̐錾�ƒ�`�𕪗������v���O�����Ƃ��č쐬����B
 * @author shitashige
 * @date 20200328
 */



#include <iostream>
using namespace std;



namespace English {
	extern int x;
	void print_x();
	void hello();
}

namespace Japanese {
	extern int x;
	void print_x();
	void hello();
	namespace Osaka {
		void print_x();
		void hello();
	}
}


int English::x = 1;	// �ϐ�x

/**
 * @fn
 * print_x
 * @brief ���b�Z�[�W�\��
 * @return
 */
void English::print_x() {
	/* ���b�Z�[�W�\�� */
	cout << "The value of x is " << x << ".\n";
}
/**
 * @fn
 * hello
 * @brief ���b�Z�[�W�\��
 * @return
 */
void English::hello() {
	/* ���b�Z�[�W�\�� */
	cout << "Hello!\n";
}



int Japanese::x = 2;	// �ϐ�x


/**
 * @fn
 * print_x
 * @brief ���b�Z�[�W�\��
 * @return
 */
void Japanese::print_x() {
	/* ���b�Z�[�W�\�� */
	cout << "�ϐ�x�̒l��" << x << "�ł��B\n";
}
/**
 * @fn
 * hello
 * @brief ���b�Z�[�W�\��
 * @return
 */
void Japanese::hello() {
	/* ���b�Z�[�W�\�� */
	cout << "����ɂ��́I\n";
}

/**
 * @fn
 * print_x
 * @brief ���b�Z�[�W�\��
 * @return
 */
void Japanese::Osaka::print_x() {
	/* ���b�Z�[�W�\�� */
	cout << "�ϐ�x�̒l��" << English::x << "�ł����B\n";
}
/**
	* @fn
	* hello
	* @brief ���b�Z�[�W�\��
	* @return
	*/
void Japanese::Osaka::hello() {
	/* ���b�Z�[�W�\�� */
	cout << "���������Ă܂����H\n";
}



/**
 * @fn
 * main
 * @brief ���C���֐�
 * @return
 */

int main() {
	cout << "English::x = " << English::x << '\n';
	English::print_x();
	English::hello();

	cout << "Japanese::x = " << Japanese::x << '\n';
	Japanese::print_x();
	Japanese::hello();

	cout << "Japanese::Osaka::x = " << English::x << '\n';
	Japanese::Osaka::print_x();
	Japanese::Osaka::hello();
}