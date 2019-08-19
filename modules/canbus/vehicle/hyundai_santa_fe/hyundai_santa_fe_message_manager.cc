/******************************************************************************
 * 
 *
 *****************************************************************************/

#include "modules/canbus/vehicle/hyundai_santa_fe/hyundai_santa_fe_message_manager.h"

#include "modules/canbus/vehicle/hyundai_santa_fe/protocol/brake_60.h"
#include "modules/canbus/vehicle/hyundai_santa_fe/protocol/steering_64.h"
#include "modules/canbus/vehicle/hyundai_santa_fe/protocol/throttle_62.h"

namespace apollo {
namespace canbus {
namespace hyundai_santa_fe {

HyundaiSantaFeMessageManager::HyundaiSantaFeMessageManager() {
  // TODO(Authors): verify which one is recv/sent
  AddSendProtocolData<Brake60, true>();
  AddSendProtocolData<Throttle62, true>();
  AddSendProtocolData<Steering64, true>();
  
}

HyundaiSantaFeMessageManager::~HyundaiSantaFeMessageManager() {}

}  // namespace hyundai_santa_fe
}  // namespace canbus
}  // namespace apollo
