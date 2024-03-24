#include <iostream>
using namespace std;

int herbs = 10;
int manaPotion = 50;
int hpPotion = 50;
string swords[20] = {"Dull Blade", "Mitsplitter Reforged", "Harran Geppakufutsu"}; 
int swordDamage[20] = {10, 150, 200}; 

int main() {

    int hp, mana;
    int baseDamage = 10;
    string equipsword = swords[0]; 

    cout << "           Status Karakter" << endl;
    cout << "========================================" << endl;

    cout << "Masukkan Hp : ";
    cin >> hp;
    cout << "Masukkan Mana : ";
    cin >> mana;

    cout << "========================================" << endl;

    while (true) {

        cout << endl << "       Masukkan Perintah Anda" << endl;
        cout << "========================================" << endl;
        cout << "1. Tampilkan Status" << endl;
        cout << "2. Gunakan Inventory" << endl;
        cout << "3. Keluar" << endl;

        int choice;
        cin >> choice;

        switch (choice) {

            case 1:
                // Tampilan character status
                cout << endl << "           STATUS KARAKTER        " << endl;
                cout << "========================================" << endl;
                cout << "HP : " << hp << endl;
                cout << "MANA : " << mana << endl;
                cout << "DAMAGE : " << baseDamage + swordDamage[0] << endl;
                cout << "SWORD : " << equipsword << endl;
                break;

            case 2:
                // Penggunaan inventory items
                cout << endl << "               INVENTORY        " << endl;
                cout << "========================================" << endl;
                cout << "Herbs : " << herbs << endl;
                cout << "Mana Potion : " << manaPotion << endl;
                cout << "Hp Potion : " << hpPotion << endl;
                cout << "SWORD : " << equipsword << endl;

                cout << endl << "**Pilih item yang ingin digunakan:**" << endl;
                cout << "1. Herbs (Memulihkan 10 HP)" << endl;
                cout << "2. Mana Potion (Memulihkan 20 Mana)" << endl;
                cout << "3. Hp Potion (Memulihkan 30 HP)" << endl;

                int itemChoice;
                cin >> itemChoice;

                switch (itemChoice) {

                    case 1:
                        if (herbs > 0) {
                            hp += 10;
                            herbs--;
                            cout << "HP +10! (Sisa Herbs: " << herbs << ")" << endl;
                        } else {
                            cout << "Herbs habis!" << endl;
                        }
                        break;

                    case 2:
                        if (manaPotion > 0) {
                            mana += 50;
                            manaPotion--;
                            cout << "Mana +20! (Sisa Mana Potion: " << manaPotion << ")" << endl;
                        } else {
                            cout << "Mana Potion habis!" << endl;
                        }
                        break;

                    case 3:
                        if (hpPotion > 0) {
                            hp += 50;
                            hpPotion--;
                            cout << "HP +30! (Sisa Hp Potion: " << hpPotion << ")" << endl;
                        } else {
                            cout << "Hp Potion habis!" << endl;
                        }
                        break;

                    default:
                        cout << "Pilihan tidak valid!" << endl;
                        break;
                }
                break;

            case 3:
                // Exit the game
                cout << "Terima kasih telah bermain!" << endl;
                return 0;

            default:
                cout << "Pilihan tidak valid!" << endl;
                break;
        }

        // Ganti Sword
        if (choice == 2) {
            cout << endl << "           Ganti Pedang" << endl;
            cout << "========================================" << endl;
            for (int i = 0; i < 3; i++) { 
                cout << i + 1 << ". " << swords[i] << endl;
            }
                int swordChoice;
                cout << "Pilih pedang: ";
                cin >> swordChoice;

        if (swordChoice >= 1 && swordChoice <= 3) {
            equipsword = swords[swordChoice - 1];
            baseDamage = swordDamage[swordChoice - 1]; 
            cout << "Pedang diganti menjadi " << equipsword << endl;
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }
    }
    }
        return 0;
}