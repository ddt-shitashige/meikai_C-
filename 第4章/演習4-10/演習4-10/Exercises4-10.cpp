/**
 * @file Exerises4-10.cpp
 * @brief	List4-15�̂悤�ɁAfloat�^�̕ϐ���0.0����1.0�܂�0.001�����₵�Ă����l�q��List4-16�̂悤�ɁA
 *			int�^�̕ϐ���0����1000�܂ŃC���N�������g�����l��1000�Ŋ������l�����߂�l�q���A���ɕ��ׂĕ\������v���O�������쐬����B
 * @author shitashige
 * @date 20200216
 */


#include <iostream>
#include<iomanip>

<<<<<<< HEAD
 /**
  * @fn
  * ���C���֐�
  * @brief �C���N�������g��������\������֐�
  * @return 0:����I��
  */
int main() {

	float floatsSum = 0;	// float�^�̑������l
=======
/**
 * @fn
 * ���C���֐�
 * @brief �C���N�������g��������\������֐�
 * @return 0:����I��
 */
int main() {

	float floatsSum=0;	// float�^�̑������l
>>>>>>> b43ba42f5974634951db7266696f60b0145ef646

	/* �e���v���[�g�o�� */
	std::cout << "  float      int\n------------------\n";

	/* 1000�񃋁[�v */
<<<<<<< HEAD
	for (int i = 0; i <= 1000; i++) {
		/* ���l�̌�����6���ɂ��Ă����āA���l�o�� */
		std::cout << std::fixed << std::setprecision(6) << floatsSum << "   " << static_cast<float>(i) / 1000 << "\n";
		/* float�^�̑������l��0.001���� */
		floatsSum += 0.001F;
=======
	for(int i=0;i<=1000;i++){
		/* ���l�̌�����6���ɂ��Ă����āA���l�o�� */
		std::cout<<std::fixed<<std::setprecision(6) << floatsSum<<"   "<<static_cast<float>(i)/1000<<"\n";
		/* float�^�̑������l��0.001���� */
		floatsSum+=0.001F;
>>>>>>> b43ba42f5974634951db7266696f60b0145ef646
	}
	return 0;
}