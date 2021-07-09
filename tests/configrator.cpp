#include "gtest/gtest.h"

#include "testing_functions/stdout_capturer.hpp"
#include "configurator.hpp"

//------------------------------------------------------------------------------
namespace tests {

class ConfiguratorTester : public ::testing::Test {};

TEST_F(ConfiguratorTester, CorrectConstructing) {
    xrep::config::XMLConfigurator configurator()
}

TEST_F(ConfiguratorTester, UncorrectConfigConstructing) {
}

TEST_F(ConfiguratorTester, DoubleValuesConfig) {
}

TEST_F(ConfiguratorTester, VoidConfig) {
}

TEST_F(ConfiguratorTester, CorrectGetConfigFor) {
}

TEST_F(ConfiguratorTester, TryToGetConfigForUnincludedClass) {
}

TEST_F(ConfiguratorTester, TryToGetVoidConfigFor) {
}

TEST_F(ConfiguratorTester, CorrectGetConfigForWithDoubleData) {
}

}