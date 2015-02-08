/*
 *    base64.cpp:
 *
 *    Copyright (C) 2015 limhiaoing <blog.poxiao.me> All Rights Reserved.
 *
 */

#include "base64.hpp"

namespace azure_proxy {
namespace encoding {

const char base64_encode_table[64] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', //0~6
    'H', 'I', 'J', 'K', 'L', 'M', 'N', //7~13
    'O', 'P', 'Q', /**/ 'R', 'S', 'T', //14~19
    'U', 'V', 'W', /**/ 'X', 'Y', 'Z', //21~25
    'a', 'b', 'c', 'd', 'e', 'f', 'g', //26~32
    'h', 'i', 'j', 'k', 'l', 'm', 'n', //33~39
    'o', 'p', 'q', /**/ 'r', 's', 't', //40~45
    'u', 'v', 'w', /**/ 'x', 'y', 'z', //46~51
    '0', '1', '2', '3', '4', '5', '6', //52~58
    '7', '8', '9', '+', '/'            //59~63
};

const int base64_decode_table[128] = {
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 62, -1, -1, -1, 63, 52, 53,
    54, 55, 56, 57, 58, 59, 60, 61, -1, -1,
    -1, -1, -1, -1, -1,  0,  1,  2,  3,  4,
     5,  6,  7,  8,  9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
    25, -1, -1, -1, -1, -1, -1, 26, 27, 28,
    29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
    39, 40, 41, 42, 43, 44, 45, 46, 47, 48,
    49, 50, 51, -1, -1, -1, -1, -1
};

} // namespace encoding
} // namespace azure_proxy
