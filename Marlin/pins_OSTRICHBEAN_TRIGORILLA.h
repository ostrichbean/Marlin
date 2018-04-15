#ifndef BOARD_NAME
  #define BOARD_NAME "ostrichbean TRIGORILLA"
#endif

//
// ============ON-BOARD LABELS============
//

//
// Servos
//
#define OSTRICH_TRIGORILLA_S0 11
#define OSTRICH_TRIGORILLA_S1 6
#define OSTRICH_TRIGORILLA_S2 5
#define OSTRICH_TRIGORILLA_S3 4

//
// Limit Switches
//
#define OSTRICH_TRIGORILLA_X0 3
#define OSTRICH_TRIGORILLA_X1 2
#define OSTRICH_TRIGORILLA_Y0 14
#define OSTRICH_TRIGORILLA_Y1 15
#define OSTRICH_TRIGORILLA_Z0 18
#define OSTRICH_TRIGORILLA_Z1 19

//
// Temperature Sensors
//
#define OSTRICH_TRIGORILLA_T0 13  //(analog pin)
#define OSTRICH_TRIGORILLA_T1 14  //(analog pin)
#define OSTRICH_TRIGORILLA_T2 15  //(analog pin)
#define OSTRICH_TRIGORILLA_T3 12  //(analog pin)

//
// Heaters / Fans
//
#define OSTRICH_TRIGORILLA_HEATER0 10
#define OSTRICH_TRIGORILLA_HEATER1 45
#define OSTRICH_TRIGORILLA_HOTBED 8
#define OSTRICH_TRIGORILLA_FAN0 9
#define OSTRICH_TRIGORILLA_FAN1 7
#define OSTRICH_TRIGORILLA_FAN2 44

//
// Auxiliary
//
#define OSTRICH_TRIGORILLA_D42 43   //(mislabelled)
#define OSTRICH_TRIGORILLA_D43 42   //(mislabelled)
#define OSTRICH_TRIGORILLA_PS_ON 12

//
// ============FUNCTIONS============
//

//
// Servos
//
#define SERVO0_PIN OSTRICH_TRIGORILLA_S0

//
// Limit Switches
//
#define X_MAX_PIN OSTRICH_TRIGORILLA_X1
#define Y_MAX_PIN OSTRICH_TRIGORILLA_X0
#define Z_MAX_PIN OSTRICH_TRIGORILLA_Z1
#define Z_MIN_PIN OSTRICH_TRIGORILLA_Z0

//
// Steppers
//
#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38
#define X_CS_PIN           53

#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56
#define Y_CS_PIN           49

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       62
#define Z_CS_PIN           40

#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      24
#define E0_CS_PIN          42

#define E1_STEP_PIN        36
#define E1_DIR_PIN         34
#define E1_ENABLE_PIN      30
#define E1_CS_PIN          44

//
// Temperature Sensors
//
#define TEMP_0_PIN OSTRICH_TRIGORILLA_T0
#define TEMP_1_PIN OSTRICH_TRIGORILLA_T1
#define TEMP_BED_PIN OSTRICH_TRIGORILLA_T2

//
// Heaters / Fans
//
#define HEATER_0_PIN OSTRICH_TRIGORILLA_HEATER0
#define HEATER_BED_PIN OSTRICH_TRIGORILLA_D42
#define FAN_PIN OSTRICH_TRIGORILLA_FAN0
#define E0_AUTO_FAN_PIN OSTRICH_TRIGORILLA_FAN1
#define CONTROLLER_FAN_PIN OSTRICH_TRIGORILLA_FAN2

//
// Laser Control
//
#define SPINDLE_LASER_ENABLE_PIN OSTRICH_TRIGORILLA_HEATER1
#define SPINDLE_LASER_PWM_PIN OSTRICH_TRIGORILLA_S1

//
// Misc Functions
//
#define LED_PIN 13

//
// LCD
//
#define SDSS 53
#define BEEPER_PIN 37
#define BTN_EN1 31
#define BTN_EN2 33
#define BTN_ENC 35
#define KILL_PIN 41
#define LCD_PINS_RS 16
#define LCD_PINS_ENABLE 17
#define LCD_PINS_D4 23
#define LCD_PINS_D5 25
#define LCD_PINS_D6 27
#define LCD_PINS_D7 29
#define SD_DETECT_PIN 49

//SCK   52
//MISO  50
//MOSI  51
//SS    53
