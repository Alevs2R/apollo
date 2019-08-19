/******************************************************************************
 * 
 *
 *****************************************************************************/

/**
 * @file brake_60.h
 * @brief the class of Brake60 (for hyundai_santa_fe vehicle)
 */

#pragma once

#include "modules/canbus/proto/chassis_detail.pb.h"
#include "modules/drivers/canbus/can_comm/protocol_data.h"

/**
 * @namespace apollo::canbus::hyundai_santa_fe
 * @brief apollo::canbus::hyundai_santa_fe
 */
namespace apollo {
namespace canbus {
namespace hyundai_santa_fe {

/**
 * @class Brake60
 *
 * @brief one of the protocol data of hyundai_santa_fe vehicle
 */
class Brake60 : public ::apollo::drivers::canbus::ProtocolData<
                    ::apollo::canbus::ChassisDetail> {
 public:
  static const int32_t ID;
  /**
   * @brief get the data period
   * @return the value of data period
   */
  uint32_t GetPeriod() const override;

  /**
   * @brief update the data
   * @param data a pointer to the data to be updated
   */
  void UpdateData(uint8_t *data) override;

  /**
   * @brief reset the private variables
   */
  void Reset() override;

  /**
   * @brief set pedal based on pedal command
   * @return a this pointer to the instance itself
   */
  Brake60 *set_pedal(double pcmd);

  /**
   * @brief set pedal_enable_ to true
   * @return a this pointer to the instance itself
   */
  Brake60 *set_enable();

  /**
   * @brief set pedal_enable_ to false
   * @return a this pointer to the instance itself
   */
  Brake60 *set_disable();

 private:
  /**
   * @brief enable boo command
   * @return a this pointer to the instance itself
   */
  Brake60 *enable_boo_cmd();

  /**
   * @brief disable boo command
   * @return a this pointer to the instance itself
   */
  Brake60 *disable_boo_cmd();

  /**
   * config detail: {'name': 'pcmd', 'offset': 0.0, 'precision':
   * 1.52590218966964e-05, 'len': 16, 'f_type': 'value', 'is_signed_var': False,
   * 'physical_range': '[0|1]', 'bit': 0, 'type': 'double', 'order': 'intel',
   * 'physical_unit': '"%"'}
   */
  void set_pedal_p(uint8_t *data, double pedal);

  /**
   * config detail: {'name': 'bcmd', 'offset': 0.0, 'precision': 1.0, 'len': 1,
   * 'f_type': 'valid', 'is_signed_var': False, 'physical_range': '[0|0]',
   * 'bit': 16, 'type': 'bool', 'order': 'intel', 'physical_unit': '""'}
   */
  void set_boo_cmd_p(uint8_t *bytes, bool boo_cmd);

  /**
   * config detail: {'name': 'en', 'offset': 0.0, 'precision': 1.0, 'len': 1,
   * 'f_type': 'valid', 'is_signed_var': False, 'physical_range': '[0|0]',
   * 'bit': 24, 'type': 'bool', 'order': 'intel', 'physical_unit': '""'}
   */
  void set_enable_p(uint8_t *bytes, bool en);

  /**
   * config detail: {'name': 'clear', 'offset': 0.0, 'precision': 1.0, 'len': 1,
   * 'f_type': 'valid', 'is_signed_var': False, 'physical_range': '[0|0]',
   * 'bit': 25, 'type': 'bool', 'order': 'intel', 'physical_unit': '""'}
   */
  void set_clear_driver_override_flag_p(uint8_t *bytes, bool clear);

  /**
   * config detail: {'name': 'ignore', 'offset': 0.0, 'precision': 1.0, 'len':
   * 1, 'f_type': 'valid', 'is_signed_var': False, 'physical_range': '[0|0]',
   * 'bit': 26, 'type': 'bool', 'order': 'intel', 'physical_unit': '""'}
   */
  void set_ignore_driver_override_p(uint8_t *bytes, bool ignore);

  /*
   * config detail: {'name': 'count', 'offset': 0.0, 'precision': 1.0, 'len': 8,
   * 'f_type': 'value', 'is_signed_var': False, 'physical_range': '[0|255]',
   * 'bit': 56, 'type': 'int', 'order': 'intel', 'physical_unit': '""'}
   */
  void set_watchdog_counter_p(uint8_t *data, int32_t count);

 private:
  double pedal_cmd_ = 0.0;
  bool boo_cmd_ = false;
  bool pedal_enable_ = false;
  bool clear_driver_override_flag_ = false;
  bool ignore_driver_override_ = false;
  int32_t watchdog_counter_ = 0.0;
};

}  // namespace hyundai_santa_fe
}  // namespace canbus
}  // namespace apollo
