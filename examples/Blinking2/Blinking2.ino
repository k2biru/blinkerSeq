#include <blinkSeq.h>
#define LED_PIN 12
#define LED_ON_LOW 1


BlinkerSeq ledMonitor(LED_PIN,LED_ON_LOW);
BlinkerSeq ledInternal(4,LED_ON_LOW);

void setup(){
  ledMonitor.set(100,200,2,2000);
  ledInternal.set(100,200,5,2000);
  delay(1000);
  yield;
}
void loop(){
  delay(10000);
  ledMonitor.set(100,200,1,2000);
  yield;
  delay(15000);
  ledMonitor.stop();
}
