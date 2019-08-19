/******************************************************************************
 * 
 *
 *****************************************************************************/

#include "modules/canbus/vehicle/hyundai_santa_fe/hyundai_santa_fe_message_manager.h"

#include "gtest/gtest.h"

#include "modules/canbus/vehicle/hyundai_santa_fe/protocol/brake_60.h"
#include "modules/canbus/vehicle/hyundai_santa_fe/protocol/steering_64.h"
#include "modules/canbus/vehicle/hyundai_santa_fe/protocol/throttle_62.h"

namespace apollo {
namespace canbus {
namespace hyundai_santa_fe {

using ::apollo::canbus::ChassisDetail;
using ::apollo::drivers::canbus::ProtocolData;

class HyundaiSantaFeMessageManagerTest : public ::testing::Test {
 public:
  virtual void SetUp() {}
};

TEST_F(HyundaiSantaFeMessageManagerTest, Brake60) {
  HyundaiSantaFeMessageManager manager;
  ProtocolData<ChassisDetail> *pd =
      manager.GetMutableProtocolDataById(Brake60::ID);
  EXPECT_NE(pd, nullptr);
  EXPECT_EQ(static_cast<Brake60 *>(pd)->ID, Brake60::ID);
}

TEST_F(HyundaiSantaFeMessageManagerTest, Steering64) {
  HyundaiSantaFeMessageManager manager;
  ProtocolData<ChassisDetail> *pd =
      manager.GetMutableProtocolDataById(Steering64::ID);
  EXPECT_NE(pd, nullptr);
  EXPECT_EQ(static_cast<Steering64 *>(pd)->ID, Steering64::ID);
}

TEST_F(HyundaiSantaFeMessageManagerTest, Throttle62) {
  HyundaiSantaFeMessageManager manager;
  ProtocolData<ChassisDetail> *pd =
      manager.GetMutableProtocolDataById(Throttle62::ID);
  EXPECT_NE(pd, nullptr);
  EXPECT_EQ(static_cast<Throttle62 *>(pd)->ID, Throttle62::ID);
}

}  // namespace hyundai_santa_fe
}  // namespace canbus
}  // namespace apollo
