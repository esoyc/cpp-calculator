#include <iostream>
using namespace std;

int main() {

	int islemNo;
	double sonuc, sayi1, sayi2;

	do {
	cout << "----- HESAP MAKINESI -----" << endl;
	cout << "1. toplama" << endl;
	cout << "2. cikarma" << endl;
	cout << "3. carpma" << endl;
	cout << "4. bolme" << endl;
	cout << "5. mod alma" << endl;
	cout << "6. programdan cikis yap" << endl;
	cout << "--------------------------" << endl;

	cout << "yapmak istediginiz islemin numarasini giriniz: ";
	cin >> islemNo;

	if (islemNo == 6) {
		cout << "cikis yapiliyor...";
		break;
	}

	if (islemNo < 1 || islemNo > 6) {
		cout << "Hata: gecersiz bir sayi girdiniz! Yeniden deneyin.\n" << endl;
		continue;
	}

	cout << "ilk sayiyi giriniz: ";
	cin >> sayi1;

	cout << "ikinci sayiyi giriniz: ";
	cin >> sayi2;

	if (islemNo == 1) {
		sonuc = sayi1 + sayi2;
		cout << sayi1 << " + " << sayi2 << " = " << sonuc << endl;
	}
	else if (islemNo == 2) {
		sonuc = sayi1 - sayi2;
		cout << sayi1 << " - " << sayi2 << " = " << sonuc << endl;
	}
	else if (islemNo == 3) {
		sonuc = sayi1 * sayi2;
		cout << sayi1 << " * " << sayi2 << " = " << sonuc << endl;
	}
	else if (islemNo == 4) {
		if (sayi2 == 0) {
			cout << "Hata: Bir sayi 0'a bolunemez!\n" << endl;
			continue;
		}
		sonuc = sayi1 / sayi2;
		cout << sayi1 << " / " << sayi2 << " = " << sonuc << endl;
	}
	else if (islemNo == 5) {
		if (int(sayi2) == 0) {
			cout << "Hata: Bir sayinin MOD 0'i alinamaz!\n" << endl;
			continue;
		}
		sonuc = int(sayi1) % int(sayi2);
		cout << int(sayi1) << " MOD " << int(sayi2) << " = " << sonuc << endl;
	}
	cout << endl;
	} while (islemNo != 6);

	return 0;
}
