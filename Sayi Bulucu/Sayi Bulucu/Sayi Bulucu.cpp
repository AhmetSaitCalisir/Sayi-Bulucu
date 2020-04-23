
#include <iostream>

int main()
{
    char GelenDeger[100];
    char Kelime[10];
    printf("Sayiyi Giriniz: ");
    fgets(GelenDeger, 100, stdin);
    memset(Kelime, 0, 10);
    int Harf = 0;
    int SayiDegeri=0;
    int GeciciDeger = 0;
    int GeciciDegerMilyon = 0;
    int GeciciDegerBin = 0;
    for (int i = 0; i < strlen(GelenDeger); i++)
    {
        if (GelenDeger[i] == ' ' || i==strlen(GelenDeger)-1)
        {
            if (strcmp(Kelime, "Bir") == 0)
            {
                GeciciDeger += 1;
            }
            else if (strcmp(Kelime, "Iki") == 0)
            {
                GeciciDeger += 2;
            }
            else if (strcmp(Kelime, "Uc") == 0)
            {
                GeciciDeger += 3;
            }
            else if (strcmp(Kelime, "Dort") == 0)
            {
                GeciciDeger += 4;
            }
            else if (strcmp(Kelime, "Bes") == 0)
            {
                GeciciDeger += 5;
            }
            else if (strcmp(Kelime, "Alti") == 0)
            {
                GeciciDeger += 6;
            }
            else if (strcmp(Kelime, "Yedi") == 0)
            {
                GeciciDeger += 7;
            }
            else if (strcmp(Kelime, "Sekiz") == 0)
            {
                GeciciDeger += 8;
            }
            else if (strcmp(Kelime, "Dokuz") == 0)
            {
                GeciciDeger += 9;
            }
            else if (strcmp(Kelime, "On") == 0)
            {
                GeciciDeger += 10;
            }
            else if (strcmp(Kelime, "Yuz") == 0)
            {
                if (GeciciDeger<10)
                {
                    GeciciDeger = GeciciDeger * 100;
                }
                else
                {
                    GeciciDeger += 100;
                }
            }
            else if (strcmp(Kelime, "Bin") == 0)
            {
                GeciciDegerBin = GeciciDeger * 1000;
                GeciciDeger = 0;
            }
            else if (strcmp(Kelime, "Milyon") == 0)
            {
                GeciciDegerMilyon = GeciciDeger * 1000000;
                GeciciDeger = 0;
            }
            else if (strcmp(Kelime, "Yirmi") == 0)
            {
                GeciciDeger += 20;
            }
            else if (strcmp(Kelime, "Otuz") == 0)
            {
                GeciciDeger += 30;
            }
            else if (strcmp(Kelime, "Kirk") == 0)
            {
                GeciciDeger += 40;
            }
            else if (strcmp(Kelime, "Elli") == 0)
            {
                GeciciDeger += 50;
            }
            else if (strcmp(Kelime, "Altmis") == 0)
            {
                GeciciDeger += 60;
            }
            else if (strcmp(Kelime, "Yetmis") == 0)
            {
                GeciciDeger += 70;
            }
            else if (strcmp(Kelime, "Seksen") == 0)
            {
                GeciciDeger += 80;
            }
            else if (strcmp(Kelime, "Doksan") == 0)
            {
            GeciciDeger += 90;
            }
            Harf = 0;
            memset(Kelime, 0, 10);
        }
        else
        {
            Kelime[Harf] = GelenDeger[i];
            Harf = Harf + 1;
        }
    }
    SayiDegeri = GeciciDeger + GeciciDegerBin + GeciciDegerMilyon;
    printf("Sayiniz: %i \n", SayiDegeri);
    
    return 0;
}
