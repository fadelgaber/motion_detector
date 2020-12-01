/* Copyright 2019 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "tensorflow/lite/micro/examples/motion_detector/ring_micro_features_data.h"

const int g_ring_micro_f9643d42_nohash_4_length = 128;
const int g_ring_micro_f9643d42_nohash_4_dim = 3;
// Raw accelerometer data with a sample rate of 25Hz
const float g_ring_micro_f9643d42_nohash_4_data[] = {
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,    0.0,
    0.0,    0.0,    0.0,    -665.0, 228.0,  827.0,  -680.0, 339.0,  716.0,
    -680.0, 564.0,  812.0,  -679.0, 552.0,  818.0,  -665.0, 528.0,  751.0,
    -658.0, 432.0,  618.0,  -655.0, 445.0,  592.0,  -667.0, 484.0,  556.0,
    -684.0, 590.0,  510.0,  -674.0, 672.0,  475.0,  -660.0, 786.0,  390.0,
    -562.0, 1124.0, 128.0,  -526.0, 1140.0, 111.0,  -486.0, 1044.0, 33.0,
    -416.0, 652.0,  -134.0, -390.0, 534.0,  -143.0, -365.0, 381.0,  -117.0,
    -314.0, 60.0,   94.0,   -322.0, 7.0,    190.0,  -338.0, -95.0,  342.0,
    -360.0, -106.0, 842.0,  -351.0, -41.0,  965.0,  -352.0, 12.0,   960.0,
    -366.0, 42.0,   1124.0, -322.0, 56.0,   1178.0, -312.0, 15.0,   1338.0,
    -254.0, 10.0,   1532.0, -241.0, 5.0,    1590.0, -227.0, 60.0,   1565.0,
    -204.0, 282.0,  1560.0, -180.0, 262.0,  1524.0, -138.0, 385.0,  1522.0,
    -84.0,  596.0,  1626.0, -55.0,  639.0,  1604.0, -19.0,  771.0,  1511.0,
    16.0,   932.0,  1132.0, 15.0,   924.0,  1013.0, 1.0,    849.0,  812.0,
    -88.0,  628.0,  500.0,  -114.0, 609.0,  463.0,  -155.0, 559.0,  382.0,
    -234.0, 420.0,  278.0,  -254.0, 390.0,  272.0,  -327.0, 200.0,  336.0,
    -558.0, -556.0, 630.0,  -640.0, -607.0, 740.0,  -706.0, -430.0, 868.0,
    -778.0, 42.0,   1042.0, -763.0, 84.0,   973.0,  -735.0, 185.0,  931.0,
    -682.0, 252.0,  766.0,  -673.0, 230.0,  757.0,  -671.0, 218.0,  757.0,
    -656.0, 222.0,  714.0,  -659.0, 238.0,  746.0,  -640.0, 276.0,  731.0,
    -634.0, 214.0,  754.0,  -637.0, 207.0,  735.0,  -637.0, 194.0,  742.0,
    -634.0, 248.0,  716.0,  -631.0, 265.0,  697.0,  -628.0, 252.0,  797.0,
    -592.0, 204.0,  816.0,  -618.0, 218.0,  812.0,  -633.0, 231.0,  828.0,
    -640.0, 222.0,  736.0,  -634.0, 221.0,  787.0,
};
