/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Creality 4.2.7 (STM32F103RET6) board pin assignments
 */

#define BOARD_INFO_NAME      "Creality V4.2.5"
#define DEFAULT_MACHINE_NAME "CR-200B"

//New Pins
#define J1  PA15  //  NC
#define J2  PA7 //  NC
#define J3  PA6 //  DET
//LED 
//K-FAN1 Part Cooling Fan 
//K-FAN2 Chassis Fan
//K-FAN3 NC

//
// Servos
//
#define SERVO0_PIN        PB1   // BLTouch OUT

//
// Limit Switches
//
#define X_STOP_PIN        PA3
#define Y_STOP_PIN        PA4
#define Z_STOP_PIN        PA5

#define Z_MIN_PROBE_PIN   PB0   // BLTouch IN

//
// Filament Runout Sensor
//
#define FIL_RUNOUT_PIN    J3   // "Pulled-high"

//
// Heaters / Fans
//
#define HEATER_0_PIN      PA0   // HEATER1
#define HEATER_BED_PIN    PA1   // HOT BED

#define FAN_PIN           PA2   // K-FAN1 Part Cooling Fan
#define FAN1_PIN          PC0   // K-FAN2 Chassis Fan
#define FAN2_PIN          PC1   // K-FAN3 NC

//
// SD Card
//
#define SD_DETECT_PIN     PC7
#define ONBOARD_SD_CS_PIN PC9

//
// Misc. Functions
//
#define CASE_LIGHT_PIN    PC14 // LED
//  P4 - G-GND NRST-NRST *no header
//  P3 - G-GND SWSCK-PA14 SWDIO-PA13 Vcc-3.3V *header soldered
#include "pins_CREALITY_V4.h"