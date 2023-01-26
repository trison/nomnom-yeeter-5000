/**
 * NomNom Yeeter 5000
 * The pet food dispenser your cat dreams of.
 *
 * Microcontroller: Arduino UNO R3
 */

#include <Servo.h>

#define SERVO_ANGLE_MAX 180
#define SERVO_ANGLE_MIN 0


Servo servo;
int servo_angle = SERVO_ANGLE_MIN;

/**
 * @brief   Blink on board LED in a custom heartbeat pattern.
 * @param   none
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
  delay(800);
}

/**
 * @brief  Moves the servo angle from SERVO_ANGLE_MIN to
 *         SERVO_ANGLE_MAX in 10 degree increments. Angles
 *         greater than the max roll over to the min.
 * @param  None
 * @return none
 */
void write_servo() {
  servo.write(servo_angle);
  servo_angle += 10;

  if (servo_angle >= SERVO_ANGLE_MAX) {
    servo.write(SERVO_ANGLE_MAX);
    /* Give time to move servo back to min angle */
    delay(100);
    servo_angle = SERVO_ANGLE_MIN;
  }
}

/**
 * Arduino supplied intialization function.
 */
void setup() {
  /* Initialize on board LED */
  pinMode(LED_BUILTIN, OUTPUT);

  /* Attach to PWM pin */
  servo.attach(8);
  /* Center the servo */
  servo.write(9);
}

/**
 * Arduino supplied main program loop.
 */
void loop() {
  blink();
  write_servo();
}
