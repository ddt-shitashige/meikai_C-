/**
 * @file Exerises1-2.cpp
 * @brief ���K1-2�@�{���Ŋw�K�����N���XDA�Ă͗Ⴆ��2015�N2��30���Ƃ������s���ȏ����������Ȃǂ������Ă��܂��B�R���X�g���N�^�Ȃǂɗ^����ꂽ���t���s���f����΁A���������t�ɕ␳����悤�ɏ����������N���X���쐬����B
 * @author shitashige
 * @date 20020416
 */

#include "date.h"

 /**
  * @fn
  * ���C���֐�
  * @brief ���C���֐�
  * @return 0:����I��
  */
int main() {
    /* Date��` */
    Date date(2015, 2, 30);

    /* ���b�Z�[�W�o�� */
    std::cout << date.to_string();
}