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
 * Simplified Chinese
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_ZH_CN_H
#define LANGUAGE_ZH_CN_H

#define WELCOME_MSG                         MACHINE_NAME _UxGT("已就绪.")  //" ready."
#define MSG_SD_INSERTED                     _UxGT("存储�?�已�?�入")  //"Card inserted"
#define MSG_SD_REMOVED                      _UxGT("存储�?�被拔出")  //"Card removed"
#define MSG_LCD_ENDSTOPS                    _UxGT("挡�?�")  //"Endstops" // Max length 8 characters
#define MSG_MAIN                            _UxGT("主�?��?�")  //"Main"
#define MSG_AUTOSTART                       _UxGT("自动开始")  //"Autostart"
#define MSG_DISABLE_STEPPERS                _UxGT("关闭步进电机")  //"Disable steppers"
#define MSG_AUTO_HOME                       _UxGT("回原点")  //"Auto home"
#define MSG_AUTO_HOME_X                     _UxGT("回X原�?")  //"Home X"
#define MSG_AUTO_HOME_Y                     _UxGT("回Y原�?")  //"Home Y"
#define MSG_AUTO_HOME_Z                     _UxGT("回Z原�?")  //"Home Z"
#define MSG_LEVEL_BED_HOMING                _UxGT("平�?�调平XYZ归原�?")  //"Homing XYZ"
#define MSG_LEVEL_BED_WAITING               _UxGT("�?�击开始热床调平")  //"Click to Begin"
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("下个热床调平点")  //"Next Point"
#define MSG_LEVEL_BED_DONE                  _UxGT("完�?热床调平")  //"Leveling Done!"
#define MSG_SET_HOME_OFFSETS                _UxGT("设置原点�??移")  //"Set home offsets"
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("�??移已�?�用")  //"Offsets applied"
#define MSG_SET_ORIGIN                      _UxGT("设置原点")  //"Set origin"
#define MSG_PREHEAT_1                       _UxGT("预热PLA")  //"Preheat PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")  //MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" 全部")  //MSG_PREHEAT_1 " All"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" 热床")  //MSG_PREHEAT_1 " Bed"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" 设置")  //MSG_PREHEAT_1 " conf"
#define MSG_PREHEAT_2                       _UxGT("预热ABS")  //"Preheat ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")  //MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" 全部")  //MSG_PREHEAT_2 " All"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" 热床")  //MSG_PREHEAT_2 " Bed"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" 设置")  //MSG_PREHEAT_2 " conf"
#define MSG_COOLDOWN                        _UxGT("�?温")  //"Cooldown"
#define MSG_SWITCH_PS_ON                    _UxGT("电�?打开")  //"Switch power on"
#define MSG_SWITCH_PS_OFF                   _UxGT("电�?关闭")  //"Switch power off"
#define MSG_EXTRUDE                         _UxGT("挤出")  //"Extrude"
#define MSG_RETRACT                         _UxGT("回抽")  //"Retract"
#define MSG_MOVE_AXIS                       _UxGT("移动轴")  //"Move axis"
#define MSG_BED_LEVELING                    _UxGT("调平热床")  //"Bed leveling"
#define MSG_LEVEL_BED                       _UxGT("调平热床")  //"Level bed"
#define MSG_MOVE_X                          _UxGT("移动X")  //"Move X"
#define MSG_MOVE_Y                          _UxGT("移动Y")  //"Move Y"
#define MSG_MOVE_Z                          _UxGT("移动Z")  //"Move Z"
#define MSG_MOVE_E                          _UxGT("挤出机")  //"Extruder"
#define MSG_MOVE_01MM                       _UxGT("移动 0.1 mm")  //"Move 0.1mm"
#define MSG_MOVE_1MM                        _UxGT("移动 1 mm")  //"Move 1mm"
#define MSG_MOVE_10MM                       _UxGT("移动 10 mm")  //"Move 10mm"
#define MSG_SPEED                           _UxGT("速率")  //"Speed"
#define MSG_BED_Z                           _UxGT("热床Z")  //"Bed Z"
#define MSG_NOZZLE                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 喷嘴")  //"Nozzle" 噴嘴
#define MSG_BED                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 热床")  //"Bed"
#define MSG_FAN_SPEED                       _UxGT("风扇速率")  //"Fan speed"
#define MSG_FLOW                            _UxGT("挤出速率")  //"Flow"
#define MSG_CONTROL                         _UxGT("控制")  //"Control"
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 最�?") //" " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 最大")  //" " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" 因数")  //" " LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        _UxGT("自动控温")  //"Autotemp"
#define MSG_ON                              _UxGT("开 ")  //"On "
#define MSG_OFF                             _UxGT("关 ")  //"Off"
#define MSG_PID_P                           _UxGT("PID-P")  //"PID-P"
#define MSG_PID_I                           _UxGT("PID-I")  //"PID-I"
#define MSG_PID_D                           _UxGT("PID-D")  //"PID-D"
#define MSG_PID_C                           _UxGT("PID-C")  //"PID-C"
#define MSG_SELECT                          _UxGT("选择")  //"Select"
#define MSG_ACC                             _UxGT("加速度")  //"Accel" acceleration
#define MSG_JERK                            _UxGT("抖动速率")  // "Jerk"
#define MSG_VX_JERK                         _UxGT("X轴抖动速率")  //"Vx-jerk"
#define MSG_VY_JERK                         _UxGT("Y轴抖动速率")  //"Vy-jerk"
#define MSG_VZ_JERK                         _UxGT("Z轴抖动速率")  //"Vz-jerk"
#define MSG_VE_JERK                         _UxGT("挤出机抖动速率")  //"Ve-jerk"
#define MSG_VMAX                            _UxGT("最大进料速率")  //"Vmax " max_feedrate_mm_s
#define MSG_VMIN                            _UxGT("最�?进料速率")  //"Vmin"  min_feedrate_mm_s
#define MSG_VTRAV_MIN                       _UxGT("最�?移动速率")  //"VTrav min" min_travel_feedrate_mm_s, (target) speed of the move
#define MSG_AMAX                            _UxGT("最大打�?�加速度")  //"Amax " max_acceleration_mm_per_s2, acceleration in units/s^2 for print moves
#define MSG_A_RETRACT                       _UxGT("收进加速度")  //"A-retract" retract_acceleration, E acceleration in mm/s^2 for retracts
#define MSG_A_TRAVEL                        _UxGT("�?�打�?�移动加速度")  //"A-travel" travel_acceleration, X, Y, Z acceleration in mm/s^2 for travel (non printing) moves
#define MSG_STEPS_PER_MM                    _UxGT("轴步数/mm")  //"Steps/mm" axis_steps_per_mm, axis steps-per-unit G92
#define MSG_XSTEPS                          _UxGT("X轴步数/mm")  //"Xsteps/mm" axis_steps_per_mm, axis steps-per-unit G92
#define MSG_YSTEPS                          _UxGT("Y轴步数/mm")  //"Ysteps/mm"
#define MSG_ZSTEPS                          _UxGT("Z轴步数/mm")  //"Zsteps/mm"
#define MSG_ESTEPS                          _UxGT("挤出机步数/mm")  //"Esteps/mm"
#define MSG_TEMPERATURE                     _UxGT("温度")  //"Temperature"
#define MSG_MOTION                          _UxGT("�?动")  //"Motion"
#define MSG_FILAMENT                        _UxGT("�?料测容")  //"Filament" lcd_control_volumetric_menu
#define MSG_VOLUMETRIC_ENABLED              _UxGT("测容积mm³")  //"E in mm3" volumetric_enabled
#define MSG_FILAMENT_DIAM                   _UxGT("�?料直径")  //"Fil. Dia."
#define MSG_CONTRAST                        _UxGT("LCD对比度")  //"LCD contrast"
#define MSG_STORE_EEPROM                    _UxGT("�?存设置")  //"Store memory"
#define MSG_LOAD_EEPROM                     _UxGT("装载设置")  //"Load memory"
#define MSG_RESTORE_FAILSAFE                _UxGT("�?��?安全值")  //"Restore failsafe"
#define MSG_REFRESH                         _UxGT("刷新")  //"Refresh"
#define MSG_WATCH                           _UxGT("信�?��?")  //"Info screen"
#define MSG_PREPARE                         _UxGT("准备")  //"Prepare"
#define MSG_TUNE                            _UxGT("调整")  //"Tune"
#define MSG_PAUSE_PRINT                     _UxGT("暂�?�打�?�")  //"Pause print"
#define MSG_RESUME_PRINT                    _UxGT("�?��?打�?�")  //"Resume print"
#define MSG_STOP_PRINT                      _UxGT("�?�止打�?�")  //"Stop print"
#define MSG_CARD_MENU                       _UxGT("从存储�?�上打�?�")  //"Print from SD"
#define MSG_NO_CARD                         _UxGT("无存储�?�")  //"No SD card"
#define MSG_DWELL                           _UxGT("休眠中 ...")  //"Sleep..."
#define MSG_USERWAIT                        _UxGT("等待用户 ...")  //"Wait for user..."
#define MSG_RESUMING                        _UxGT("�?��?打�?�中")  //"Resuming print"
#define MSG_PRINT_ABORTED                   _UxGT("打�?�已�?�消")  //"Print aborted"
#define MSG_NO_MOVE                         _UxGT("无移动")  //"No move."
#define MSG_KILLED                          _UxGT("已�?�掉")  //"KILLED. "
#define MSG_STOPPED                         _UxGT("已�?�止")  //"STOPPED. "
#define MSG_CONTROL_RETRACT                 _UxGT("回抽长度mm")  //"Retract mm" retract_length, retract length (positive mm)
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("�?�手回抽长度mm")  //"Swap Re.mm" swap_retract_length, swap retract length (positive mm), for extruder change
#define MSG_CONTROL_RETRACTF                _UxGT("回抽速率mm/s")  //"Retract  V" retract_feedrate_mm_s, feedrate for retracting (mm/s)
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Hop mm")  //"Hop mm" retract_zlift, retract Z-lift
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("回抽�?��?长度mm")  //"UnRet +mm" retract_recover_length, additional recover length (mm, added to retract length when recovering)
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("�?�手回抽�?��?长度mm")  //"S UnRet+mm" swap_retract_recover_length, additional swap recover length (mm, added to retract length when recovering from extruder change)
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("回抽�?��?�?�进料速率mm/s")  //"UnRet  V" retract_recover_feedrate_mm_s, feedrate for recovering from retraction (mm/s)
#define MSG_AUTORETRACT                     _UxGT("自动抽回")  //"AutoRetr." autoretract_enabled,
#define MSG_FILAMENTCHANGE                  _UxGT("更�?��?料")  //"Change filament"
#define MSG_INIT_SDCARD                     _UxGT("�?始化存储�?�")  //"Init. SD card"
#define MSG_CNG_SDCARD                      _UxGT("更�?�存储�?�")  //"Change SD card"
#define MSG_ZPROBE_OUT                      _UxGT("Z探针在热床之外")  //"Z probe out. bed" Z probe is not within the physical limits
#define MSG_HOME                            _UxGT("归�?")  //"Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("先")  //"first"
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z�??移")  //"Z Offset"
#define MSG_BABYSTEP_X                      _UxGT("微�?调整X轴")  //"Babystep X" lcd_babystep_x, Babystepping enables the user to control the axis in tiny amounts
#define MSG_BABYSTEP_Y                      _UxGT("微�?调整Y轴")  //"Babystep Y"
#define MSG_BABYSTEP_Z                      _UxGT("微�?调整Z轴")  //"Babystep Z"
#define MSG_ENDSTOP_ABORT                   _UxGT("挡�?�终止")  //"Endstop abort"
#define MSG_HEATING_FAILED_LCD              _UxGT("加热失败")  //"Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("错误：REDUNDANT TEMP")  //"Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 _UxGT("温控失控")  //"THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     _UxGT("错误：最高温度")  //"Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     _UxGT("错误：最低温度")  //"Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 _UxGT("错误：最高热床温度")  //"Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 _UxGT("错误：最低热床温度")  //"Err: MINTEMP BED"
#define MSG_HALTED                          _UxGT("打�?��?�机")  //"PRINTER HALTED"
#define MSG_PLEASE_RESET                    _UxGT("请�?置")  //"Please reset"
#define MSG_SHORT_DAY                       _UxGT("天")  //"d" // One character only
#define MSG_SHORT_HOUR                      _UxGT("时")  //"h" // One character only
#define MSG_SHORT_MINUTE                    _UxGT("分")  //"m" // One character only
#define MSG_HEATING                         _UxGT("加热中 ...")  //"Heating..."
#define MSG_HEATING_COMPLETE                _UxGT("完�?加热")  //"Heating done."
#define MSG_BED_HEATING                     _UxGT("加热热床中")  //"Bed Heating."
#define MSG_BED_DONE                        _UxGT("完�?加热热床")  //"Bed done."
#define MSG_DELTA_CALIBRATE                 _UxGT("⊿校准")  //"Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               _UxGT("校准X")  //"Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               _UxGT("校准Y")  //"Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               _UxGT("校准Z")  //"Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("校准中心")  //"Calibrate Center"

