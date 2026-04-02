# Assignment 1

### Amsal Anugerah Mulia Saragih | 5024251073

---
## Deskripsi
Program dimodifikasi dengan mengisi tiga fungsi utama, yaitu menghitung umur dalam tahun, menghitung umur dalam bulan, dan menentukan hari dari tanggal yang diinput. Perhitungan umur disesuaikan dengan tanggal saat ini agar hasilnya akurat.

## Kegunaan Program

Program ini memiliki beberapa fungsi utama, yaitu:

1. Menghitung umur dalam satuan **tahun**
2. Menghitung umur dalam satuan **bulan**
3. Menentukan **hari lahir** berdasarkan tanggal yang diinput

Program ini berguna untuk:

* Mengetahui usia seseorang secara otomatis
* Menentukan hari lahir tanpa perlu kalender
* Melatih penggunaan fungsi dalam C++

---

## Penjelasan Fungsi

### 1. Fungsi `hitungUmurTahun`

Fungsi ini digunakan untuk menghitung umur dalam tahun dengan cara:

* Mengambil tanggal saat ini dari sistem
* Mengurangi tahun sekarang dengan tahun lahir
* Mengoreksi jika ulang tahun belum terjadi di tahun ini

---

### 2. Fungsi `hitungUmurBulan`

Fungsi ini menghitung umur dalam bulan dengan cara:

* Menghitung selisih tahun lalu dikonversi ke bulan
* Ditambah selisih bulan saat ini dengan bulan lahir

---

### 3. Fungsi `hitungHari`

Fungsi ini menentukan hari lahir menggunakan metode:

* **Zeller’s Congruence**
* Menghasilkan hari seperti Senin, Selasa, dll berdasarkan tanggal

---

## Cara Kerja Program

1. User memasukkan tanggal lahir (tanggal, bulan, tahun)
2. Program memproses data menggunakan 3 fungsi
3. Hasil ditampilkan berupa:

   * Umur dalam tahun
   * Umur dalam bulan
   * Hari lahir

---

## Contoh Input dan Output

### Input

```
Masukkan tanggal lahir (dd mm yyyy): 17 8 2005
```

### Output

```
Umur (tahun): 20
Umur (bulan): 248
Hari lahir: Rabu
```

*(Catatan: hasil umur tergantung tanggal saat program dijalankan)*



## Hasil
Program dapat menerima input tanggal lahir, kemudian menampilkan umur dalam tahun dan bulan, serta menunjukkan hari dalam minggu dari tanggal tersebut dengan benar.
