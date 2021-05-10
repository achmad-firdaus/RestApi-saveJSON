HOW TO USE
# Menyimpan dengan RestApi
Cara penggunakan API untuk menyinpan data dengan cepat dan mudah menggunakan JSON tanpa DBMS

Berisi tentang:
1. Create Parent untuk mendapatkan token yang akan digunakan untuk menyimpan data, agar data yang kamu buat aman dan tidak bisa dilihat oleh oarang lain,
2. Create data dengan field bebas berapapun dan semau kamu,
3. Read all data dengan filed yang sudah kamu buat,
4. Read spesifik data dengan filed yang sudah kamu buat berdasarkan id pada field,
5. Update data sesuai request yang kamu inginkan,
6. Delete spesifik data dengan filed yang sudah kamu buat berdasarkan id pada field.

Pembahasan:
1. Create Parent untuk mendapatkan token yang akan digunakan untuk menyimpan data, agar data yang kamu buat aman dan tidak bisa dilihat oleh oarang lain, caranya:
- Kamu bisa pergi ke link berikut: https://thirtyseven-api.herokuapp.com/index.php/apiv2
- Pada kolom input "Parent", kamu bisa isikan nama parent sesuai keinginan yang kamu mau.
  Rules:
  1. Nama parent tidak boleh sama dengan data yang sudah ditampilkan,
  2. Kamu bisa cek nama parent terlebih dahulu pada kolom pencarian, untuk mengecek nama parent yang ingin kamu buat belum ada.
- Setelah input parent sudah terisi maka kamu bisa klik "submit",
- Bila gagal, maka ada pesan error alasan gagal mendapatkan token,
- Bila berhasil, maka ada pesan yang menampilkan token kamu, kamu bisa save token tersebut karena token tersebut muncul hanya satu kali.

2. Create data dengan field bebas berapapun dan semau kamu. Kamu memiliki 2 cara, 1.Dengan postman, 2.Dengan ESP
  - Saya akan bahas cara 1.Dengan postman terlebih dahulu,
    - Bila kamu belum punya postman, kamu bisa download postman dengan versi berapapun pada link berikut : https://www.postman.com/downloads/
    - Bila kamu sudah punya postman, kamu bisa membuka postman dan isikan pada kolom input url dengan url yang sudah ada pada table yang ada di https://thirtyseven-api.herokuapp.com/index.php/apiv2 kamu bisa cari parent kamu dikolom pencarian dan kamu bisa copy paste pada kolom GET/POST ataupun kamu bisa menggunakan url berikut : https://njse.herokuapp.com/apv1/secret/[Your-Token]/[Your-Parent] (kamu bisa rubah bagian [Your-Token] dengan Token yang kamu dapat saat membuat parent, kamu bisa rubah pada bagian [Your-Parent] dengan nama parent yang sudah kamu buat),
    - Setelah kamu isikan link, kamu bisa rubah dengan klik bagian "GET" akan ada dropdown dan pilih "POST" dan kamu bisa klik bagian "Body" lalu klik "raw" setalah itu isikan field sesuai keinginan kamu, contoh:
      - {
          "field-keinginanmu1": "record-keinginanmu",
          "field-keinginanmu2": "record-keinginanmu",
          "field-keinginanmu3": "record-keinginanmu"
        }
    - Setelah sudah membuat field sesuai keinginanmu, kamu bisa klik "send" dan kamu akan mendapatkan response.
 
 3. Read all data dengan filed yang sudah kamu buat,