#define MSG_INFO_MENU                       _UxGT("关于打�?�机")  //"About Printer"
#define MSG_INFO_PRINTER_MENU               _UxGT("打�?�机信�?�")  //"Printer Info"
#define MSG_INFO_STATS_MENU                 _UxGT("打�?�机统计")  //"Printer Stats"
#define MSG_INFO_BOARD_MENU                 _UxGT("主�?�信�?�")  //"Board Info"
#define MSG_INFO_THERMISTOR_MENU            _UxGT("温度计")  //"Thermistors"
#define MSG_INFO_EXTRUDERS                  _UxGT("挤出机")  //"Extruders"
#define MSG_INFO_BAUDRATE                   _UxGT("波特率")  //"Baud"
#define MSG_INFO_PROTOCOL                   _UxGT("�??议")  //"Protocol"

#if LCD_WIDTH > 19
#define MSG_INFO_PRINT_COUNT              _UxGT("打�?�计数")  //"Print Count"
#define MSG_INFO_COMPLETED_PRINTS         _UxGT("完�?了")  //"Completed"
#define MSG_INFO_PRINT_TIME               _UxGT("总打�?�时间")  //"Total print time"
#define MSG_INFO_PRINT_LONGEST            _UxGT("最长工作时间")  //"Longest job time"
#define MSG_INFO_PRINT_FILAMENT           _UxGT("总计挤出")  //"Extruded total"
#else
#define MSG_INFO_PRINT_COUNT              _UxGT("打�?�数")  //"Prints"
#define MSG_INFO_COMPLETED_PRINTS         _UxGT("完�?")  //"Completed"
#define MSG_INFO_PRINT_TIME               _UxGT("总共")  //"Total"
#define MSG_INFO_PRINT_LONGEST            _UxGT("最长")  //"Longest"
#define MSG_INFO_PRINT_FILAMENT           _UxGT("已挤出")  //"Extruded"
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("最低温度")  //"Min Temp"
#define MSG_INFO_MAX_TEMP                   _UxGT("最高温度")  //"Max Temp"
#define MSG_INFO_PSU                        _UxGT("电�?供应")  //"Power Supply"

