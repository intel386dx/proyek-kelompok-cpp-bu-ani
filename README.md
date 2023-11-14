<div style="max-width:210mm;margin:auto;font-family:serif">

<div style="text-align:center !important"><h3>

Laporan Proyek PAS Semester 5\
Menghitung Volume Kubus\
Menggunakan Bahasa Pemrograman C++

</h3></div style="text-align:center !important">

<div style="text-align:center !important">

![Lambang MTs Negeri 1 Lumajang](_assets/logo_mtsn.gif)

</div style="text-align:center !important">

<div style="text-align:center !important">

**Dikerjakan oleh :**

1\. Hilman Ahwas Adliyansyah\
2\. Mochammad Tegar Firdaus

</div style="text-align:center !important">

<div style="text-align:center !important">

<h3 style="margin-bottom:0.25em">MTs Negeri 1 Lumajang</h3>
<address style="font-style:normal">Jl. Citandui No. 75 Kel. Rogotrunan, Kec. Lumajang, Kab. Lumajang</address>

2023

</div style="text-align:center !important">

<div style="margin:0.5em 0em">&nbsp;</div>

<div style="text-align:center !important">

# Kata Pengantar

</div style="text-align:center !important">

<p style="text-indent:1cm">Puji syukur kita panjatkan kehadirat Allah SWT yang telah memberikan rahmat serta hidayah-Nya sehingga kami bisa menyelesaikan tugas Laporan hasil pengamatan yang berjudul “Menghitung Volume Kubus Menggunakan Bahasa Pemrograman C++”.</p>

<p style="text-indent:1cm">Terima kasih atas Ustadzah Nurul Izza Rahmaniya selaku guru Informatika yang telah meluangkan waktunya untuk kami dan telah memberi saran dan masukan yang sangat membantu bagi kami untuk menyelesaikan laporan ini.</p>

<p style="text-indent:1cm">Di samping itu, kami berterima kasih kepada Ustadz Jailani S,Ag,Ma selaku Kepala Sekolah Madrasah Tsanawiyah Negeri 1 Lumajang dan ucap dari kami kepada pembaca yang membaca laporan ini.</p>

<p style="text-indent:1cm">Kami menyadari bahwa laporan hasil percobaan ini masih jauh dari kata sempurna, jadi kami sangat mengharapkan masukan dari para pembaca. Akhir kata, kami mengucapkan sekali lagi terima kasih kepada pembaca yang membaca laporan ini.</p>

Penulis

<div style="margin:0.5em 0em">&nbsp;</div>

<div style="text-align:center !important">

# Tujuan

</div style="text-align:center !important">

<p style="text-indent:1cm">Adapun tujuan kami dengan proyek ini adalah untuk memenuhi tugas proyek mata pelajaran Informatika dan untuk mempelajari bahasa pemrograman C++ lebih dalam lagi.</p>

<div style="margin:0.5em 0em">&nbsp;</div>

<div style="text-align:center !important">

# Kajian Teori

</div style="text-align:center !important">

## 1. Bahasa Pemrograman C++

<p style="text-indent:1cm">C++ adalah salah satu bahasa pemrograman tertua di dunia. C++ merupakan fitur tambahan untuk bahasa pemrograman C. Artinya, kode C yang valid juga merupakan kode C++ yang valid pula.</p>

<p style="text-indent:1cm">Untuk menjalankan sebuah program C++, program tersebut harus melewati tahap _kompilasi_ supaya dapat dijalankan oleh komputer dengan performa maksimal. Ada banyak alat-alat kompilasi untuk C++ yang bisa Anda pilih, diantaranya GCC (_GNU Compiler Collection_) dan Microsoft Visual C++.</p>

## 2. Bangun Ruang

<p style="text-indent:1cm">Bangun ruang adalah bangun yang memiliki panjang, lebar, dan juga tinggi. Bangun ruang juga bisa disebut bangun tiga-dimensi. Contoh-contoh bangun ruang antara lain kubus, balok, bola, limas, kerucut, piramida, dan sebagainya.</p>

<p style="text-indent:1cm">Di proyek ini, kami akan menulis program C++ untuk menghitung volume kubus dengan informasi yang diberikan pengguna melalui _standard input_. Program ini kami tulis dengan dua cara, yaitu prosedural (`procedural.cpp`) dan fungsional (`functional.cpp`).</p>

<div style="margin:0.5em 0em">&nbsp;</div>

<div style="text-align:center !important">

# Alat dan Bahan

</div style="text-align:center !important">

Kami menggunakan peralatan sebagaimana berikut:

* Komputer dengan sistem operasi Linux
* GNU GCC untuk mengkompilasi program
* GNU make untuk membantu proses kompilasi

Untuk memasang di sistem Linux Debian atau Ubuntu, jalankan:

```
sudo apt install gcc g++ binutils make
```

<div style="margin:0.5em 0em">&nbsp;</div>

<div style="text-align:center !important">

# Cara Kompilasi Program

</div style="text-align:center !important">

Kami mengkompilasi kode sumber menjadi program dengan cara sebagaimana berikut:

1. Membuka terminal.
2. Menuju ke direktori `src`, dimana kode sumber program berada.
3. Menjalankan skrip Makefile dengan mengetikkan `make`.
4. Hasil kompilasi dapat ditemukan pada direktori `dist` pada akar repositori.

<div style="margin:0.5em 0em">&nbsp;</div>

<div style="text-align:center !important">

# Cara Kerja Program

</div style="text-align:center !important">

Program bekerja sebagaimana berikut:

1. Pengguna menjalankan program hasil kompilasi.
2. Program menanyakan panjang sisi kubus kepada pengguna.
3. Pengguna mengetikkan panjang sisi kubus dalam bentuk bilangan bulat.
4. Program menghitung hasil dengan formula: _s_^3 (dibaca: _s_ pangkat 3) atau lebih mudahnya, _s_ dikali _s_ dikali _s_.
5. Program mencetak hasil dalam bentuk angka pada _standard output_ (_stdout_).

<div style="margin:0.5em 0em">&nbsp;</div>

<div style="text-align:center !important">

# Hasil

</div style="text-align:center !important">

## 1. `Makefile`

```
mkdir ../dist
g++ -O0 -static -fpermissive functional.cpp -o ../dist/functional
g++ -O0 -static -fpermissive procedural.cpp -o ../dist/procedural
```

## 2. `procedural.cpp`

```
Masukkan panjang sisi kubus: 4

Volume kubus adalah: 
64
```

## 3. `functional.cpp`

```
Masukkan panjang sisi: 4

Volume kubus adalah: 
64
```

</div>