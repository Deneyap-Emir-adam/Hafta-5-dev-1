#include <iostream>
using namespace std;

int main()
{
    float sayi1, sayi2;
    char islem;

    cout << "Birinci Sayiyi Girin:\n";
    cin >> sayi1;
    cout << "Ikinci Sayiyi Girin:\n";
    cin >> sayi2;
    cout << "Islemi Girin Girin:\n";
    cin >> islem;

    switch (islem)
    {
    case '+':
        cout << "Toplama islemi sonucu: " << sayi1+sayi2 << " Sayisidir\n" << endl;
        break;
    default:
        cout << "Boyle bir operator tanimli degil";
        case '-':
        cout << "Cikarma islemi sonucu: " << sayi1-sayi2 << " Sayisidir\n" << endl;
        break;
            case '*':
        cout << "Toplama islemi sonucu: " << sayi1*sayi2 << " Sayisidir\n" << endl;
        break;
            case '/':
        cout << "Toplama islemi sonucu: " << sayi1/sayi2 << " Sayisidir\n" << endl;
        break;
            case '%':
   break; }

    return 0;
}
