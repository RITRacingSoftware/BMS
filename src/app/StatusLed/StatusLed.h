#ifndef STATUS_LED_H
#define STATUS_LED_H

/**
 * Initialize Led state machine to nominal status.
 */
void StatusLed_init(void);

/**
 * Led state machine iteration. Decide which led pattern to blink out based on inputs.
 */
void StatusLed_10Hz(void);

#endif // STATUS_LED_H