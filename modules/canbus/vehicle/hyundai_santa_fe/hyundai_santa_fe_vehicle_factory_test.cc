/******************************************************************************
 * 
 *
 *****************************************************************************/

#include "modules/canbus/vehicle/hyundai_santa_fe/hyundai_santa_fe_vehicle_factory.h"

#include "gtest/gtest.h"

#include "modules/canbus/proto/vehicle_parameter.pb.h"

namespace apollo {
namespace canbus {

class HyundaiSantaFeVehicleFactoryTest : public ::testing::Test {
 public:
  virtual void SetUp() {
    VehicleParameter parameter;
    parameter.set_brand(apollo::common::HYUNDAI_SANTA_FE);
    hyundai_santa_fe_factory_.SetVehicleParameter(parameter);
  }
  virtual void TearDown() {}

 protected:
  HyundaiSantaFeVehicleFactory hyundai_santa_fe_factory_;
};

TEST_F(HyundaiSantaFeVehicleFactoryTest, InitVehicleController) {
  EXPECT_NE(hyundai_santa_fe_factory_.CreateVehicleController(), nullptr);
}

TEST_F(HyundaiSantaFeVehicleFactoryTest, InitMessageManager) {
  EXPECT_NE(hyundai_santa_fe_factory_.CreateMessageManager(), nullptr);
}

}  // namespace canbus
}  // namespace apollo
