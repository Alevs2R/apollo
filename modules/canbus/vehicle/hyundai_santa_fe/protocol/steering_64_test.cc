/******************************************************************************
 * 
 *
 *****************************************************************************/

#include "modules/canbus/vehicle/hyundai_santa_fe/protocol/steering_64.h"

#include "gtest/gtest.h"

namespace apollo {
namespace canbus {
namespace hyundai_santa_fe {

TEST(Steering64Test, General) {
  uint8_t data[8] = {0x67, 0x62, 0x63, 0x64, 0x51, 0x52, 0x53, 0x54};
  Steering64 steering;
  EXPECT_EQ(steering.GetPeriod(), 10 * 1000);
  steering.UpdateData(data);
  EXPECT_EQ(data[0], 0b00000000);
  EXPECT_EQ(data[1], 0b00000000);
  EXPECT_EQ(data[2], 0b01100000);
  EXPECT_EQ(data[3], 0b00000000);
  EXPECT_EQ(data[4], 0b01010001);
  EXPECT_EQ(data[5], 0b01010010);
  EXPECT_EQ(data[6], 0b01010011);
  EXPECT_EQ(data[7], 0b00000000);
}

}  // namespace hyundai_santa_fe
}  // namespace canbus
}  // namespace apollo
