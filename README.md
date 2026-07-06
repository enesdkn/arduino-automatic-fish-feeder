# Arduino Automatic Fish Feeder (Otomatik Balık Yemleme Sistemi)

Bu proje; mekanik konum kontrolü ve zamanlama mantığı kullanılarak geliştirilmiş, mikrodenetleyici tabanlı bir otomatik balık yemleme sistemidir. Projenin donanım entegrasyonu, devre kalibrasyonu ve mekanik çalışma algoritması süreçleri yürütülmüştür.

## 🛠️ Üstlendiğim Roller & Geliştirme Süreci
* **Donanım Entegrasyonu:** Servo motor ve gerekli elektronik bileşenlerin mikrodenetleyiciye doğru pin yapılandırmasıyla bağlanması ve fiziksel kurulumu.
* **Algoritma Tasarımı:** Sistemin kararlı çalışması için gereken mantıksal döngünün (yemleme zamanı geldiğinde haznenin aşağı dönmesi, yemi dökmesi ve tekrar güvenli konuma geri gelmesi) kurulması.
* **Kod ve Mekanik Kalibrasyon:** Açık kaynaklı temel kod bloklarının projenin mekanik ihtiyaçlarına, dönüş sürelerine ve pin yapılandırmasına uygun hale getirilerek optimize edilmesi.

## 🔌 Donanım ve Kablo Bağlantıları
Sistemin fiziksel kurulumunda kullanılan pin ve kablo yapılandırması şu şekildedir:
* **Kahverengi Kablo:** Pin 9 (Servo Motor Sinyal Kontrolü)
* **Kırmızı Kablo:** GND (Topraklama)
* **Turuncu Kablo:** 5V (Güç Beslemesi)

## ⚙️ Çalışma Mantığı
1. Sistem ilk enerjilendiğinde yem haznesinin deliği **yukarı bakacak şekilde** (güvenli başlangıç konumu) konumlanır.
2. Belirlenen zaman periyodu tetiklendiğinde (milisaniye bazlı kontrol ile) motor çalışır ve delik **aşağı yöne dönerek** yemleme işlemini gerçekleştirir.
3. Yemleme için milisaniyelik duraklama tamamlandıktan hemen sonra motor ters yönde hareket ederek hazneyi yeniden **yukarı (başlangıç) konumuna** getirir. Bu sayede yemlerin istemsizce dökülmesi veya nemlenmesi engellenir.

## 🚀 Kullanılan Teknolojiler
* Arduino IDE
* C / C++ (Arduino Sketch)
