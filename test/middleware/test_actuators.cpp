#include <gtest/gtest.h>
#include "middleware/actuators.h"

class ActuatorsTest : public ::testing::Test {
    protected:
        void SetUp() override {
            controller = new control::Actuators();
        }

        void TearDown() override {
            delete controller;
        }

        control::Actuators* controller;
};

TEST_F(ActuatorsTest, first) {

    EXPECT_EQ(1, 0);
}

TEST(Actuators, Fail) {

    EXPECT_EQ(1, 0);
}