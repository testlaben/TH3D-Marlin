/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Bulgarian
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_BG_H
#define LANGUAGE_BG_H

#define MAPPER_D0D1                // For Cyrillic
#define DISPLAY_CHARSET_ISO10646_5

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" Готов.")
#define MSG_SD_INSERTED                     _UxGT("Картата е по�?тавена")
#define MSG_SD_REMOVED                      _UxGT("Картата е извадена")
#define MSG_MAIN                            _UxGT("Меню")
#define MSG_AUTOSTART                       _UxGT("�?вто�?тарт")
#define MSG_DISABLE_STEPPERS                _UxGT("Изкл. двигатели")
#define MSG_AUTO_HOME                       _UxGT("Паркиране")
#define MSG_SET_HOME_OFFSETS                _UxGT("Задай �?ачало")
#define MSG_SET_ORIGIN                      _UxGT("Изходна точка")
#define MSG_PREHEAT_1                       _UxGT("Подгр�?ване PLA")
#define MSG_PREHEAT_1_N                     _UxGT("Подгр�?ване PLA")
#define MSG_PREHEAT_1_ALL                   _UxGT("Подгр. PLA В�?ички")
#define MSG_PREHEAT_1_BEDONLY               _UxGT("Подгр. PLA Легло")
#define MSG_PREHEAT_1_SETTINGS              _UxGT("�?а�?тройки PLA")
#define MSG_PREHEAT_2                       _UxGT("Подгр�?ване ABS")
#define MSG_PREHEAT_2_N                     _UxGT("Подгр�?ване ABS")
#define MSG_PREHEAT_2_ALL                   _UxGT("Подгр. ABS В�?ички")
#define MSG_PREHEAT_2_BEDONLY               _UxGT("Подгр. ABS Легло")
#define MSG_PREHEAT_2_SETTINGS              _UxGT("�?а�?тройки ABS")
#define MSG_COOLDOWN                        _UxGT("Охлаждане")
#define MSG_SWITCH_PS_ON                    _UxGT("Вкл. захранване")
#define MSG_SWITCH_PS_OFF                   _UxGT("Изкл. захранване")
#define MSG_EXTRUDE                         _UxGT("Ек�?трузи�?")
#define MSG_RETRACT                         _UxGT("Откат")
#define MSG_MOVE_AXIS                       _UxGT("Движение по о�?")
#define MSG_BED_LEVELING                    _UxGT("�?ивелиране")
#define MSG_LEVEL_BED                       _UxGT("�?ивелиране")
#define MSG_MOVE_X                          _UxGT("Движение по X")
#define MSG_MOVE_Y                          _UxGT("Движение по Y")
#define MSG_MOVE_Z                          _UxGT("Движение по Z")
#define MSG_MOVE_E                          _UxGT("Ек�?трудер")
#define MSG_MOVE_01MM                       _UxGT("Преме�?ти �? 0.1mm")
#define MSG_MOVE_1MM                        _UxGT("Преме�?ти �? 1mm")
#define MSG_MOVE_10MM                       _UxGT("Преме�?ти �? 10mm")
#define MSG_SPEED                           _UxGT("Скоро�?т")
#define MSG_BED_Z                           _UxGT("Bed Z")
#define MSG_NOZZLE                          LCD_STR_THERMOMETER _UxGT(" Дюза")
#define MSG_BED                             LCD_STR_THERMOMETER _UxGT(" Легло")
#define MSG_FAN_SPEED                       _UxGT("Вентилатор")
#define MSG_FLOW                            _UxGT("Поток")
#define MSG_CONTROL                         _UxGT("Управление")
#define MSG_MIN                             LCD_STR_THERMOMETER _UxGT(" Минимум")
#define MSG_MAX                             LCD_STR_THERMOMETER _UxGT(" Мак�?имум")
#define MSG_FACTOR                          LCD_STR_THERMOMETER _UxGT(" Фактор")
#define MSG_AUTOTEMP                        _UxGT("�?вто-темп.")
#define MSG_ON                              _UxGT("Вкл. ")
#define MSG_OFF                             _UxGT("Изкл. ")
#define MSG_A_RETRACT                       _UxGT("A-откат")
#define MSG_A_TRAVEL                        _UxGT("A-travel")
#define MSG_STEPS_PER_MM                    _UxGT("Стъпки/mm")
#define MSG_XSTEPS                          _UxGT("X �?тъпки/mm")
#define MSG_YSTEPS                          _UxGT("Y �?тъпки/mm")
#define MSG_ZSTEPS                          _UxGT("Z �?тъпки/mm")
#define MSG_ESTEPS                          _UxGT("E �?тъпки/mm")
#define MSG_E1STEPS                         _UxGT("E1 �?тъпки/mm")
#define MSG_E2STEPS                         _UxGT("E2 �?тъпки/mm")
#define MSG_E3STEPS                         _UxGT("E3 �?тъпки/mm")
#define MSG_E4STEPS                         _UxGT("E4 �?тъпки/mm")
#define MSG_E5STEPS                         _UxGT("E5 �?тъпки/mm")
#define MSG_TEMPERATURE                     _UxGT("Температура")
#define MSG_MOTION                          _UxGT("Движение")
#define MSG_FILAMENT                        _UxGT("�?ишка")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E in mm3")
#define MSG_FILAMENT_DIAM                   _UxGT("Диам. нишка")
#define MSG_CONTRAST                        _UxGT("LCD контра�?т")
#define MSG_STORE_EEPROM                    _UxGT("Запази в EPROM")
#define MSG_LOAD_EEPROM                     _UxGT("Зареди от EPROM")
#define MSG_RESTORE_FAILSAFE                _UxGT("Фабрични на�?тройки")
#define MSG_REFRESH                         LCD_STR_REFRESH _UxGT("Обнови")
#define MSG_WATCH                           _UxGT("Преглед")
#define MSG_PREPARE                         _UxGT("Дей�?тви�?")
#define MSG_TUNE                            _UxGT("�?а�?тройка")
#define MSG_PAUSE_PRINT                     _UxGT("Пауза")
#define MSG_RESUME_PRINT                    _UxGT("Възобнови печата")
#define MSG_STOP_PRINT                      _UxGT("Спри печата")
#define MSG_CARD_MENU                       _UxGT("Меню карта")
#define MSG_NO_CARD                         _UxGT("�?�?ма карта")
#define MSG_DWELL                           _UxGT("Почивка...")
#define MSG_USERWAIT                        _UxGT("Изчакване")
#define MSG_RESUMING                        _UxGT("Продълж. печата")
#define MSG_PRINT_ABORTED                   _UxGT("Печатът е прекъ�?нат")
#define MSG_NO_MOVE                         _UxGT("�?�?ма движение")
#define MSG_KILLED                          _UxGT("УБИТО.")
#define MSG_STOPPED                         _UxGT("СПРЯ�?О.")
#define MSG_CONTROL_RETRACT                 _UxGT("Откат mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("См�?на Откат mm")
#define MSG_CONTROL_RETRACTF                _UxGT("Откат  V")
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Скок mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("Възврат mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("См�?на Възврат mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("Възврат  V")
#define MSG_AUTORETRACT                     _UxGT("�?втоoткат")
#define MSG_FILAMENTCHANGE                  _UxGT("См�?на нишка")
#define MSG_INIT_SDCARD                     _UxGT("Иниц. SD-Карта")
#define MSG_CNG_SDCARD                      _UxGT("См�?на SD-Карта")
#define MSG_ZPROBE_OUT                      _UxGT("Z-�?ондата е извадена")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z От�?то�?ние")
#define MSG_BABYSTEP_X                      _UxGT("Мини�?тъпка X")
#define MSG_BABYSTEP_Y                      _UxGT("Мини�?тъпка Y")
#define MSG_BABYSTEP_Z                      _UxGT("Мини�?тъпка Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("Стоп Кр.Изключватели")
#define MSG_DELTA_CALIBRATE                 _UxGT("Делта Калибровка")
#define MSG_DELTA_CALIBRATE_X               _UxGT("Калибровка X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Калибровка Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Калибровка Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Калибровка Център")

#endif // LANGUAGE_BG_H
