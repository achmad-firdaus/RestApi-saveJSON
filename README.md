- Berisi tentang catatan saya dan cara penggunaan

# HOW TO USE
# Menyimpan dengan RestApi
Saya mengerjakan program pada tanggal 25 april 2021 sampai 9 mei 2021 pada dengan frontend Codeigniter 3 dan backend express
Cara penggunakan API untuk menyinpan data dengan cepat dan mudah menggunakan JSON tanpa DBMS.

Saya merevisi program tanggal 13 mei 2021 samapi 15 mei 2021, awalanya saya tidak menggunakan database karena saya pikir itu lebih cepat dalam memproses data menggunakan file JSON saja tetapi pada hosting ada timer setiap 30 menit akan update file yang ada perubahan/penambahan akan terhapus dan menjadi original file. Maka saya putuskan untuk menggunakan mongoDB, agar field bisa disesuaikan oleh pengguna.

Berisi tentang:
1. Create Parent untuk mendapatkan token yang akan digunakan untuk menyimpan data, agar data yang kamu buat aman dan tidak bisa dilihat oleh oarang lain,
2. Create data dengan field bebas berapapun dan semau kamu,
3. Read all data dengan filed yang sudah kamu buat,
4. Read spesifik data dengan filed yang sudah kamu buat berdasarkan id pada field,
5. Update data sesuai request yang kamu inginkan,
6. Delete spesifik data dengan filed yang sudah kamu buat berdasarkan id pada field,
7. Export CSV,
8. Validasi.

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
    - Setelah kamu isikan link, kamu bisa rubah dengan klik bagian "GET" akan ada dropdown dan pilih "POST" dan kamu bisa klik bagian "Body" lalu klik "raw" setalah itu rubah pada bagian "TEXT" pada dropdown tersebut kamu bisa pilih "JSON" dan isikan field sesuai keinginan kamu, contoh:
    -     {
            "field-keinginanmu1": "record-keinginanmu",
            "field-keinginanmu2": "record-keinginanmu",
            "field-keinginanmu3": "record-keinginanmu"
          }
    - Setelah sudah membuat field sesuai keinginanmu, kamu bisa klik "send" dan kamu akan mendapatkan response dengan id field kamu yang dimana id tersebut bisa dugunakan untuk get/read spesifik data.
    - Response yang kamu dapat bila token dan parent name yang kamu masukan benar:
    -     {
            "message": "Success insert",
            "response": {
                "_id": "60a0cbc4d4011a00153c273d",
                "field-keinginanmu1": "record-keinginanmu",
                "field-keinginanmu2": "record-keinginanmu",
                "field-keinginanmu3": "record-keinginanmu",
                "date": "5/16/2021",
                "time": "2:37:36 PM"
            }
          }
    - _id, date, time, akan terbuat otomatis setiap kamu insert data.
 
 3. Read all data dengan field yang sudah kamu buat. Kamu memiliki 2 cara, 1.Dengan postman, 2.Dengan ESP
  - Saya akan bahas cara 1.Dengan postman terlebih dahulu,
    - Bila kamu belum punya postman, kamu bisa download postman dengan versi berapapun pada link berikut : https://www.postman.com/downloads/
    - Bila kamu sudah punya postman, kamu bisa membuka postman dan isikan pada kolom input url dengan url yang sudah ada pada table yang ada di https://thirtyseven-api.herokuapp.com/index.php/apiv2 kamu bisa cari parent kamu dikolom pencarian dan kamu bisa copy paste pada kolom GET/POST ataupun kamu bisa menggunakan url berikut : https://njse.herokuapp.com/apv1/secret/[Your-Token]/[Your-Parent] (kamu bisa rubah bagian [Your-Token] dengan Token yang kamu dapat saat membuat parent, kamu bisa rubah pada bagian [Your-Parent] dengan nama parent yang sudah kamu buat),
    - Setelah kamu isikan link, kamu bisa rubah menjadi moethod "GET",
    - Kamu bisa klik "send" dan kamu akan mendapatkan response dengan data yang sudah kamu buat.
    - Response yang kamu dapat bila token dan parent name yang kamu masukan benar:
    -     {
              "response": [
                  {
                      "_id": "60a0cbc4d4011a00153c273d",
                      "field-keinginanmu1": "record-keinginanmu",
                      "field-keinginanmu2": "record-keinginanmu",
                      "field-keinginanmu3": "record-keinginanmu",
                      "date": "5/16/2021",
                      "time": "2:37:36 PM"
                  }
              ]
          }
     - _id, date, time, akan terbuat otomatis setiap kamu insert data.
     
