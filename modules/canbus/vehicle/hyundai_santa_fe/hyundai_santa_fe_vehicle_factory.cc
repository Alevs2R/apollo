/******************************************************************************
 * 
 *
 *****************************************************************************/

#include "modules/canbus/vehicle/hyundai_santa_fe/hyundai_santa_fe_vehicle_factory.h"

#include "cyber/common/log.h"
#include "modules/canbus/vehicle/hyundai_santa_fe/hyundai_santa_fe_controller.h"
#include "modules/canbus/vehicle/hyundai_santa_fe/hyundai_santa_fe_message_manager.h"
#include "modules/common/util/util.h"

namespace apollo {
namespace canbus {

std::unique_ptr<VehicleController>
HyundaiSantaFeVehicleFactory::CreateVehicleController() {
  return std::unique_ptr<VehicleController>(new hyundai_santa_fe::HyundaiSantaFeController());
}

std::unique_ptr<MessageManager<::apollo::canbus::ChassisDetail>>
HyundaiSantaFeVehicleFactory::CreateMessageManager() {
  return std::unique_ptr<MessageManager<::apollo::canbus::ChassisDetail>>(
      new hyundai_santa_fe::HyundaiSantaFeMessageManager());
}

}  // namespace canbus
}  // namespace apollo
