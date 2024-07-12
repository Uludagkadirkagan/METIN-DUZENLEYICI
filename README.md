# METIN-DUZENLEYICI

C++ programlama dilinde oluşturduğum program, basit bir metin duzenleyicisi kullanıcı tarafından girilen karakter  uzerinde basit islemler yapar.
Amacımız  boyle bir basit metin duzenleyicisi olusturmak ve asagıda belirtilen islemleri kullanıcıya sunmaktır.

ISLEMLERIMIZ:

 • karakter ekleme,
 • karakter silme,
 • metni ekrana yazdırma,
 • geri alma,
 • ve dosyaya kaydetme.

Programlama

 • Program basladıgında std::string tipinde bos bir alan oluSturmalı ve her bir degisim icin bu alan kullanılmalı.

 • Yapılacak islemler icin kullanıcı tarafından girilmesi gereken bir komut beklemeli (detaylar icin bakınız: Komutlar).
 
 • Her bir komuttan sonra islemi tamamlayıp bir sonraki islem icin tekrar kullanıcı tarafından komut beklemeli.
 
 • Sayet kullanıcı kaydet (save) demis ise metnin son halini bir dosyaya kaydedip program sonlandırılmalı.
 
 C++ programlama dilini kullanarak sizden istenilen adımları gerceklestiren bir algoritma gelistiriniz.
 
 Komutlar
 
 Asagıda kullanıcı tarafından verilecek olan komutlar ve programda yazılması gereken fonksiyonlar detaylı bir sekilde anlatılmıstır. 
 Her bir komutun solundaki numara, o komuta isaret etmektedir.
 
  1. append(s): Kullanıcı tarafından girilen veriyi metnin sonuna eklenir.
  2. delete(k): Metnin sonundan baslayarak k adet karakteri siler.
  3. print(k): Metnin ilk k adet karakterini ekrana yazdırır.
  4. undo(): En son degisikligi geri alır.
  5. save(s): Metnin son halini kullanıcı tarafından verilen dosyaya ekler ve program sonlanır.



