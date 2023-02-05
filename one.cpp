#include <iostream>
#include <string>
#include <math.h>

using namespace std;
 
int main()
{
  int pilihan;
  char ulang;
  do
  {
    cout << "-----------------------------------------" << endl;
    cout << "* ONE! program math solver buatan Fadel *" << endl;
    cout << "-----------------------------------------" << endl;
    cout << endl;
    cout << "---------- luas bangun datar ------------" << endl;
    cout << endl;
    cout << "1. luas segitiga" << endl;
    cout << "2. luas persegi panjang" << endl;
    cout << "3. luas persegi" << endl;
    cout << "4. luas lingkaran" << endl;
    cout << "5. luas jajar genjang" << endl;
    cout << endl;
    cout << "--------- volume bangun ruang -----------" << endl;
    cout << endl;
    cout << "6. volume kerucut" << endl;
    cout << "7. volume balok" << endl;
    cout << "8. volume kubus" << endl;
    cout << "9. volume bola" << endl;
    cout << "10. volume limas segi empat" << endl;
    cout << endl;
    cout << "-------- per kuadratan duniawi ---------" << endl;
    cout << endl;
    cout << "11. diskriminan" << endl;
    cout << endl;
    cout << "----------------------------------------" << endl;
    cout << endl;
    cout << endl;
    cout << "Pilihan anda: ";
    cout << endl;

    cin >> pilihan;
 
    switch(pilihan){
    case 1:{
        double a, b, c;
        cout << "masukkan nilai alas segitiga : " << endl;
        cin >> a ;
        cout << endl;
        cout << "masukkan nilai tinggi segitiga : " << endl;
        cin >> b ;
        cout << endl;
        c = a*b / 2;
        if ( a, b <= 0){
            cout << "input tidak valid !" << endl;
            break;
        }
        cout << "luas segitiganya adalah " << c << endl;
        cout << endl;
        cout << "---------------- cara ---------------" << endl;
        cout << endl;
        cout << "alas x tinggi / 2" << endl;
        cout << endl;
        cout << a << " x " << b << " / 2 = " << c << endl;
        cout << endl;
        cout << "-------------------------------------" << endl;
        break;
    }
    case 2:{
        double a, b, c;
        cout << "masukkan nilai panjang sisi persegi panjang : " << endl;
        cin >> a ;
        cout << endl;
        cout << "masukkan nilai lebar sisi persegi panjang : " << endl;
        cin >> b ;
        cout << endl;
        c = a*b ;
        if ( a, b <= 0){
            cout << "input tidak valid !" << endl;
            break;
        }
        cout << "luas persegi panjangnya adalah : " << c << endl;
        cout << endl;
        cout << "---------------- cara ---------------" << endl;
        cout << endl;
        cout << "panjang x lebar " << endl;
        cout << endl;
        cout << a << " x " << b << " = " << c << endl;
        cout << endl;
        cout << "-------------------------------------" << endl;
        break;
    }
    case 3:
        {
        double a, b ;
        cout << "masukkan nilai panjang sisi persegi : " << endl;
        cin >> a ;
        cout << endl;
        b = a*a ;
        if ( a <= 0){
            cout << "input tidak valid !" << endl;
            break;
        }
        cout << "luas perseginya adalah : " << b << endl;
        cout << endl;
        cout << "---------------- cara ---------------" << endl;
        cout << endl;
        cout << "sisi x sisi " << endl;
        cout << endl;
        cout << a << " x " << a << " = " << b << endl;
        cout << endl;
        cout << "-------------------------------------" << endl;
        break;
    }
    case 4:{
        double a, b ;
        cout << "masukkan nilai jari jari lingkaran : " << endl;
        cin >> a ;
        cout << endl;

        b = ((a*a)*22)/7 ;
        if ( a <= 0){
            cout << "input tidak valid !" << endl;
            break;
        }
        cout << "luas lingakrannya adalah : " << b << endl;
        cout << endl;
        cout << "---------------- cara ---------------" << endl;
        cout << endl;
        cout << " π x r x r " << endl;
        cout << endl;
        cout << " 22/7 x " << a << " x " << a << " = " << b << endl;
        cout << endl;
        cout << "-------------------------------------" << endl;
        break;
    }
    case 5:{
        double a, b, c;
        cout << "masukkan nilai alas jajar genjang : " << endl;
        cin >> a ;
        cout << endl;
        cout << "masukkan nilai tinggi jajar genjang : " << endl;
        cin >> b ;
        cout << endl;
        c = a*b ;
        if ( a, b <= 0){
            cout << "input tidak valid !" << endl;
            break;
        }
        cout << "luas jajar genjangnya adalah " << c << endl;
        cout << endl;
        cout << "---------------- cara ---------------" << endl;
        cout << endl;
        cout << "alas x tinggi" << endl;
        cout << endl;
        cout << a << " x " << b << " = " << c << endl;
        cout << endl;
        cout << "-------------------------------------" << endl;
        break;
    }
    case 6:{
        float a, b, c ;
        cout << "masukkan nilai jari jari alas kerucut : " << endl;
        cin >> a ;
        cout << endl;
        cout << "masukkan nilai tinggi kerucut : " << endl;
        cin >> b ;
        cout << endl;
        c = 0.33*3.14*a*a*b ;
        if ( a, b <= 0){
            cout << "input tidak valid !" << endl;
            break;
        }
        cout << "volume kerucutnya adalah " << c << endl;
        cout << endl;
        cout << "---------------- cara ---------------" << endl;
        cout << endl;
        cout << "1/3 x π x r x r x t " << endl;
        cout << endl;
        cout << " 1/3 x 22/7 x " << a << " x " << a << " x " << b << " = " << c << endl;
        cout << endl;
        cout << "-------------------------------------" << endl;
        break;
    }
    case 7:{
        double a, b, c, d ;
        cout << "masukkan nilai panjang balok : " << endl;
        cin >> a ;
        cout << endl;
        cout << "masukkan nilai lebar balok : " << endl;
        cin >> b ;
        cout << "masukkan nilai tinggi balok : " << endl;
        cin >> c ;
        cout << endl;
        d = a*b*c ;
        if ( a, b, c <= 0){
            cout << "input tidak valid !" << endl;
            break;
        }
        cout << "volume baloknya adalah " << d << endl;
        cout << endl;
        cout << "---------------- cara ---------------" << endl;
        cout << endl;
        cout << "panjang x lebar x tinggi " << endl;
        cout << endl;
        cout << a << " x " << b << " x " << c << " = " << d << endl;
        cout << endl;
        cout << "-------------------------------------" << endl;
        break;
    }
    case 8:
        {
        double a, b ;
        cout << "masukkan nilai panjang rusuk : " << endl;
        cin >> a ;
        cout << endl;
        b = a*a*a ;
        if ( a <= 0){
            cout << "input tidak valid !" << endl;
            break;
        }
        cout << "volume rusuknya adalah : " << b << endl;
        cout << endl;
        cout << "---------------- cara ---------------" << endl;
        cout << endl;
        cout << "sisi x sisi x sisi " << endl;
        cout << endl;
        cout << a << " x " << a << " x " << a << " = " << b << endl;
        cout << endl;
        cout << "-------------------------------------" << endl;
        break;
    }
    case 9:{
        float a, b ;
        cout << "masukkan nilai panjang jari jari bola : " << endl;
        cin >> a ;
        cout << endl;
        b = ((1.33*22)/7)*a*a*a ;
        if ( a <= 0){
            cout << "input tidak valid !" << endl;
            break;
        }
        cout << "volume bolanya adalah " << b << endl;
        cout << endl;
        cout << "---------------- cara ---------------" << endl;
        cout << endl;
        cout << " 4/3 x 22/7 x r^3 " << endl;
        cout << endl;
        cout << " 4/3 x 22/7 x " << a <<"^3 " << " = " << b << endl;
        cout << endl;
        cout << "-------------------------------------" << endl;
        break;
    }
    case 10:{
        double a, b, c ;
        cout << "masukkan nilai panjang alas limas segi empat : " << endl;
        cin >> a ;
        cout << "masukkan nilai tinggi limas segi empat : " << endl;
        cin >> b ;
        cout << endl;
        c = 0.33*a*a*b ;
        if ( a, b <= 0){
            cout << "input tidak valid !" << endl;
            break;
        }
        cout << "volume limas segi empatnya adalah : " << c << endl;
        cout << endl;
        cout << "---------------- cara ---------------" << endl;
        cout << endl;
        cout << " 1/3 x (sisi x sisi) x tinggi " << endl;
        cout << endl;
        cout << " 1/3 x " << a <<" x " << a << " x " << b << " = " << c << endl;
        cout << endl;
        cout << "-------------------------------------" << endl;
        break;
    }
    case 11:{
       int a, b, c, D;
       float x1, x2;
 
       cout << "Format persamaan: ax^2 + bx + c = 0 " << endl;
       cout << "Input nilai a: ";
       cin >> a;
       cout << "Input nilai b: ";
       cin >> b;
       cout << "Input nilai c: ";
       cin >> c;
       cout << endl;
 
       D = (b*b)-(4*a*c);
       cout << "Diskriminan = " << D;
 
       if (D>0){
       cout << " (akar real dan berbeda)" <<endl;
 
       x1 = (-b + sqrt(D)) / (2*a);
       x2 = (-b - sqrt(D)) / (2*a);
 
       cout << "x1 = " << x1 <<endl;
       cout << "x2 = " << x2 <<endl;
      }
          else if (D==0){
            cout << " (akar real dan sama)" <<endl;
             
             x1 = x2 = (-b + sqrt(D)) / (2*a);
            
             cout << "x1 = " << x1 <<endl;
             cout << "x2 = " << x2 <<endl;
              }
       else {
           cout << " (akar tidak real / imajiner)" <<endl;
                 }
     break;
    }

    default:
        cout << "opsi tidak tersedia" << endl;
    }
    cout << endl;
 
    cout << "Ingin memilih opsi lain (y/t)? ";
    cin >> ulang;
    cout << endl;
  }
 
  while (ulang!= 't');
 
  cout << "keluar....";
 
  cout << endl;
  return 0; 
}