#include <stdio.h> 
//lib untuk menghitung akar
#include <cmath>
main ()
{
    //pendefinisian tipe variabel
    int a;
    //pendefinisian variabel khusus yang akan berhubungan dengan akar
    double b, c, d, e, f;
    //input variabel untuk mencari hipotenusa
    a = 5;
    b = sqrt(3)/2;
    //perhitungan dengan rumus sisi alas/cosθ
    c = a/b;
    //menampilkann hipotenusa atau sisi miring
    printf("sisi miring/hipotenusa = %f\n", c);
    //mencari sisi depan dengan rumus b^2=c^2-a^2
    d = (c*c)-(a*a);
    e = sqrt(d);
    //menampilkan sisi depan
    printf("sisi depan = %f\n", e);
    //mencari keliling menggunakan rumus s1+s2+s3
    f = a+c+e;
    //menampilkan keliling
    printf("Keliling segitiga nya adalah = %f\n", f);

    return 0;

}
