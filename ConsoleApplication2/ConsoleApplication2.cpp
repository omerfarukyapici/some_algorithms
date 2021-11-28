#include <iostream>
#include <cmath>
#include <fstream>  
#include <string>

using namespace std;




int main() 
{

    //Test ..

    int testMessage();
    {
        std::cout << "\nOmer Faruk Yapici'nin Bilgisayarindan selamlar. " << endl;
    }
   


    //Klavyeden girilen 2 sayının toplamını, bölümünü, çarpımını yazdıran program.


   /*
    int ikiSayininDegeri();
    {
        int numberOne;
        int numberTwo;


        std::cout<< "Lutfen ilk sayiyi giriniz!\n";
        cin >> numberOne;
        std::cout << "Lutfen ikinci sayiyi giriniz!\n";
        cin >> numberTwo;
        int toplam = numberOne + numberTwo;
        int carpim = numberOne * numberTwo;
        int bolme = numberOne / numberTwo;
        std::cout << "\nYazdiginiz sayilarin toplami :" << toplam;
        std::cout << "\nYazdiginiz sayilarin carpimi :" << carpim;
        std::cout << "\nYazdiginiz sayilarin bolumu :" << bolme;

    }
   */
    


    //Bir öğrencinin Ödev, Vize ve Final notunu alıp dönem notunu hesaplayan programı yazınız.

    
    int donemSonuNotu();
    {
        int odevNotu,
            finalNotu,
            vizeNotu,
            donemSonuNotu;
        std::cout << "\nOdev notunu giriniz ";
        cin >> odevNotu;
        std::cout <<"\nVize notunu giriniz ";
        cin >> vizeNotu;
        std::cout << "\nFinal notunu giriniz ";
        cin >> finalNotu;
        donemSonuNotu = 0.15 * odevNotu + 0.35 * vizeNotu + 0.50 * finalNotu;
        std::cout << "Donem sonu puaniniz : " << donemSonuNotu << endl;

    }
    



    /*
    Kullanıcıdan bir dikdörtgenin kısa ve uzun kenarlarını alan,
    dikdörtgenin çevresini ve alanını hesaplayarak ekrana yazdıran bir C++
    programı yazınız.
    */

    /*
    int dikdortgenAlanCevre();
    {
        int kisaKenar,
            uzunKenar,
            cevre,
            alan;

        std::cout << "Dikdortgenin kisa kenarini giriniz.";
        cin >> kisaKenar;
        std::cout << "\nDikdortgenin uzun kenarini giriniz.";
        cin >> uzunKenar;

        cevre = kisaKenar * 2 + uzunKenar * 2;
        alan = kisaKenar * uzunKenar;

        std::cout << "\nDikdortgeninizin cevre uzunlugu : " << cevre <<endl;
        std::cout << "\nDikdortgeninizin alan uzunlugu : " << alan <<endl;

    }
    */
    



    //İf else karar yapıları. (a,b,c,d ve degerleri) 

    /*
    int kararYapıları();
    {
        int a = 2;
        int b = 4;
        if (int sonuc1 = a == b)
        {
            std::cout << "\nA ve B birbirine esittir. : " <<sonuc1;
        }
        else
        {
            int sonuc2 = a == b;
            std::cout << "\nA ve B birbirine esit degildir. : " <<sonuc2;
        }
        if (a != b)
        {
            std::cout << "\nA ve B birbirine esit degildir.";
            //Some tricky hocam
            a = 4;
            if (a == b)
            {
                std::cout << "\nA ve B birbirine esittir.";
            }
        }
        else
        {
            std::cout << "\nA ve B birbirine esittir.";
        }

        int c = 4;
        int d = 23;
        if (!(c >= 23))
        {
            std::cout << "\nD C'den oldukca buyuk bir degere sahiptir.";
        }
    }
    */

    

    //Klavyeden girilen 3 adet sayının hangisinin büyük olduğunu bulan program   

    /*
    void enBuyukSayi();
    {
        int a,
            b,
            c,
            maks;
        std::cout << "\n Lutfen klavyeden 3 adet sayi giriniz.";
        cin >> a >> b >> c;
        if (a > b)
        {
            if (a > c)
            {
                maks = a;
            }
            else
            {
                maks = c;
             }
        }
        else
        {
            if (b > c)
            {
                maks = b;
            }
            else
            {
                maks = c;
            }
        }
        std::cout << "\nEn buyuk sayi : " << maks;
    }
    */
    

    //Klavyeden girilen 3 adet sayının hangisinin küçük olduğunu bulan program   

    /*
    void enKucukSayi();
    {
        int a,
            b,
            c,
            min;
        std::cout << "\n Lutfen klavyeden 3 adet sayi giriniz.";
        cin >> a >> b >> c;
        if (a < b)
        {
            if (a < c)
            {
                min = a;
            }
            else
            {
                min = c;
            }
        }
        else
        {
            if (b < c)
            {
                min = b;
            }
            else
            {
                min = c;
            }
        }
        std::cout << "\nEn kucuk sayi : " << min;
    }
    */
    


    
    // Some loop programs
    
    /*
    int donguler();
    {
        //For loop
        for (int a = 0; a < 101; a++)
        {
            std::cout<< "Merhaba Dunya\n";
        }
        
        //while loop
        int b = 0;
        while (b < 10)
        {
            std::cout<< "Hello World.\n";
            b++;
        }

        //Break - loop (Bu olay bir döngü içerisinde bir koşul sağlanınca duruyor devam etmiyor.)
        for (int c = 0; c < 20; c++)
        {
            if (c == 7)
                break;
            std::cout<<"Hello\n";
        }

        //Continue - loop (Bu olay ise bir döngü içerisinde bir koşul sağlanınca sadece yazıldığı koşulu atlayıp döngüsüne devam ediyor.)
        for (int yol = 0; yol < 10; yol++)
        {
            if (yol == 4)
                continue;
            cout << yol;
            
        }

        //Loop in the loop
        for (int yildiz = 0; yildiz < 10; yildiz++) 
        {
            cout << "Dongu calisti.";
            for (int asilYildiz = 0; asilYildiz < 11; asilYildiz++)
            {
                cout << "*";
            }
            cout<<endl;
        }


                
    }
    */
    
 
    //Fonksiyonlar

    

    //Sin cos karekok vs
    
    /*
    int matematikKutup();
    {
        cout << "Sin 45 = " << sin(45) << endl;
        cout << "Cos 0 = " << cos(0) << endl;
        cout << "Karekok(36) = " << sqrt(36) << endl;
        cout << "4 uzeri 5 = " << pow(4, 5) << endl;
        cin.get(); //Kullanicinin herhangi bir tuşa basmasi beklenir
    }
    */
    

    
    //Farklı veri tiplerini dönüştürmek static_cast
    
    /*
    int farkliVeriDonustur();
    {
        double ondalikSayi = 3.55;
        bool kosul = true;
        char karakter = 'a';
        cout << ondalikSayi << " " << kosul << " " << karakter;
        int sayi1, sayi2, sayi3;
        sayi1 = static_cast<int>(ondalikSayi);
        sayi2 = static_cast<int>(kosul);
        sayi3 = static_cast<int>(karakter);
        cout << endl << sayi1 << " " << sayi2 << " " << sayi3;
        return 0;
    }
    */
    


    /*
    Fonksiyona gönderilen iki tam sayıdan, birincinin ikinci 
    değere göre üssünü alan C++ fonksiyonunu tanımlayınız.
    */
    
    /*
    int usBul();
    {
        int sayi1, sayi2;
        cout << "Lutfen 2 sayi giriniz.";
        cin >> sayi1 >> sayi2;
        cout << "Girdiginiz ilk sayinin ikinci sayiya ussu : " << pow(sayi1, sayi2) << endl;
    }
    */
    
    

    //Dosya işlemleri
    
    //Make file with C++
    
    /*
    int dosyaOlusturma();
    {
        ofstream yeniDosya;
        yeniDosya.open("BenOlustum.txt");

        if (yeniDosya.is_open() == true)
        {
            yeniDosya << "Ben yeni dosyanin yeni cümlesiyim.";
        }

        yeniDosya.close();
        
    }
    */
    


    //Dosya okuma (programı çalıştırıp içeriği console'da görmek.)
    
    /*
    int dosyaOkuma();
    {
        fstream dosya;
        dosya.open("deneme.txt",ios::in);

        if (dosya.is_open() == true)
        {

            string veri;
            dosya >> veri;
            cout << veri;
        }
        
        
        dosya.close();
    }
    */
    

    return 0;
}

