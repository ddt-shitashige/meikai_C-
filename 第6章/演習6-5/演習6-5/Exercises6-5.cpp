/**
 * @file Exerises6-5.cpp
 * @brief ‰‰K6-5	1‚©‚çn‚Ü‚Å‚Ì‘S®”‚Ì˜a‚ğ‹‚ß‚Ä•Ô‹p‚·‚éŠÖ”sumup‚ğì¬‚¹‚æB
					int sumup(int n)
 * @author shitashige
 * @date 20200316
 */



#include <iostream>

 /**
   * @fn
   * ®”‚Ì˜a‚ğ‹‚ß‚éŠÖ”
   * @brief ®”‚Ì˜a‚ğ‹‚ß‚é
   * @param[in] n ‰ÁZ‚·‚é®”
   * @return 1‚©‚çn‚Ü‚Å‚Ì˜a
   */
int sumup(int n) {

	int sumNumber = 0;	// ‰ÁZ”’l

	/* n‰ñ”‰ÁZ */
	for (int i = 0; i <= n; i++) {
		/* ‰ÁZ */
		sumNumber += i;
	}
	return sumNumber;
}


/**
  * @fn
  * ƒƒCƒ“ŠÖ”
  * @brief ‰~‚Ì–ÊÏ‚ğ‹‚ß‚éŠÖ”
  * @return 0:³íI—¹
  */
int main() {

	int inputNumber = 0;	// “ü—Í”’l
	int sumNumber = 0;	// ‰ÁZ”’l

	/* “ü—Í‘£‚µ•\¦ */
	std::cout << "”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n";

	/* ”’l“ü—Í */
	std::cin >> inputNumber;

	/* Å¬’l”»’è”»’è */
	sumNumber = sumup(inputNumber);

	/* Œ‹‰Ê•\¦ */
	std::cout << "‘S®”‚Ì˜a‚Í" << sumNumber << "‚Å‚·B\n";

	return 0;
}
