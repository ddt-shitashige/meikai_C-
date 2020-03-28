/**
 * @file Exerises9-7.cpp
 * @brief ���K9-7	���O���Japanese�̒��ɑ��ق�\�����O���Osaka��List9-15�ip.339�j�ɒǉ������v���O�������쐬����B�ǉ��������O��Ԃ̒��ɁA�w�ϐ�x�̒l��1�ł����B�x�ƕ\������֐�print_x�ƁA�w���������Ă܂����H�x�ƕ\������֐�hello���`���邱�Ɓi�ϐ�x�͒�`���Ȃ��j�B
 * @author shitashige
 * @date 20200328
 */



#include <iostream>
using namespace std;


namespace English {
	int x = 1;	// �ϐ�x

	/**
	 * @fn
	 * print_x
	 * @brief ���b�Z�[�W�\��
	 * @return
	 */
 	void print_x() {
		/* ���b�Z�[�W�\�� */
		cout << "The value of x is " << x << ".\n";
	}
	/**
	 * @fn
	 * hello
	 * @brief ���b�Z�[�W�\��
	 * @return
	 */
	void hello() {
		/* ���b�Z�[�W�\�� */
		cout << "Hello!\n";
	}
}


namespace Japanese {
	int x = 2;	// �ϐ�x


	/**
	 * @fn
	 * print_x
	 * @brief ���b�Z�[�W�\��
	 * @return
	 */
	void print_x() {
		/* ���b�Z�[�W�\�� */
		cout << "�ϐ�x�̒l��" << x << "�ł��B\n";
	}
	/**
	 * @fn
	 * hello
	 * @brief ���b�Z�[�W�\��
	 * @return
	 */
	void hello() {
		/* ���b�Z�[�W�\�� */
		cout << "����ɂ��́I\n";
	}

	namespace Osaka {
	/**
	 * @fn
	 * print_x
	 * @brief ���b�Z�[�W�\��
	 * @return
	 */
		void print_x() {
			/* ���b�Z�[�W�\�� */
			cout << "�ϐ�x�̒l��" << English::x << "�ł����B\n";
		}
		/**
		 * @fn
		 * hello
		 * @brief ���b�Z�[�W�\��
		 * @return
		 */
		void hello() {
			/* ���b�Z�[�W�\�� */
			cout << "���������Ă܂����H\n";
		}

	}

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