<style>[c]{text-align:center}</style>

<div c=""><h3>

Laporan Proyek PAS Semester 5\
Menghitung Volume Kubus\
Menggunakan Bahasa Pemrograman C++

</h3></div c="">

<div c="">

![Lambang MTs Negeri 1 Lumajang](_assets/logo_mtsn.gif)

</div c="">

<div c="">

**Dikerjakan oleh :**

1\. Hilman Ahwas Adliyansyah\
2\. Mochammad Tegar Firdaus

</div c="">

<div c="">

<h3 style="margin-bottom:0.25em">MTs Negeri 1 Lumajang</h3>
<address style="font-style:normal">Jl. Citandui No. 75 Kel. Rogotrunan, Kec. Lumajang, Kab. Lumajang</address>

2023

</div c="">

------------------------------------------------------------------

<div c="">

# Kata Pengantar

</div c="">

Puji syukur kita panjatkan kehadirat Allah SWT yang telah memberikan rahmat serta hidayah-Nya sehingga kami bisa menyelesaikan tugas Laporan hasil pengamatan yang berjudul “Menghitung Volume Kubus Menggunakan Bahasa Pemrograman C++”. 

Terima kasih atas  Ustadzah Nurul Izza Rahmaniya selaku guru Informatika yang telah meluangkan waktunya untuk kami dan telah memberi saran dan masukan yang sangat membantu bagi kami untuk menyelesaikan laporan ini.

Di samping itu, kami berterima kasih kepada Ustadz Jailani S,Ag,Ma selaku Kepala Sekolah Madrasah Tsanawiyah Negeri 1 Lumajang dan ucap dari kami kepada pembaca yang membaca laporan ini.

Kami menyadari bahwa laporan hasil percobaan ini masih jauh dari kata sempurna, jadi kami sangat mengharapkan masukan dari para pembaca. Akhir kata, kami mengucapkan sekali lagi terima kasih kepada pembaca yang membaca laporan ini.

Penulis

------------------------------------------------------------------

<div c="">

# Tujuan

</div c="">

Adapun tujuan kami dengan proyek ini adalah untuk memenuhi tugas proyek mata pelajaran Informatika dan untuk mempelajari bahasa pemrograman C++ lebih dalam lagi.

------------------------------------------------------------------

<div c="">

# Laporan Proyek

</div c="">

## 1. Kajian Teori

### 1.1. Bahasa Pemrograman C++

C++ adalah salah satu bahasa pemrograman tertua di dunia. C++ merupakan fitur tambahan untuk bahasa pemrograman C. Artinya, kode C yang valid juga merupakan kode C++ yang valid pula.

Untuk menjalankan sebuah program C++, program tersebut harus melewati tahap _kompilasi_ supaya dapat dijalankan oleh komputer dengan performa maksimal. Ada banyak alat-alat kompilasi untuk C++ yang bisa Anda pilih, diantaranya GCC (_GNU Compiler Collection_) dan Microsoft Visual C++.

### 1.2. Bangun Ruang

Bangun ruang adalah bangun yang memiliki panjang, lebar, dan juga tinggi. Bangun ruang juga bisa disebut bangun tiga-dimensi. Contoh-contoh bangun ruang antara lain kubus, balok, bola, limas, kerucut, piramida, dan sebagainya.

Di proyek ini, kami akan menulis program C++ untuk menghitung volume kubus dengan informasi yang diberikan pengguna melalui _standard input_. Program ini kami tulis dengan dua cara, yaitu prosedural dan fungsional.

## 2. Alat yang Diperlukan

Alat-alat yang diperlukan hanyalah sebuah komputer dengan sistem operasi _Windows_, _Linux_, atau yang lainnya, sebuah alat kompilasi kode C++, dan _GNU make_. Kami menggunakan sistem operasi _Linux_ dan alat kompilasi GCC (_GNU Compiler Collection_) yang bebas dan sumber terbuka.

Untuk memasang di sistem Linux Debian atau Ubuntu, jalankan:

```
sudo apt install gcc g++ binutils make
```

## 3. Cara Kompilasi Program

Kami mengkompilasi kode sumber menjadi program dengan cara sebagaimana berikut:

1. Membuka terminal.
2. Menuju ke direktori `src`, dimana kode sumber program berada.
3. Menjalankan `make`.
4. Hasil kompilasi dapat ditemukan pada direktori `dist` pada akar repositori.


## 4. Cara Kerja Program

Program bekerja sebagaimana berikut:

1. Pengguna menjalankan program hasil kompilasi.
2. Pengguna mengetikkan panjang sisi kubus dalam bentuk bilangan bulat.
3. Program menghitung hasil dengan formula: _s_^3 (dibaca: _s_ pangkat 3) atau _s_ dikali _s_ dikali _s_.
4. Program mencetak hasil dalam bentuk angka pada _standard output_ (_stdout_).

## 5. Hasil dari Program

### 5.1. `Makefile`

```
mkdir ../dist
g++ -O0 -static -fpermissive functional.cpp -o ../dist/functional
g++ -O0 -static -fpermissive procedural.cpp -o ../dist/procedural
```

### 5.2. `procedural.cpp`

```
Masukkan panjang sisi kubus: 4

Volume kubus adalah: 
64
```

### 5.3. `functional.cpp`

```
Masukkan panjang sisi: 4

Volume kubus adalah: 
64
```
