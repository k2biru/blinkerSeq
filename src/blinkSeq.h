/*
 * BLINKER Sequential
 * Fahrizal Hari Utama
 * Monday Kliwon [2019.07.29]
 */
#include <Arduino.h>
#include <Ticker.h>


class BlinkerSeq {
  private:
  Ticker LEDticker;
  uint8_t _pinLED;
  bool _ledOn ;
  bool _ledActiveLow;
  uint16_t _ledOnMs;
  uint16_t _ledOffMs;
  uint8_t _ledSeq;
  uint8_t _ledSeqCounter;
  uint16_t _ledOffAfter;
 
  public:
  BlinkerSeq(uint8_t pinLED, bool _ledActiveLow);
  void set( uint16_t ledOnMs,uint16_t ledOffMs,uint8_t ledSeq,uint16_t ledOffAfter);
  void tick();
  void stop();
  void alwaysOn();
};
