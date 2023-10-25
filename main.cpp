#include <iostream>

using namespace std;

class islemler
{
    public:
    int a;
    int b;
    
    void inputs(int a, int b)
    {
        this->a = a; // Sınıfın üye değişkenlerini girdilerle güncelle
        this->b = b;
    }

    int sum()
    {
        return a + b;
    }

    int difference()
    {
        return a - b;
    }

    int division()
    {
        if (b != 0) // Sıfıra bölünmeyi kontrol et
            return a / b;
        else
        {
            cout << "Bölme işlemi tanımsız." << endl;
            return 0; // İşlem tanımsızsa sıfır dön
        }
    }

    int average()
    {
        return (a + b) / 2;
    }
};

int main()
{
    islemler myIslemler;
    
    myIslemler.inputs(100, 5);
    
    int toplam = myIslemler.sum();
    int fark = myIslemler.difference();
    int bolum = myIslemler.division();
    int ortalama = myIslemler.average();
    
    cout << "Toplam: " << toplam << endl;
    cout << "Fark: " << fark << endl;
    cout << "Bölme: " << bolum << endl;
    cout << "Ortalama: " << ortalama << endl;
    
    return 0;
}
