#include <Servo.h>

Servo feeder;

unsigned long lastFeedTime = 0;
const unsigned long interval = 43200000UL; // 12 saatlik süre (milisaniye)

void setup() {
  feeder.attach(9); // Servo motor Pin 9'a bağlı
  feeder.write(92); // Motor durma noktası kalibrasyonu

  // Başlangıç beslemesi
  feedFish();
  lastFeedTime = millis();
}

void loop() {
  unsigned long now = millis();

  // Zaman kontrolü
  if (now - lastFeedTime >= interval) {
    lastFeedTime = now;
    feedFish();
  }
}

void feedFish() {
  // İleri yön hareketi
  feeder.write(110);    
  delay(1050);          
  
  // Bekleme aşaması
  feeder.write(92);     
  delay(300);

  // Geri yön hareketi
  feeder.write(75);     
  delay(1080);          

  // Sistemi sabitleme
  feeder.write(92);     
}
