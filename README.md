---
title: TP_PROGDAS2_Danish Al Fayyadh Sunarta_2406416951

---

# Tugas Pendahuluan - Dasar C
> Pembuat Soal: 
```
Nama  : Danish Al Fayyadh Sunarta
NPM   : 2406416951
```
---
## Part 1 : Teori

### 1. Banyak program C dimulai dengan preprocessor ```#include <stdio.h>``` yang memungkinkan penggunaan fungsi dari _library input output_ standar. Jelaskan fungsionalitas dan konten yang diberikan _library-library_ berikut!
#### A. stdio.h (10 pts)
library <stdio.h> menyediakan beberapa fungsi yang esensial untuk menjalankan program yang membutuhkan input dan output, data/variable types, dan beberapa macro. contoh konten yang disediakan yaitu tipe-tipe fungsi seperti fungsi int yang akan mengembalikan nilai dalam bentuk integer (bilangan bulat), fungsi void yang tidak mengembalikan nilai apapun, dan fungsi char yang akan mengembalikan nilai dalam bentuk string/character.


#### B. math.h (10 pts)
library <math.h> menyediakan beberapa fungsi untuk perhitungan matematika dan HUGE_VAL macro. salah satu konten yang disediakan adalah fungsi double yang dapat mengembalikan nilai dalam tipe double juga.


#### Referensi:
- tutorialspoint.com [Online]. Available: https://www.tutorialspoint.com/c_standard_library/stdio_h.htm. [Diakses: 11-Februari-2025]
- tutorialspoint.com [Online]. Available: https://www.tutorialspoint.com/c_standard_library/math_h.htm. [Diakses: 11-Februari-2025]
---
### 2. Bahasa C merupakan bahasa _statically typed_ yang berarti setiap variabel atau konstan harus memiliki tipe data yang dideklarasikan secara eksplisit. Sebutkan dan jelaskan setidaknya 5 (lima) tipe data dalam C serta _format specifier_ - nya masing masing! (20 pts)
---
- integer
digunakan untuk memasukkan nilai integer (bilangan bulat) pada sebuah memory address.
range: -2,147,483,648 -- 2,147,483,647
specifier: %d
syntax: int variable;

- character
digunakan untuk memasukkan nilai karakter pada sebuah memory address.
range: (-128 to 127) atau (0 to 255) (ASCII)
specifier: %c
syntax: char variable;

- float
digunakan untuk memasukkan nilai desimal atau eksponensial dengan single precision pada sebuah memory address.
range: 1.2E-38 -- 3.4E+38
specifier: %f
syntax: float variable;

- double
digunakan untuk memasukkan nilai desimal atau eksponensial dengan double precision pada sebuah memory address.
range: 1.7E-308 -- 1.7E+308
specifier: %lf
syntax: double variable;

- double
digunakan pada variabel yang tidak memiliki nilai. jika digunakan sebagai tipe fungsi, fungsi tersebut tidak akan mengembalikan nilai apapun. lebih sering digunakan sebagai tipe fungsi.
specifier: -
syntax: 
void variable;
void variable(){}

#### Referensi:
- geekforgeeks.org [Online]. Available: https://www.geeksforgeeks.org/data-types-in-c/. [Diakses: 11-Februari-2025]
---

### 3. _Escape sequence_ memungkinkan penggunaan karakter-karakter khusus. Sebutkan setidaknya 3 (tiga) _escape sequence_ dan kegunaannya! (15 pts)
---
- \n
mirip seperti enter, yaitu memindahkan kursor ke awal dari line berikutnya.

- \xhh
digunakan untuk merepresentasikan bilangan dalam bentuk hexadecimal.

- \ooo
digunakan untuk merepresentasikan bilangan dalam bentuk octal.

- \a
digunakan untuk menghasilkan bunyi alarm/bell/beep.

- \0
digunakan untuk merepresentasikan karakter NULL.

#### Referensi:
- geekforgeeks.org [Online]. Available: https://www.geeksforgeeks.org/escape-sequence-in-c/. [Diakses: 11-Februari-2025]
---

## Part 2 : Pemrograman 

### 4. Ryan sedang membuat kalkulator luas trapesium yang menerima sejumlah input dengan formula berikut:

$$
Luas = \frac{Alas + Atas}{2} \times Tinggi
$$

<center><img src="https://asset.kompas.com/data/photo/2021/02/27/603a6f6d963da.jpg" width="300 px"/></center>

### Ryan menghadapi beberapa masalah dalam programnya. Temukan, perbaiki, dan jelaskan kesalahan-kesalahan yang terdapat dalam program Ryan! (15 pts)
> <span style="color:green">Tidak Membutuhkan Referensi</span>

```c
#include <stdio.h>

int main()
{
    float alas, atas, tinggi;
    printf("Luas Trapesium\n");

    printf("Alas   : ");
    scanf("%f", &alas); // penambahan & sebelum alas agar value float tersimpan pada alamat memory dari variabel alas

    printf("Atas   : ");
    scanf("%f", &atas);

    printf("Tinggi : ");
    scanf("%f", &tinggi);

    float luas = ((alas + atas) * tinggi) / 2; // perbaikan dalam kurung agar perhitungannya tepat
    printf("---------\n");
    printf("Luas   : %.2f\n", luas); // menghapus & sebelum variabel luas agar menampilkan value dari variabel luas, bukan memory address dari variabel luas

    return 0;
}
```
> Ubah kode yang sudah ada, tambahkan penjelasan dalam bentuk _comments_ (komentar).


---

### 5. Buatlah sebuah program yang menerima tiga buah nilai: TP, CS1, dan CS2 lalu menghitung dan mengeluarkan nilai akhir sesuai dengan bobot yang ada dalam praktikum ini. Jika nilai akhir lebih kecil dari 55, hasilkan juga output "TIDAK LULUS". (30 pts)
> <span style="color:green">Tidak Membutuhkan Referensi</span>

#### Contoh output program:

![Contoh Lulus](https://i.imgur.com/F1zzP97.png)  

![Contoh Tidak Lulus](https://i.imgur.com/w64WLCC.png)  

---
```c
#include <stdio.h>

int main() {
    printf("Penghitung Nilai\n");

    float TP, CS1, CS2;
    printf("Tugas Pendahuluan   : ");  // input
    scanf("%f", &TP);
    printf("Case Study 1        : ");
    scanf("%f", &CS1);
    printf("Case Study 2        : ");
    scanf("%f", &CS2);
    printf("---------------------------\n");

    float mean;
    mean = (TP / 4) + (CS1 * 55 / 100) + (CS2 / 5);  // proses nilai
    printf("Nilai Modul         : %.2f\n", mean);
    if (mean < 55) {
        printf("TIDAK LULUS\n");  // pesan jika tidak lulus
    } 
    return 0;
}


```

#### Screenshot Program Berjalan:


---
![Screenshot 2025-02-11 173817](https://hackmd.io/_uploads/HJffFs_F1e.png)

![Screenshot 2025-02-11 173904](https://hackmd.io/_uploads/rkNQYjuFJe.png)
