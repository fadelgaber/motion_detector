ifeq ($(TARGET), sparkfun_edge)
  INCLUDES += \
    -I$(APOLLO3_SDK)/$(SF_BSPS_DEST)/common/third_party/lis2dh12/

  THIRD_PARTY_CC_SRCS += \
    $(APOLLO3_SDK)/$(SF_BSPS_DEST)/common/third_party/lis2dh12/lis2dh12_platform_apollo3.c \
    $(APOLLO3_SDK)/boards_sfe/common/third_party/lis2dh12/lis2dh12_reg.c

  THIRD_PARTY_CC_HDRS += \
    $(APOLLO3_SDK)/boards_sfe/common/third_party/lis2dh12/lis2dh12_platform_apollo3.h \
    $(APOLLO3_SDK)/boards_sfe/common/third_party/lis2dh12/lis2dh12_reg.h
endif

ACCELEROMETER_HANDLER_TEST_SRCS := \
tensorflow/lite/micro/examples/motion_detector/accelerometer_handler.cc \
tensorflow/lite/micro/examples/motion_detector/accelerometer_handler_test.cc

PROJECTPATH = /home/fadel/Desktop/Projects/ml/AmbiqSuiteSDK/boards_sfe/common/examples/ble_freertos_dats
SDKPATH = /home/fadel/Desktop/Projects/ml/AmbiqSuiteSDK

INCLUDES += -I$(SDKPATH)/third_party/exactle/ble-host/sources/stack/smp
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-host/sources/stack/dm
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-profiles/sources/profiles/gap
INCLUDES+= -I$(SDKPATH)/third_party/exactle/wsf/include
INCLUDES+= -I$(SDKPATH)/third_party/exactle/wsf/sources/port/freertos
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-profiles/sources/profiles/gatt
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-host/include
INCLUDES+= -I$(SDKPATH)/mcu/apollo3
INCLUDES+= -I$(SDKPATH)/third_party/FreeRTOSv10.1.1/Source/include
#INCLUDES+= -I$(SDKPATH)/ambiq_ble/profiles/amdtpcommon
INCLUDES+= -I$(SDKPATH)
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-profiles/sources/apps
INCLUDES+= -I$(SDKPATH)/third_party/uecc
INCLUDES+= -I$(SDKPATH)/CMSIS/AmbiqMicro/Include
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-profiles/include/app
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-profiles/sources/profiles
INCLUDES+= -I$(PROJECTPATH)/src
INCLUDES+= -I$(SDKPATH)/third_party/exactle/wsf/sources/util
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-profiles/sources/apps/app
INCLUDES+= -I$(SDKPATH)/CMSIS/ARM/Include
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-host/sources/stack/hci
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-profiles/sources/profiles/include
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-host/sources/hci/include
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-host/sources/hci/ambiq
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-profiles/sources/profiles/uribeacon
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-host/sources/sec/common
#INCLUDES+= -I$(SDKPATH)/ambiq_ble/profiles/amdtps
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-host/sources/stack/att
INCLUDES+= -I$(SDKPATH)/third_party/FreeRTOSv10.1.1/Source/portable/GCC/AMapollo2
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-profiles/sources/services
INCLUDES+= -I$(SDKPATH)/devices
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-host/sources/stack/cfg
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-profiles/sources/profiles/hid
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-host/sources/hci/ambiq/apollo3
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-profiles/sources/profiles/bas
INCLUDES+= -I$(SDKPATH)/third_party/exactle/ble-host/sources/stack/l2c
#INCLUDES+= -I$(SDKPATH)/ambiq_ble/apps/amdtps
INCLUDES+= -I$(SDKPATH)/utils
INCLUDES+= -I$(SDKPATH)/ambiq_ble/services
INCLUDES+= -I$(SDKPATH)/third_party/exactle/wsf/sources
INCLUDES+= -I$(SDKPATH)/third_party/exactle/wsf/include
INCLUDES+= -I$(SDKPATH)/third_party/exactle/wsf/sources/port/freertos
INCLUDES+= -I$(BOARDPATH)/bsp

