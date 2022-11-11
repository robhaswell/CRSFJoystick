#ifndef BOARD_DEFS
#define BOARD_DEFS

#define LED_TYPE_SINGLE 1

// PiPico
#if BOARD_ID == 1
    #define CRSF_TX 20  // physical 20
    #define CRSF_RX 21  // physical 21

    #define LED_TYPE LED_TYPE_SINGLE
    #define LED_PIN 17
    
    void boardSetup() {
      pinMode(LED_PIN,OUTPUT);
    }

    void led_off() {
      digitalWrite(LED_PIN, LOW);
    }
    
    void led_on() {
      digitalWrite(LED_PIN, HIGH);
    }
#endif

#endif