#define MSG_FILAMENT_CHANGE_HEADER          _UxGT("PRINT PAUSED")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("RESUME OPTIONS:")
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  _UxGT("挤出更多")  //"Extrude more"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("�?��?打�?�")  //"Resume print"

#if LCD_HEIGHT >= 4
#define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("等待开始")  //"Wait for start"
#define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("�?料")  //"of the filament"
#define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("�?�更")  //"change"
#define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("等待")  //"Wait for"
#define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("�?�下�?料")  //"filament unload"
#define MSG_FILAMENT_CHANGE_UNLOAD_3        _UxGT("")  //""
#define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("�?�入�?料")  //"Insert filament"
#define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("并按键")  //"and press button"
#define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("�?�继续 ...")  //"to continue..."
#define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("等待")  //"Wait for"
#define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("进料")  //"filament load"
#define MSG_FILAMENT_CHANGE_LOAD_3          _UxGT("")  //""
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("等待")  //"Wait for"
#define MSG_FILAMENT_CHANGE_EXTRUDE_2       _UxGT("�?料挤出")  //"filament extrude"
#define MSG_FILAMENT_CHANGE_EXTRUDE_3       _UxGT("")  //""
#define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("等待打�?�")  //"Wait for print"
#define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("�?��?")  //"to resume"
#define MSG_FILAMENT_CHANGE_RESUME_3        _UxGT("")  //""

#else // LCD_HEIGHT < 4
#define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("请等待 ...")  //"Please wait..."
#define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("退出中 ...")  //"Ejecting..."
#define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("�?�入并�?�击")  //"Insert and Click"
#define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("装载中 ...")  //"Loading..."
#define MSG_FILAMENT_CHANGE_EXTRUDE_1       _UxGT("挤出中 ...")  //"Extruding..."
#define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("�?��?中 ...")  //"Resuming..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_ZH_CN_H