LIBS = $(SDKPATH)/mcu/apollo3/hal/gcc/bin/libam_hal.a
LIBS+= $(BOARDPATH)/bsp/gcc/bin/libam_bsp.a

ACCELEROMETER_HANDLER_TEST_HDRS := \
tensorflow/lite/micro/examples/motion_detector/accelerometer_handler.h

OUTPUT_HANDLER_TEST_SRCS := \
tensorflow/lite/micro/examples/motion_detector/output_handler.cc \
tensorflow/lite/micro/examples/motion_detector/output_handler_test.cc

OUTPUT_HANDLER_TEST_HDRS := \
tensorflow/lite/micro/examples/motion_detector/output_handler.h

GESTURE_PREDICTOR_TEST_SRCS := \
tensorflow/lite/micro/examples/motion_detector/gesture_predictor.cc \
tensorflow/lite/micro/examples/motion_detector/gesture_predictor_test.cc

GESTURE_PREDICTOR_TEST_HDRS := \
tensorflow/lite/micro/examples/motion_detector/constants.h \
tensorflow/lite/micro/examples/motion_detector/gesture_predictor.h \

motion_detector_TEST_SRCS := \
tensorflow/lite/micro/examples/motion_detector/motion_detector_test.cc \
tensorflow/lite/micro/examples/motion_detector/motion_detector_model_data.cc \
tensorflow/lite/micro/examples/motion_detector/slope_micro_features_data.cc \
tensorflow/lite/micro/examples/motion_detector/ring_micro_features_data.cc

motion_detector_TEST_HDRS := \
tensorflow/lite/micro/examples/motion_detector/motion_detector_model_data.h \
tensorflow/lite/micro/examples/motion_detector/slope_micro_features_data.h \
tensorflow/lite/micro/examples/motion_detector/ring_micro_features_data.h

motion_detector_SRCS := \
tensorflow/lite/micro/examples/motion_detector/main.cc \
tensorflow/lite/micro/examples/motion_detector/main_functions.cc \
tensorflow/lite/micro/examples/motion_detector/motion_detector_model_data.cc \
tensorflow/lite/micro/examples/motion_detector/accelerometer_handler.cc \
tensorflow/lite/micro/examples/motion_detector/gesture_predictor.cc \
tensorflow/lite/micro/examples/motion_detector/output_handler.cc

motion_detector_HDRS := \
tensorflow/lite/micro/examples/motion_detector/main_functions.h \
tensorflow/lite/micro/examples/motion_detector/constants.h \
tensorflow/lite/micro/examples/motion_detector/motion_detector_model_data.h \
tensorflow/lite/micro/examples/motion_detector/accelerometer_handler.h \
tensorflow/lite/micro/examples/motion_detector/gesture_predictor.h \
tensorflow/lite/micro/examples/motion_detector/output_handler.h

#Find any platform - specific rules for this example.
include $(wildcard tensorflow/lite/micro/examples/motion_detector/*/Makefile.inc)


# Tests the accelerometer handler
$(eval $(call microlite_test,gesture_accelerometer_handler_test,\
$(ACCELEROMETER_HANDLER_TEST_SRCS),$(ACCELEROMETER_HANDLER_TEST_HDRS)))

# Tests the output handler
$(eval $(call microlite_test,gesture_output_handler_test,\
$(OUTPUT_HANDLER_TEST_SRCS),$(OUTPUT_HANDLER_TEST_HDRS)))

# Tests the gesture predictor
$(eval $(call microlite_test,gesture_predictor_test,\
$(GESTURE_PREDICTOR_TEST_SRCS),$(GESTURE_PREDICTOR_TEST_HDRS)))

# Tests loading and running the gesture recognition model
$(eval $(call microlite_test,motion_detector_test,\
$(motion_detector_TEST_SRCS),$(motion_detector_TEST_HDRS)))

# Builds a standalone binary
$(eval $(call microlite_test,motion_detector,\
$(motion_detector_SRCS),$(motion_detector_HDRS)))
