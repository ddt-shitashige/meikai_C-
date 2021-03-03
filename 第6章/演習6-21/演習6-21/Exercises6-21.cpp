/**
 * @file Exerises6-21.cpp
 * @brief ���K6-21	short�^����x�̐�Βl�Aint�^����x�̐�Βl...�����߂�ȉ��Ɏ������d��`���ꂽ�֐��Q���쐬����B
 *					short absolute(short x)
 *					int absolute(int x)
 *					long absolute(long x)
 *					float absolute(float x)
 *					double absolute(double x)
 *					long double absolute(long double x)
 * @author shitashige
 * @date 20200322
 */


#include <iostream>


 /**
   * @fn
   * absolute
   * @brief ��Βl�ԋp
   * @param x ���lx
   * @return
   */
short absolute(short x) {

	/* ���������l�������畄���𔽓]���ă��^�[�� */
	if (x < 0) {
		return -x;
	}

	return x;
}

/**
  * @fn
  * absolute
  * @brief ��Βl�ԋp
  * @param x ���lx
  * @return
  */
int absolute(int x) {

	/* ���������l�������畄���𔽓]���ă��^�[�� */
	if (x < 0) {
		return -x;
	}

	return x;
}


/**
  * @fn
  * absolute
  * @brief ��Βl�ԋp
  * @param x ���lx
  * @return
  */
long absolute(long x) {

	/* ���������l�������畄���𔽓]���ă��^�[�� */
	if (x < 0) {
		return -x;
	}

	return x;
}


/**
  * @fn
  * absolute
  * @brief ��Βl�ԋp
  * @param x ���lx
  * @return
  */
float absolute(float x) {

	/* ���������l�������畄���𔽓]���ă��^�[�� */
	if (x < 0) {
		return -x;
	}

	return x;
}


/**
  * @fn
  * absolute
  * @brief ��Βl�ԋp
  * @param x ���lx
  * @return
  */
double absolute(double x) {

	/* ���������l�������畄���𔽓]���ă��^�[�� */
	if (x < 0) {
		return -x;
	}

	return x;
}


/**
  * @fn
  * absolute
  * @brief ��Βl�ԋp
  * @param x ���lx
  * @return
  */
long double absolute(long double x) {

	/* ���������l�������畄���𔽓]���ă��^�[�� */
	if (x < 0) {
		return -x;
	}

	return x;
}



/**
 * @fn
 * main
 * @brief main�֐�
 * @return 0:����I��
 */
int main() {

	short shortNumber=-1234;	// short�^�̐��l
	int intNumber=-1234;	// int�^�̐��l
	long longNumber=-1234;	// long�^�̐��l
	float floatNumber=-1.234;	// float�^�̐��l
	double doubleNumber=-1.234;	// double�^�̐��l
	long double longDoubleNumber=-1.234; 	// longdounbe�^�̐��l

	/* ���ʏo�� */
	std::cout << "short�^��Βl�ϊ�:" << absolute(shortNumber) << "\nint�^��Βl�ϊ�:" << absolute(intNumber) << "\nlong�^��Βl�ϊ�:" << absolute(longNumber) << "\nfloat�^��Βl�ϊ�:" << absolute(floatNumber) << "\ndouble�^��Βl�ϊ�:" << absolute(doubleNumber) << "\nlongdouble�^��Βl�ϊ�:" << absolute(longDoubleNumber);

	return 0;
}