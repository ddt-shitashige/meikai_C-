/**
 * @file Exerises4-1.cpp
 * @brief	�S�Ă̕����ɂ��āA����/�p�啶��/�p������/�L�������Ȃǂ̕����킪������ꗗ�\���o�͂���v���O�������쐬����B
 * @author shitashige
 * @date 20200204
 */
#include <cctype>
#include <climits>
#include <iostream>
/**
 * @fn
 * ���C���֐�
 * @brief �������\������֐�
 * @return 0:����I��
 */
int main() {
	for (char i = 0;; i++) {

		/* �p�������m�F */
		if (isalnum(i)) {
			/* �p�ꂩ�m�F */
			if (isalpha(i)) {
				/* �p��̑啶�����m�F */
				if(isupper(i)){
					/* ������o�� */
					std::cout << "�p�啶��:";
				}
				else{
					/* ������o�� */
					std::cout << "�p������:";
				}
			}
			else {
				/* ������o�� */
				std::cout << "�@�@����:";
			}
		}
		/* �L���������m�F */
		else if(isgraph(i)){
			/* ������o�� */
			std::cout<<"�L������:";
		}
		else {
			std::cout << "�@�@�@�@:";

		}
		/* �����R�[�h���當���𔻕� */
		switch (i) {
		/* �x��̏ꍇ */
		case'\a':
			/* \a�Əo�� */
			std::cout << "\\a";
			break;
		/* ��ނ̏ꍇ */
		case'\b':
			/* \b�Əo�� */
			std::cout << "\\b";
			break;
		/* ��������̏ꍇ */
		case'\f':
			/* \f�Əo�� */
			std::cout << "\\f";
			break;
		/* ���s�̏ꍇ */
		case'\n':
			/* \n�Əo�� */
			std::cout << "\\n";
			break;
		/* ���A�̏ꍇ */
		case'\r':
			/* \r�Əo�� */
			std::cout << "\\r";
			break;
		/* �^�u�̏ꍇ */
		case'\t':
			/* \t�Əo�� */
			std::cout << "\\t";
			break;
		/* �����^�u�̏ꍇ */
		case'\v':
			/* \v�Əo�� */
			std::cout << "\\v";
			break;
		/* ����ȊO�̏ꍇ */
		default:
			/* �\���ł��镶���Ȃ當�����o�͖�����΋󔒂��o�� */
			std::cout << ' ' << (isprint(i) ? i : ' ');
			break;
		}
		/* �����^�ɃL���X�g�������̂�16�i���ŕ\�� */
		std::cout << ' ' << std::hex << int(i) << '\n';
		/* char�̍ő�l�𒴂����烋�[�v���甲���� */
		if (i == CHAR_MAX) {
			/* ���[�v���甲���� */
			break;
		}
	}
}