4. Read spesifik data dengan field yang sudah kamu buat berdasarkan id pada field. Kamu memiliki 2 cara, 1.Dengan postman, 2.Dengan ESP
  - Saya akan bahas cara 1.Dengan postman terlebih dahulu,
    - Bila kamu belum punya postman, kamu bisa download postman dengan versi berapapun pada link berikut : https://www.postman.com/downloads/
    - Bila kamu sudah punya postman, kamu bisa membuka postman dan isikan pada kolom input url dengan url yang sudah ada pada table yang ada di https://thirtyseven-api.herokuapp.com/index.php/apiv2 kamu bisa cari parent kamu dikolom pencarian dan kamu bisa copy paste pada kolom GET/POST ataupun kamu bisa menggunakan url berikut : https://njse.herokuapp.com/apv1/secret/[Your-Token]/[Your-Parent]/[Your-ID-Field] (kamu bisa rubah bagian [Your-Token] dengan Token yang kamu dapat saat membuat parent, kamu bisa rubah pada bagian [Your-Parent] dengan nama parent yang sudah kamu buat, kamu bisa rubah pada bagian [Your-ID-Field] dengan id field data yang sudah kamu create/buat
    - Setelah kamu isikan link, kamu bisa rubah menjadi moethod "GET",
    - Kamu bisa klik "send" dan kamu akan mendapatkan response dengan data yang sudah kamu buat.
    - Response yang kamu dapat bila token, parent name dan _id pada field yang kamu masukan benar:
    -     {
              "response": {
                  "_id": "60a0cbc4d4011a00153c273d",
                  "field-keinginanmu1": "record-keinginanmu",
                  "field-keinginanmu2": "record-keinginanmu",
                  "field-keinginanmu3": "record-keinginanmu",
                  "date": "5/16/2021",
                  "time": "2:37:36 PM"
              }
          }
     - _id, date, time, akan terbuat otomatis setiap kamu insert data.
     
5. Update data sesuai request yang kamu inginkan. Kamu memiliki 2 cara, 1.Dengan postman, 2.Dengan ESP
  - Saya akan bahas cara 1.Dengan postman terlebih dahulu,
    - Bila kamu belum punya postman, kamu bisa download postman dengan versi berapapun pada link berikut : https://www.postman.com/downloads/
    - Bila kamu sudah punya postman, kamu bisa membuka postman dan isikan pada kolom input url dengan url yang sudah ada pada table yang ada di https://thirtyseven-api.herokuapp.com/index.php/apiv2 kamu bisa cari parent kamu dikolom pencarian dan kamu bisa copy paste pada kolom GET/POST ataupun kamu bisa menggunakan url berikut : https://njse.herokuapp.com/apv1/secret/[Your-Token]/[Your-Parent] (kamu bisa rubah bagian [Your-Token] dengan Token yang kamu dapat saat membuat parent, kamu bisa rubah pada bagian [Your-Parent] dengan nama parent yang sudah kamu buat,
    - Setelah kamu isikan link, kamu bisa rubah dengan klik bagian "GET" akan ada dropdown dan pilih "PATCH" dan kamu bisa klik bagian "Body" lalu klik "raw" setalah itu rubah pada bagian "TEXT" pada dropdown tersebut kamu bisa pilih "JSON" dan isikan field sesuai data yang ingin kamu rubah, contoh:
    - Data asli yang kamu punya:
    -     {
            "field-keinginanmu1": "record-keinginanmu",
            "field-keinginanmu2": "record-keinginanmu",
            "field-keinginanmu3": "record-keinginanmu"
          }
          
    - Yang ingin kamu rubah pada bagian "field-keinginanmu2" yang isinya "record-keinginanmu" menjadi "record-keinginanmu-update", kamu bisa isikan raw berikut:
    -     {
            "field-keinginanmu2": "record-keinginanmu-update"
          }
    - Kamu bisa klik "send" dan kamu akan mendapatkan response dengan data yang sudah kamu update,
    - Data kamu akan menjadi seperti ini setelah diupdate:
    -     {
            "field-keinginanmu1": "record-keinginanmu",
            "field-keinginanmu2": "record-keinginanmu-update",
            "field-keinginanmu3": "record-keinginanmu"
          }

6. Delete spesifik data dengan field yang sudah kamu buat berdasarkan id pada field. Kamu memiliki 2 cara, 1.Dengan postman, 2.Dengan ESP
  - Saya akan bahas cara 1.Dengan postman terlebih dahulu,
    - Bila kamu belum punya postman, kamu bisa download postman dengan versi berapapun pada link berikut : https://www.postman.com/downloads/
    - Bila kamu sudah punya postman, kamu bisa membuka postman dan isikan pada kolom input url dengan url yang sudah ada pada table yang ada di https://thirtyseven-api.herokuapp.com/index.php/apiv2 kamu bisa cari parent kamu dikolom pencarian dan kamu bisa copy paste pada kolom GET/POST ataupun kamu bisa menggunakan url berikut : https://njse.herokuapp.com/apv1/secret/[Your-Token]/[Your-Parent]/[Your-ID-Field] (kamu bisa rubah bagian [Your-Token] dengan Token yang kamu dapat saat membuat parent, kamu bisa rubah pada bagian [Your-Parent] dengan nama parent yang sudah kamu buat, kamu bisa rubah pada bagian [Your-ID-Field] dengan id field data yang sudah kamu create/buat
    - Setelah kamu isikan link, kamu bisa rubah dengan klik bagian "GET" akan ada dropdown dan pilih "DELETE",
    - Kamu bisa klik "send" dan kamu akan mendapatkan response dengan data yang sudah kamu delete.
  
