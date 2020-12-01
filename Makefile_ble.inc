INCLUDES = -I$(APOLLO3_SDK)/third_party/exactle/ble-host/sources/stack/smp
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-host/sources/stack/dm
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-profiles/sources/profiles/gap
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/wsf/include
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/wsf/sources/port/freertos
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-profiles/sources/profiles/gatt
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-host/include
INCLUDES+= -I$(APOLLO3_SDK)/mcu/apollo3
INCLUDES+= -I$(APOLLO3_SDK)/third_party/FreeRTOSv10.1.1/Source/include
#INCLUDES+= -I$(APOLLO3_SDK)/ambiq_ble/profiles/amdtpcommon
INCLUDES+= -I$(APOLLO3_SDK)
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-profiles/sources/apps
INCLUDES+= -I$(APOLLO3_SDK)/third_party/uecc
INCLUDES+= -I$(APOLLO3_SDK)/CMSIS/AmbiqMicro/Include
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-profiles/include/app
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-profiles/sources/profiles
INCLUDES+= -I$(PROJECTPATH)/src
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/wsf/sources/util
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-profiles/sources/apps/app
INCLUDES+= -I$(APOLLO3_SDK)/CMSIS/ARM/Include
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-host/sources/stack/hci
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-profiles/sources/profiles/include
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-host/sources/hci/include
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-host/sources/hci/ambiq
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-profiles/sources/profiles/uribeacon
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-host/sources/sec/common
#INCLUDES+= -I$(APOLLO3_SDK)/ambiq_ble/profiles/amdtps
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-host/sources/stack/att
INCLUDES+= -I$(APOLLO3_SDK)/third_party/FreeRTOSv10.1.1/Source/portable/GCC/AMapollo2
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-profiles/sources/services
INCLUDES+= -I$(APOLLO3_SDK)/devices
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-host/sources/stack/cfg
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-profiles/sources/profiles/hid
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-host/sources/hci/ambiq/apollo3
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-profiles/sources/profiles/bas
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/ble-host/sources/stack/l2c
#INCLUDES+= -I$(APOLLO3_SDK)/ambiq_ble/apps/amdtps
INCLUDES+= -I$(APOLLO3_SDK)/utils
INCLUDES+= -I$(APOLLO3_SDK)/ambiq_ble/services
INCLUDES+= -I$(APOLLO3_SDK)/third_party/exactle/wsf/sources
INCLUDES+= -I$(BOARDPATH)/bsp