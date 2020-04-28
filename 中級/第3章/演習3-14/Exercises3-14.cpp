/**
 * @file Exerises3-14.cpp
 * @brief 演習3-14　List3-13に示したクラスPerson型の配列をクイックソートアルゴリズムによってソートするプログラムを作成せよ。qsort関数を利用することなく、作成する事。
 * @author shitashige
 * @date 20200428
 */

#include<cstdlib>
#include<cstring>
#include<iostream>
#include<iomanip>

using namespace std;

class Person {
public:
	char name[10];	// 名前
	int height;	// 身長
	int weight;	// 体重
};


namespace {
	/**
	 * @fn
	 * @brief 値入れ替え関数
	 * @param x 入れ替えるポインタ
	 * @param y 入れ替えるポインタ
	 * @param n 大きさ
	 * @return 0:正常終了
	 */
	void memswap(void* x, void* y, size_t n) {
		unsigned char* a = reinterpret_cast<unsigned char*>(x);	// 型変換したポインタa
		unsigned char* b = reinterpret_cast<unsigned char*>(y);	// 型変換したポインタb
		/* 大きさが0になるまでループ */
		for (; n--; a++, b++) {
			/* 一時保存のcにaを入れる */
			unsigned char c = *a;
			/* 値入れ変え */
			*a = *b;
			/* 値入れ変え */
			*b = c;
		}
	}
}



/* Person型の比較関数(名前昇順) */
int npcmp(const Person* x, const Person* y) {
	return strcmp(x->name, y->name);
}
/* Person型の比較関数(身長昇順) */
int hpcmp(const Person* x, const Person* y) {
	return x->height<y->height ? -1 :x->height > y->height ? 1 : 0;
}

/* Person型の比較関数(体重降順) */
int wpcmp(const Person* x, const Person* y) {
	return x->weight<y->weight ? 1 : x->weight > y->weight ? -1 : 0;
}

/* no人分のデータを表示 */
void print_person(const Person x[], int no) {
	/* 人数分ループ */
	for (int i = 0; i < no; i++) {
		/* メッセージ表示 */
		cout << setw(10) << left << x[i].name << " " << x[i].height << "cm " << x[i].weight << "kg\n";
	}
}


/**
 * @fn
 * @brief メイン関数
 * @param base 並べ替え対象となる配列データへの先頭番地
 * @param num 並べ替え対象となる配列の要素数
 * @param size 並べ替え対象のデータ１つ分のバイト数
 * @param cmpFunc 並べ替えをするための大小比較用関数へのポインタ
 */
void Createqsort(void* base, size_t num, size_t size, int (*cmpFunc)(const void* n1, const void* n2)) {

	/* 要素が1以下ならリターン */
	if (num <= 1) {
		return;
	}
	int searchElement = (num / 2);	// 探索要素番号
	int maxElement = num;		// 最大要素
	int minElement = 0;		// 最小要素
	int result;	// 結果

	const char* target = reinterpret_cast<const char*>(base);	//対象物

	/* 自分が発見されるまでループ */
	while (true) {

		/* 配列の要素を左から探す */
		for (int i = 0; i < num; i++) {
			/* 数値比較 */
			result = cmpFunc(const_cast<void*>(reinterpret_cast<const void*>(&target[searchElement* size])),
				const_cast<void*>(reinterpret_cast<const void*>(&target[i * size])));

			/* 探索した要素の左側が大きかった場合の処理 */
			if (result <= 0) {
				/* 数値を保持 */
				maxElement = i;

				/* ループ脱出 */
				break;
			}
		}
		/* 配列の要素を右から探す */
		for (int i = num - 1; i >= 0; i--) {
			/* 数値比較 */
			result = cmpFunc(const_cast<void*>(reinterpret_cast<const void*>(&target[searchElement * size])),
				const_cast<void*>(reinterpret_cast<const void*>(&target[i * size])));

			/* 探索した要素の右側が小さかった場合の処理 */
			if (result >= 0) {
				/* 数値を保持 */
				minElement = i;
				/* ループ脱出 */
				break;
			}
		}
		/* 左側に大きいのがなかった場合、また、右側に小さいのが無かった場合に抜ける */
		if (maxElement == searchElement && minElement == searchElement) {
			break;
		}
		/* 自身が含まれていた場合 */
		if (searchElement == minElement) {
			/* 探索要素番号更新 */
			searchElement = maxElement;
		}
		/* 自身が含まれていた場合 */
		else if (searchElement == maxElement) {
			/* 探索要素番号更新 */
			searchElement = minElement;
		}



		/* 値入れ替え */
		memswap(const_cast<void*>(reinterpret_cast<const void*>(&target[maxElement*size])),
			const_cast<void*>(reinterpret_cast<const void*>(&target[minElement*size])), size);
	}
	/* もう一度左側の処理を行なう */
	if(minElement!=1)
		Createqsort(const_cast<void*>(reinterpret_cast<const void*>(target)), maxElement + 1, size, cmpFunc);
	/* 右側の処理を行なう */
	if(num-maxElement!=1)
		Createqsort(const_cast<void*>(reinterpret_cast<const void*>(target + ((maxElement) * size))), num-minElement, size, cmpFunc);

}


/**
 * @fn
 * @brief メイン関数
 * @return 0:正常終了
 */
int main() {
	/* 人間データ */
	Person x[] = { {"Shibata",170,52},
					{"Takaoka",180,70},
					{"Nangou",172,63},
					{"Sugiyama",165,50},
				};

	int nx = sizeof(x) / sizeof(x[0]);	// 配列xの要素数

	/* 文字列出力 */
	puts("ソート前");

	/* 人数分のデータ表示 */
	print_person(x, nx);

	/* 名前昇順にソート */
	qsort(x, nx, sizeof(Person), reinterpret_cast<int(*)(const void*, const void*)>(npcmp));

	/* メッセージ表示 */
	cout << "名前昇順ソート後\n";
	
	/* 人数分のデータ表示 */
	print_person(x, nx);

	/* 身長昇順にソート */
	qsort(x, nx, sizeof(Person), reinterpret_cast<int(*)(const void*, const void*)>(hpcmp));

	/* メッセージ表示 */
	cout << "身長昇順ソート後\n";

	/* 人数分のデータ表示 */
	print_person(x, nx);

	/* 体重昇順にソート */
	qsort(x, nx, sizeof(Person), reinterpret_cast<int(*)(const void*, const void*)>(wpcmp));

	/* メッセージ表示 */
	cout << "体重昇順ソート後\n";

	/* 人数分のデータ表示 */
	print_person(x, nx);

	/* 名前昇順にソート */
	Createqsort(x, nx, sizeof(Person), reinterpret_cast<int(*)(const void*, const void*)>(npcmp));

	/* メッセージ表示 */
	cout << "自作名前昇順ソート後\n";

	/* 人数分のデータ表示 */
	print_person(x, nx);

	/* 身長昇順にソート */
	Createqsort(x, nx, sizeof(Person), reinterpret_cast<int(*)(const void*, const void*)>(hpcmp));

	/* メッセージ表示 */
	cout << "自作身長昇順ソート後\n";

	/* 人数分のデータ表示 */
	print_person(x, nx);

	/* 体重昇順にソート */
	Createqsort(x, nx, sizeof(Person), reinterpret_cast<int(*)(const void*, const void*)>(wpcmp));

	/* メッセージ表示 */
	cout << "自作体重昇順ソート後\n";

	/* 人数分のデータ表示 */
	print_person(x, nx);



}