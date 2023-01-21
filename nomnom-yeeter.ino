/**
 * NomNom Yeeter 5000
 * The pet food dispenser your cat dreams of.
 *
 * Microcontroller: Arduino UNO R3
 */

/**
 * Blink on board LED in a custom heartbeat pattern.
 * @param none
 * @return: none
 */
void blink() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(700);
}

/**
 * Arduino supplied initialization function.
 */
void setup() {
  /* Initialize on board LED */
  pinMode(LED_BUILTIN, OUTPUT);
}

/**
 * Arduino supplied main program loop.
 */
void loop() {
  blink();
}
