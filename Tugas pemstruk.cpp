#include <stdio.h>
//variabel global
int keluar = 0;
//fungsi menghapus log
void logclear() {
     for (int i = 0; i < 40; i++) { 
    printf("\033[F"); 
    printf("\033[2K");
}
}
//fungsi untuk kembali ke menu atau keluar
void kembaliataukeluar() {
    int pilihan;
    printf("Input 1 untuk kembali ke menu dan pilih angka selain 1 untuk keluar.\n");
    scanf("%d", &pilihan);
    if (pilihan == 1) {
        logclear();
    } else {
        keluar = 1;
        logclear();
    }
    
}
// pilihan
//menghitung luas segitiga
void luassegitiga() {
    float a, b, c;

    printf("Menghitung luas segitiga.\n");

    printf("Input alas: ");
    scanf("%f", &a);

    printf("Input tinggi: ");
    scanf("%f", &b);

    c = (a * b) / 2;

    printf("Luas segitiga adalah: %.2f\n", c);
    //pilihan keluar atau menu
    kembaliataukeluar();
}

//menghitung sisa pembagian
void sisapembagian() {
    int a, b, c;
    printf("Menghitung sisa pembagian.\n");

    printf("Input nilai 1: ");
    scanf("%d", &a);

    printf("Input nilai 2: ");
    scanf("%d", &b);

    c = a % b;

    printf("Sisa pembagian nilai 1 dan 2 adalah: %d\n", c);
    //pilihan keluar atau menu
    kembaliataukeluar();
    }
    

//menghitung luas lingkaran
void luaslingkaran() {
    float a, b;

    printf("Menghitung luas lingkaran.\n");

    printf("Input jari-jari lingkaran: ");
    scanf("%f", &a);

    b = 3.14 * (a * a);

    printf("Luas lingkaran adalah: %.2f\n", b);
    //pilihan keluar atau menu
    kembaliataukeluar();
}

//menghitung volume tabung
void volumetabung() {
    float a, b, c;

    printf("Menghitung volume tabung.\n");

    printf("Input jari-jari lingkaran: ");
    scanf("%f", &a);

    printf("Input tinggi tabung: ");
    scanf("%f", &b);

    c = 3.14 * (a * a) * b;

    printf("Volume tabung adalah: %.2f\n", c);
    //pilihan keluar atau menu
    kembaliataukeluar();
}

//menghitung volume limas segi 4
void volumelimassegi4() {
    float a, b, c, d;

    printf("Menghitung volume limas segi 4.\n");

    printf("Input luas alas: ");
    scanf("%f", &a);

    printf("Input tinggi: ");
    scanf("%f", &b);

    c = (a * b) / 3;

    printf("Volume limas segi 4 adalah: %.2f\n", c);
    //pilihan keluar atau menu
    kembaliataukeluar();
}

// menghitung and, or, xor, not
void andorxornot() {
    int a, b, c, d, e, f, binera, binerb;
    //validasi bahwa user telah menginput secara benar
    int validasi_a = 0;
    int validasi_b = 0;
    printf("Operasi AND, OR, XOR, dan NOT.\n");
    //mengulangi ketika input user belum sesuai
    do
    {
        printf("Input nilai A: ");
        scanf("%d", &binera);
        //limitasi untuk input hanya 1-0
        if (binera==1) {
            a = 1;
            validasi_a = 1;
        } else if (binera==0) {
            a = 0;
            validasi_a = 1;
        } else {
            printf("Input harus angka 1 dan 0 saja\n");
        }   
    } while (validasi_a == 0);
    
    
    //mengulangi ketika input user belum sesuai
    do
    {
        printf("Input nilai B: ");
        scanf("%d", &binerb);
         //limitasi untuk input hanya 1-0
        if (binerb==1) {
            b = 1;
            validasi_b = 1;
        } else if (binerb==0) {
            b = 0;
            validasi_b = 1;
        } else {
            printf("Input harus angka 1 dan 0 saja\n");
        }  
    } while ( validasi_b == 0);
    
    
    // Menampilkan A AND B
    c = a & b;
    printf("Nilai A AND B adalah: %d\n", c);

    // Output OR
    d = a | b;
    printf("Nilai A OR B adalah: %d\n", d);

    // Output XOR
    e = a ^ b;
    printf("Nilai A XOR B adalah: %d\n", e);

    // Output NOT
    f = !a;
    printf("Nilai NOT A adalah: %d\n", f);
    //pilihan keluar atau menu
    kembaliataukeluar();    
}

int main() {
    int pilihan;

    do {
        // Display menu
        printf("\nInput nomor pilihan.\n");
        printf("1. Menghitung Luas Segitiga\n");
        printf("2. Menghitung Sisa Pembagian\n");
        printf("3. Menghitung Luas Lingkaran\n");
        printf("4. Menghitung Volume Tabung\n");
        printf("5. Menghitung Volume Limas Segi 4\n");
        printf("6. Menghitung AND, OR, XOR, dan NOT\n");
        printf("7. Keluar\n");
        printf("Input pilihanmu: ");
        scanf("%d", &pilihan);
        //menghapus history
        logclear();
        // pilihan
        switch(pilihan) {
            case 1:
                luassegitiga();
                break;
            case 2:
                sisapembagian();
                break;
            case 3:
                luaslingkaran();
                break;
            case 4:
                volumetabung();
                break;
            case 5:
                volumelimassegi4();
                break;
            case 6:
                andorxornot();
                break;
            case 7:
                keluar = 1;
                printf("Keluar dari program...\n");
                break;
            default:
                printf("Pilihan tidak valid, coba input angka 1-7.\n");
                break;
        }
    } while (keluar == 0);

    return 0;
}