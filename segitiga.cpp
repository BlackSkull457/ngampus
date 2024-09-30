#include <stdio.h> 
//lib untuk menghitung akar
#include <cmath>
main ()
{
    //pendefinisian tipe variabel
    int a, c;
    float e, f, h;
    //pendefinisian variabel khusus yang akan diakarkan
    double b, d, g;
    //input variabel untuk mencari hipotenusa
    a = 5;
    b = 3;
    c = 2;
    //perhitungan akar
    d = sqrt(b);
    //perhitungan dengan rumus sisi alas/cosθ
    e = a/(d/c);
    //menampilkann hipotenusa atau sisi miring
    printf("sisi miring/hipotenusa = %f\n", e);
    //mencari sisi depan dengan rumus b^2=c^2-a^2
    f = (e*e)-(a*a);
    g = sqrt(f);
    //menampilkan sisi depan
    printf("sisi depan = %f\n", g);
    //mencari keliling menggunakan rumus s1+s2+s3
    h = a+e+g;
    //menampilkan keliling
    printf("Keliling segitiga nya adalah = %f\n", h);

    return 0;

}