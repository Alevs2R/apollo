/******************************************************************************
 * 
 *
 *****************************************************************************/

/**
 * @file hyundai_santa_fe_message_manager.h
 * @brief the class of hyundai_santa_feMessageManager
 */

#pragma once

#include "modules/canbus/proto/chassis_detail.pb.h"
#include "modules/drivers/canbus/can_comm/message_manager.h"

/**
 * @namespace apollo::canbus::hyundai_santa_fe
 * @brief apollo::canbus::hyundai_santa_fe
 */
namespace apollo {
namespace canbus {
namespace hyundai_santa_fe {

using ::apollo::drivers::canbus::MessageManager;

/**
 * @class HyundaiSantaFeMessageManager
 *
 * @brief implementation of MessageManager for hyundai_santa_fe vehicle
 */
class HyundaiSantaFeMessageManager
    : public MessageManager<::apollo::canbus::ChassisDetail> {
 public:
  /**
   * @brief construct a hyundai_santa_fe message manager. protocol data for send and
   * receive are added in the construction.
   */
  HyundaiSantaFeMessageManager();
  virtual ~HyundaiSantaFeMessageManager();
};

}  // namespace hyundai_santa_fe
}  // namespace canbus
}  // namespace apollo
