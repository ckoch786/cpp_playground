#include <gtest/gtest.h>
#include "actuators.h"

TEST(Actuators, Fail) {

    middleware::Actuators actuators;
    actuators.init();
    EXPECT_EQ(1, 0);
}