/**
 * @file Exerises6-4.cpp
 * @brief ‰‰K6-4	”¼Œar‚Ì–ÊÏ‚ğ‹‚ß‚Ä•Ô‹p‚·‚éŠÖ”circ_area‚ğì¬‚¹‚æB‰~ü—¦‚Í3.14‚Æ‚·‚éB
					int circ_aarea(double r){ ... }
 * @author shitashige
 * @date 20200315
 */



#include <iostream>

 /**
   * @fn
   * ‰~‚Ì–ÊÏ‚ğ‹‚ß‚éŠÖ”
   * @brief ‰~‚Ì–ÊÏ‚ğ‹‚ß‚é
   * @param[in] r ”¼Œa
   * @return Å¬’l
   */
double circ_area(double r) {
	const double pie = 3.14; // ‰~ü—¦

	/* –ÊÏ‚ğ•Ô‚· */
	return r*r*pie;
}


/**
  * @fn
  * ƒƒCƒ“ŠÖ”
  * @brief ‰~‚Ì–ÊÏ‚ğ‹‚ß‚éŠÖ”
  * @return 0:³íI—¹
  */
int main() {

	int inputNumber =  0 ;	// “ü—Í”’l
	double area = 0;	// –ÊÏ

	/* “ü—Í‘£‚µ•\¦ */
	std::cout << "”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n";

	/* ”’l“ü—Í */
	std::cin >> inputNumber;

	/* Å¬’l”»’è”»’è */
	area = circ_area(inputNumber);

	/* Œ‹‰Ê•\¦ */
	std::cout << "‰~‚Ì–ÊÏ‚Í" << area << "‚Å‚·B\n";

	return 0;
}
