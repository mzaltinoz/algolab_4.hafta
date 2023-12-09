#include <iostream>

int main() {
    int urunKodu;
    double fiyat;
    
    std::cout << "Kitap: 0\nTemel gida: 1\nLuks: 2\n\nUrun kodunu giriniz: ";
    std::cin >> urunKodu;

    if (urunKodu < 0 || urunKodu > 2) {
        std::cout << "Gecersiz urun kodu!" << std::endl;
        return 1; 
    }
    
    std::cout << "Urun fiyatini giriniz: ";
    std::cin >> fiyat;

    switch (urunKodu) {
        case 0:
            fiyat += fiyat * 0.04; 
            break;
        case 1:
            fiyat += fiyat * 0.056; 
            break;
        case 2:
            fiyat += fiyat * 0.196; 
            break;
    }

    std::cout << "Etiket fiyati: " << fiyat << " TL" << std::endl;

    return 0;
}