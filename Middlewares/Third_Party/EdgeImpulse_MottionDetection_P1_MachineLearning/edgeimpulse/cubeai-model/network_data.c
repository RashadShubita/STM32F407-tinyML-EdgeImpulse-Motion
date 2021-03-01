#include "network_data.h"

ai_handle ai_network_data_weights_get(void)
{

  AI_ALIGNED(4)
  static const ai_u8 s_network_weights[ 3736 ] = {
    0x6d, 0x89, 0x56, 0xbe, 0xba, 0x04, 0x46, 0xbe, 0xcc, 0x89,
    0x27, 0xbe, 0x26, 0x49, 0x9a, 0x3d, 0x0b, 0xc5, 0xbe, 0xbc,
    0x69, 0x97, 0x30, 0x3d, 0x1f, 0x10, 0x89, 0xbe, 0x8e, 0x7a,
    0x78, 0xbe, 0x77, 0xaf, 0x67, 0xbe, 0x50, 0x16, 0xaf, 0x3d,
    0x32, 0x5e, 0xab, 0x3e, 0x2c, 0xa7, 0x03, 0xbe, 0xe3, 0x11,
    0x40, 0xbe, 0x98, 0xd1, 0xa8, 0x3e, 0xbf, 0x52, 0x2f, 0x3e,
    0x81, 0x64, 0xb9, 0x3e, 0xc2, 0x33, 0xac, 0x3e, 0xab, 0x61,
    0x92, 0xbd, 0x4e, 0x01, 0x68, 0x3e, 0x4b, 0x94, 0x41, 0xbe,
    0x8d, 0xff, 0xa1, 0x3e, 0x87, 0x3c, 0x87, 0xbe, 0xe8, 0x4d,
    0xc5, 0x3e, 0x02, 0xfe, 0xb1, 0x3e, 0x11, 0x39, 0x02, 0xbe,
    0x24, 0xfa, 0x08, 0x3e, 0xb9, 0x34, 0x7a, 0xbe, 0x64, 0xc5,
    0x42, 0x3e, 0x19, 0x35, 0xd4, 0xbd, 0x0a, 0x47, 0xef, 0xbd,
    0xb5, 0x5b, 0x36, 0xbe, 0xf8, 0x5d, 0x86, 0xbe, 0x2f, 0x0a,
    0xcc, 0x3d, 0x14, 0x77, 0x87, 0x3d, 0x8a, 0xfc, 0x69, 0x3d,
    0xfc, 0x21, 0xcd, 0x3c, 0xcb, 0xef, 0x17, 0xbe, 0x90, 0xd1,
    0xb2, 0x3d, 0x5f, 0x68, 0x92, 0x3e, 0x6a, 0xfb, 0x54, 0x3e,
    0xf9, 0xb1, 0x8b, 0x3e, 0xf6, 0x96, 0x80, 0xbe, 0xab, 0xbc,
    0x71, 0x3e, 0xc7, 0x6d, 0x58, 0x3e, 0xd8, 0xc8, 0x23, 0xbe,
    0xfb, 0x11, 0xb1, 0xbd, 0x94, 0x34, 0x8e, 0xbe, 0x28, 0x02,
    0x56, 0xbe, 0x97, 0x0e, 0x0b, 0xbe, 0x68, 0xbf, 0x17, 0xbe,
    0xa2, 0xe8, 0x92, 0xbe, 0x0e, 0xe9, 0x6b, 0x3e, 0xe4, 0x07,
    0xfe, 0x3d, 0x7c, 0xce, 0xa2, 0x3b, 0x6a, 0xf3, 0x2c, 0xbe,
    0x0d, 0xcc, 0x92, 0xbe, 0xea, 0x0e, 0x50, 0xbe, 0x81, 0x61,
    0xb2, 0x3d, 0x47, 0x34, 0x52, 0xbe, 0xd1, 0xe6, 0x8c, 0x3d,
    0xfa, 0xf7, 0x0b, 0x3e, 0xf2, 0xbe, 0x4b, 0xbe, 0x10, 0xcb,
    0x95, 0x3c, 0x60, 0x3b, 0x66, 0x3e, 0x87, 0xd8, 0x91, 0x3e,
    0xd8, 0x9b, 0xaf, 0xbe, 0x2f, 0x34, 0x09, 0xbd, 0xd0, 0xda,
    0xbe, 0xbe, 0xbd, 0xe4, 0x94, 0xbe, 0xcc, 0x56, 0xc6, 0x3d,
    0xe7, 0x10, 0xe3, 0xbc, 0x1f, 0x34, 0xf7, 0x3c, 0x7f, 0x08,
    0xad, 0xbe, 0x34, 0x98, 0xa1, 0xbd, 0x21, 0xe0, 0x7b, 0xbe,
    0x46, 0x94, 0x47, 0x3c, 0xd2, 0x27, 0x0b, 0xbe, 0xaa, 0xb2,
    0xff, 0xbd, 0xc1, 0x5a, 0x94, 0xbe, 0xd3, 0x12, 0xf0, 0xbd,
    0x49, 0xdf, 0x06, 0x3e, 0x44, 0x9e, 0xa4, 0xbe, 0xf8, 0x24,
    0x87, 0xbe, 0xb4, 0x7c, 0xe4, 0xbd, 0xb5, 0x6e, 0x8d, 0x3e,
    0x2f, 0x82, 0xb2, 0xbe, 0xb8, 0x72, 0x3a, 0x3e, 0x6e, 0xd2,
    0xb3, 0xbd, 0x7d, 0x5b, 0x5e, 0xbe, 0x36, 0x76, 0x98, 0x3c,
    0x3e, 0x37, 0x4d, 0xbe, 0x3a, 0xf1, 0x57, 0x3e, 0x09, 0xcd,
    0x81, 0xbc, 0x13, 0xad, 0x48, 0xbe, 0x57, 0x2a, 0xb1, 0xbd,
    0x73, 0x92, 0x4c, 0xbe, 0x16, 0x91, 0x83, 0xbe, 0x19, 0xb1,
    0x45, 0x3e, 0xd9, 0xb8, 0xad, 0xbe, 0x2d, 0x0c, 0xbc, 0xbe,
    0x3a, 0x7b, 0x06, 0xbe, 0x84, 0xed, 0x9c, 0xbe, 0xe4, 0xc3,
    0xc9, 0x3d, 0x2f, 0x63, 0x3f, 0x3d, 0x49, 0x9d, 0x77, 0x3d,
    0x75, 0x71, 0x88, 0xbe, 0x50, 0x97, 0x51, 0x3d, 0x9f, 0x98,
    0x36, 0x3c, 0x73, 0x68, 0x79, 0x3e, 0x31, 0x0f, 0x25, 0xbd,
    0x50, 0x89, 0xa9, 0xbe, 0x3b, 0xe2, 0x3d, 0x3c, 0x0b, 0x04,
    0xd8, 0x3d, 0x24, 0x7d, 0x56, 0xbc, 0x52, 0xc2, 0x50, 0xbe,
    0x59, 0x68, 0x02, 0xbe, 0x7f, 0xb0, 0xdf, 0xbd, 0x25, 0xa6,
    0xa0, 0x3e, 0x7b, 0x99, 0x25, 0x3e, 0x48, 0x39, 0xc0, 0xbe,
    0xd6, 0x29, 0x80, 0xbe, 0xc1, 0xc6, 0x95, 0x3e, 0x08, 0x89,
    0x88, 0xbc, 0xd4, 0x17, 0xb5, 0xbd, 0x9c, 0xb4, 0x8f, 0x3e,
    0x6a, 0xea, 0xa5, 0xbc, 0xb5, 0x7c, 0x15, 0xbe, 0x34, 0x77,
    0x5f, 0x3e, 0x70, 0xf0, 0x7a, 0x3d, 0xa2, 0x99, 0x1f, 0xbc,
    0xee, 0x72, 0x4e, 0x3e, 0x20, 0x87, 0x95, 0xbc, 0x64, 0x49,
    0xb6, 0xbc, 0xae, 0xd5, 0x25, 0x3e, 0x82, 0xac, 0x67, 0xbe,
    0x6e, 0x07, 0x3b, 0x3e, 0xc1, 0x96, 0xa3, 0x3d, 0x19, 0x71,
    0x8d, 0x3e, 0x52, 0xc0, 0x8d, 0xbe, 0x63, 0xea, 0x04, 0xbe,
    0xae, 0xef, 0x2e, 0x3d, 0x74, 0x89, 0x99, 0x3d, 0x43, 0x06,
    0xa9, 0x3d, 0x4d, 0xd1, 0x18, 0xbc, 0x8e, 0xf6, 0x41, 0xbd,
    0x05, 0x6e, 0xb6, 0xbd, 0xc9, 0x64, 0x9d, 0xbe, 0x29, 0xf3,
    0x17, 0xbd, 0xb9, 0x59, 0x40, 0xbe, 0x31, 0xed, 0x2f, 0xbe,
    0x20, 0x5e, 0x9b, 0x3d, 0x02, 0xa5, 0x31, 0x3d, 0x7a, 0xcf,
    0x1e, 0x3d, 0x25, 0x84, 0x1f, 0xbe, 0x25, 0xc5, 0x11, 0xbe,
    0xb5, 0x2c, 0xd2, 0x3e, 0xa8, 0x11, 0x54, 0xbd, 0xdf, 0xc9,
    0x72, 0xbd, 0xfa, 0x87, 0x8a, 0x3e, 0xae, 0xe6, 0x04, 0x3e,
    0x63, 0xfc, 0x91, 0x3e, 0x80, 0x39, 0x45, 0xbb, 0xad, 0xcf,
    0x69, 0x3b, 0x73, 0x11, 0x46, 0xbe, 0x57, 0xad, 0x40, 0xbe,
    0xae, 0xc1, 0x69, 0x3e, 0xe0, 0x8f, 0xf0, 0xbd, 0x80, 0xb2,
    0x95, 0xbb, 0x95, 0x90, 0x84, 0x3c, 0x86, 0xa0, 0x4a, 0x3d,
    0xd1, 0xec, 0x4a, 0x3e, 0xec, 0x86, 0x03, 0x3e, 0xf8, 0xf1,
    0xe4, 0x3d, 0x6d, 0x22, 0x76, 0x3d, 0x89, 0xd2, 0x67, 0xbe,
    0x46, 0xff, 0xef, 0xbd, 0xda, 0x29, 0x09, 0xbe, 0x8e, 0x64,
    0xc1, 0x3e, 0x59, 0xb1, 0xad, 0xbd, 0x8e, 0xea, 0x9e, 0x3e,
    0x0e, 0x01, 0x10, 0x3e, 0x43, 0x05, 0xc5, 0xbd, 0x97, 0x1d,
    0x40, 0x3e, 0x9e, 0xd4, 0x65, 0x3e, 0x89, 0x57, 0xa9, 0x3e,
    0xa9, 0x10, 0xbb, 0xbd, 0x73, 0x6b, 0x70, 0xbe, 0x44, 0x6d,
    0xcc, 0x3b, 0xdd, 0xfe, 0x16, 0xbe, 0x05, 0x43, 0x1c, 0xbe,
    0x9d, 0x83, 0xc0, 0x3d, 0x6a, 0x71, 0xfe, 0x3d, 0xb8, 0xdb,
    0xbf, 0xbd, 0x8e, 0x1c, 0x6e, 0x3e, 0x18, 0x4a, 0xe0, 0x3d,
    0x80, 0x9e, 0x55, 0x3e, 0x36, 0x6c, 0xc6, 0x3e, 0x04, 0x47,
    0xa6, 0x3d, 0x65, 0xb6, 0x91, 0xbe, 0xf3, 0xeb, 0x87, 0x3e,
    0xa7, 0xcb, 0x9f, 0xbd, 0xac, 0xc9, 0x1e, 0xbe, 0xea, 0xcb,
    0x25, 0xbe, 0xc3, 0xc7, 0x93, 0x3d, 0xb3, 0x14, 0x90, 0x3d,
    0x98, 0x7f, 0x9a, 0xbd, 0xdf, 0xeb, 0x41, 0xbe, 0xa8, 0x40,
    0x11, 0x3e, 0x7c, 0xc6, 0x9e, 0xbe, 0x96, 0xc1, 0x90, 0xbe,
    0x1d, 0x11, 0xbb, 0xbe, 0xa8, 0x7a, 0x88, 0xbe, 0xe0, 0x22,
    0x82, 0x3e, 0x71, 0x3c, 0x4b, 0x3d, 0x8c, 0xf3, 0xd1, 0xbd,
    0x50, 0x14, 0x03, 0x3e, 0x04, 0x04, 0xb8, 0x3d, 0x0e, 0xc9,
    0x16, 0xbe, 0x84, 0xc7, 0x0a, 0x3d, 0xab, 0x90, 0x8e, 0xbd,
    0x69, 0xd1, 0x8d, 0x3e, 0x92, 0x62, 0x84, 0xbe, 0x0e, 0x77,
    0x60, 0x3d, 0xa2, 0x3f, 0xb5, 0xbc, 0x4d, 0x33, 0x47, 0xbe,
    0x0d, 0x36, 0xc4, 0x3c, 0xf9, 0x31, 0x55, 0x3d, 0x34, 0x1f,
    0xbb, 0xbd, 0x81, 0x39, 0xfc, 0x3d, 0x36, 0x04, 0x00, 0xbe,
    0xe2, 0xd2, 0x72, 0xbe, 0x0c, 0xba, 0xf5, 0xbd, 0x69, 0x23,
    0xb8, 0x3e, 0x1a, 0x6f, 0x77, 0xbe, 0x89, 0x01, 0x29, 0xbd,
    0x9f, 0x6d, 0x91, 0xbe, 0x73, 0x01, 0xaf, 0x3e, 0xba, 0x64,
    0x87, 0x3d, 0xe1, 0x3b, 0x9e, 0xbe, 0x1b, 0x74, 0x89, 0x3e,
    0x60, 0x46, 0x96, 0xbe, 0x0a, 0x9a, 0x1d, 0x3e, 0x2e, 0xcf,
    0x1d, 0xbe, 0xcc, 0x5b, 0x51, 0xbe, 0xe5, 0x2e, 0xfc, 0xbd,
    0x12, 0x52, 0x17, 0xbe, 0xa6, 0x41, 0x56, 0xbc, 0xe6, 0x3a,
    0xea, 0x3c, 0xfe, 0xe4, 0x76, 0xbe, 0xf0, 0x20, 0x9f, 0x3c,
    0x1c, 0x96, 0x76, 0xbd, 0x62, 0xbd, 0xcc, 0xbd, 0xd8, 0xd7,
    0x80, 0xbe, 0x37, 0xd2, 0x90, 0xbe, 0x02, 0xaf, 0x01, 0xbd,
    0x26, 0x37, 0x8c, 0xbc, 0xd6, 0xcc, 0x82, 0xbe, 0x7c, 0xd0,
    0x87, 0x3e, 0x09, 0x83, 0x0c, 0x3e, 0x77, 0x68, 0x1f, 0x3e,
    0xce, 0x12, 0x6d, 0x3e, 0x8b, 0x32, 0x80, 0xbe, 0x9f, 0x34,
    0xa1, 0x3e, 0xb3, 0x09, 0x83, 0xbe, 0xf7, 0xa0, 0xbc, 0x3d,
    0xef, 0xa2, 0xf7, 0x3d, 0x51, 0xcc, 0xe5, 0x3d, 0x76, 0x43,
    0xa9, 0xbe, 0xfa, 0xd3, 0x51, 0x3e, 0x55, 0x51, 0x14, 0x3e,
    0xe5, 0x02, 0xe3, 0xbd, 0x18, 0x7f, 0x87, 0xbd, 0x67, 0xe3,
    0x0d, 0x3e, 0x05, 0x12, 0x8a, 0xbe, 0x1b, 0xae, 0xad, 0xbe,
    0x4e, 0x10, 0x9a, 0x3e, 0x22, 0x6c, 0x21, 0x3c, 0x57, 0xb7,
    0x12, 0xbe, 0xa2, 0xfd, 0xb2, 0xbe, 0xbd, 0x16, 0x5b, 0xbe,
    0x2a, 0xb8, 0x53, 0x3d, 0x27, 0x7d, 0x80, 0xbd, 0x82, 0x6f,
    0x75, 0x3e, 0x73, 0x4d, 0x8c, 0xbc, 0x14, 0xfa, 0x5e, 0xbd,
    0xd1, 0x5f, 0xd4, 0xbd, 0x5e, 0xd6, 0x94, 0xbd, 0x27, 0x61,
    0x8c, 0x3e, 0x05, 0x23, 0x1d, 0xbe, 0x66, 0xe0, 0x1a, 0x3f,
    0x06, 0x16, 0x95, 0xbe, 0xf4, 0xe0, 0xf0, 0x3d, 0x85, 0x1a,
    0x81, 0x3e, 0x00, 0x2d, 0xa9, 0xbb, 0x64, 0x26, 0x09, 0xbe,
    0x4e, 0x65, 0xdb, 0x3d, 0xe1, 0xbb, 0x23, 0xbe, 0x4f, 0x9b,
    0xd0, 0x3c, 0x92, 0x31, 0xd4, 0x3d, 0x33, 0xe7, 0x95, 0x3d,
    0x5d, 0x3c, 0x4f, 0x3e, 0x67, 0x2e, 0x7e, 0xbe, 0xf3, 0x3b,
    0x57, 0x3c, 0xcb, 0x11, 0x0b, 0x3c, 0x6f, 0x47, 0x01, 0xbe,
    0x13, 0x03, 0x51, 0x3e, 0x47, 0x77, 0x7d, 0xbc, 0xe4, 0x9f,
    0x59, 0x3d, 0x08, 0xc8, 0x94, 0xbd, 0xe1, 0x7c, 0xf5, 0xbd,
    0xa4, 0xdb, 0x98, 0x3c, 0xef, 0x16, 0x85, 0x3d, 0xc8, 0x19,
    0xdf, 0xbd, 0xc8, 0x8e, 0x01, 0x3e, 0x7b, 0x82, 0xa8, 0x3e,
    0xe9, 0xae, 0x8a, 0x3e, 0x0b, 0x1b, 0x6d, 0xbe, 0x11, 0x45,
    0x74, 0x3e, 0x53, 0xf6, 0x39, 0xbe, 0x70, 0x2b, 0x12, 0x3c,
    0xd0, 0xd1, 0x08, 0x3f, 0xfe, 0x0a, 0x92, 0x3e, 0x22, 0xf6,
    0x0e, 0xbe, 0xc7, 0xf1, 0x9e, 0xbd, 0x36, 0xf5, 0x29, 0xbe,
    0xae, 0x23, 0xa6, 0x3e, 0x52, 0x12, 0x42, 0x3e, 0x64, 0x43,
    0x68, 0xbe, 0x08, 0x32, 0xf4, 0x3d, 0xb0, 0x85, 0x47, 0x3c,
    0x96, 0x48, 0x64, 0xbe, 0xcb, 0x17, 0x6e, 0xbe, 0xe0, 0x6b,
    0x8b, 0xbe, 0x0f, 0x35, 0x56, 0xbe, 0x9e, 0xa4, 0xb6, 0x3e,
    0x13, 0x90, 0xa3, 0xbd, 0xd9, 0xf4, 0x12, 0x3e, 0xe0, 0x6d,
    0x30, 0xbc, 0x82, 0xb4, 0xab, 0x3d, 0xec, 0x64, 0x89, 0x3e,
    0xfd, 0x46, 0x8d, 0x3d, 0x51, 0x8c, 0xa7, 0x3e, 0xd7, 0x3c,
    0xd7, 0x3d, 0x1d, 0x72, 0xa6, 0x3e, 0x23, 0xd5, 0x22, 0x3b,
    0x25, 0x91, 0x4e, 0xbe, 0xda, 0x4e, 0x2e, 0xbe, 0xe2, 0xcc,
    0x78, 0x3e, 0xaa, 0x75, 0xd3, 0xbd, 0x8c, 0x3c, 0xa6, 0xba,
    0x92, 0xbd, 0x09, 0xbe, 0xe3, 0xc2, 0x79, 0x3d, 0xd2, 0xd7,
    0x80, 0x3e, 0x1c, 0xb9, 0x98, 0xbe, 0xf8, 0xcf, 0xcd, 0xbd,
    0x3b, 0xa5, 0xc1, 0x3d, 0x98, 0x9e, 0x49, 0xbe, 0xf2, 0x88,
    0x60, 0x3e, 0x63, 0xd9, 0x17, 0x3e, 0xa7, 0x1e, 0x8d, 0xbe,
    0xe8, 0x43, 0x95, 0x3e, 0x71, 0x50, 0x4c, 0xbc, 0xfc, 0x5b,
    0x89, 0xbe, 0xc1, 0x82, 0x9a, 0x3e, 0x22, 0x2d, 0x13, 0x3e,
    0x91, 0x27, 0x62, 0x3c, 0x09, 0xf7, 0xbd, 0xbd, 0x6f, 0xa8,
    0x39, 0x3c, 0x1d, 0xf9, 0x90, 0x3e, 0xe9, 0x42, 0x87, 0x3d,
    0x96, 0xf7, 0x6d, 0x3e, 0x24, 0xc8, 0x9a, 0x3e, 0x69, 0x0f,
    0xb6, 0x3e, 0xc3, 0xeb, 0xb2, 0xbd, 0xb5, 0x98, 0x6b, 0x3e,
    0x51, 0x54, 0x5b, 0x3c, 0xd0, 0x33, 0x8a, 0xbe, 0xf9, 0x21,
    0x73, 0xbe, 0xc8, 0x9b, 0xd0, 0x3d, 0x00, 0x86, 0x86, 0x3c,
    0xfe, 0x9a, 0x1d, 0x3e, 0x5d, 0x1b, 0x83, 0x3e, 0x8e, 0x2a,
    0x51, 0x3e, 0x35, 0x80, 0xf7, 0x3d, 0x89, 0xee, 0x32, 0xbe,
    0x89, 0x56, 0x6d, 0xbd, 0x75, 0x80, 0x12, 0x3e, 0xae, 0x35,
    0x3f, 0x3e, 0x28, 0x19, 0x85, 0xbe, 0x39, 0x46, 0xea, 0xbd,
    0x2b, 0xd1, 0x8b, 0x3e, 0x7d, 0xbc, 0x7c, 0xbe, 0x3e, 0x64,
    0x4f, 0x3e, 0xab, 0x93, 0xa8, 0xbe, 0x2b, 0xc9, 0xaa, 0x3d,
    0xde, 0x4a, 0x88, 0xbe, 0x82, 0x2c, 0x36, 0x3e, 0x72, 0x4a,
    0x81, 0x3e, 0x50, 0x5a, 0xdf, 0x3d, 0x92, 0xe8, 0x33, 0xbe,
    0xc7, 0xe0, 0x9b, 0x3e, 0x74, 0xc7, 0xdd, 0xbd, 0x1b, 0x5d,
    0xee, 0x3d, 0x3c, 0x61, 0x14, 0xbe, 0xa2, 0xa5, 0x11, 0xbc,
    0x88, 0x8c, 0xb3, 0x3e, 0x5e, 0x7a, 0xd1, 0x3c, 0x89, 0x8f,
    0xea, 0xbd, 0x02, 0xb5, 0x5c, 0xbe, 0x3d, 0xe0, 0xa6, 0x3e,
    0x11, 0x35, 0x9f, 0x3e, 0x71, 0x17, 0x8d, 0xbe, 0xf8, 0x20,
    0x28, 0x3e, 0x42, 0x23, 0x51, 0x3c, 0xdb, 0xb2, 0xa2, 0xbe,
    0x52, 0x23, 0x39, 0xbd, 0xe7, 0x09, 0x84, 0xbe, 0x2b, 0x06,
    0x81, 0xbc, 0xd3, 0xec, 0xa5, 0x3e, 0xdd, 0x70, 0xd0, 0xbd,
    0x57, 0x00, 0x75, 0xbe, 0xf6, 0x26, 0x76, 0xbc, 0x22, 0x7e,
    0x4f, 0xbe, 0xaa, 0xf7, 0xcb, 0x3d, 0xa3, 0x58, 0x8b, 0x3e,
    0x1c, 0x14, 0x0f, 0xbe, 0x0c, 0x3b, 0x2f, 0x3e, 0x56, 0x3a,
    0x8e, 0xbd, 0x90, 0x4c, 0xa1, 0xbd, 0xc7, 0xfa, 0x81, 0x3b,
    0xe7, 0xb9, 0x2e, 0x3d, 0x2d, 0xa5, 0x04, 0xbe, 0x5b, 0x79,
    0x3d, 0x3e, 0x3c, 0x45, 0x13, 0x3c, 0xb4, 0xd3, 0xf8, 0xbd,
    0x0e, 0xf1, 0x03, 0x3e, 0xd8, 0x01, 0x86, 0xbd, 0x4d, 0x6f,
    0x9a, 0x3d, 0xae, 0x2c, 0x5d, 0x3e, 0xf7, 0x7a, 0x94, 0x3e,
    0xcf, 0x8f, 0x81, 0x3e, 0x48, 0x90, 0xfb, 0x3d, 0x41, 0x20,
    0x33, 0xbe, 0x4d, 0x50, 0xbd, 0xbc, 0xb1, 0x53, 0x0b, 0x3d,
    0x2d, 0x76, 0x6f, 0xbe, 0x6d, 0x8d, 0x57, 0xbe, 0x30, 0xae,
    0xb9, 0x3d, 0xb0, 0x6b, 0x70, 0x3e, 0x49, 0x43, 0xb8, 0xbe,
    0x0d, 0x14, 0x23, 0xbe, 0xa7, 0x15, 0xc9, 0x3d, 0x92, 0x7b,
    0x4b, 0xbe, 0xe4, 0xbd, 0xbc, 0xbe, 0xe6, 0x35, 0x42, 0x3e,
    0xec, 0xe8, 0x12, 0x3e, 0xcb, 0xd8, 0xb7, 0x3c, 0xb0, 0x2a,
    0x80, 0x3e, 0x47, 0x03, 0x17, 0xbe, 0xa6, 0xd6, 0xbb, 0xbe,
    0x0d, 0xad, 0x96, 0x3e, 0xbf, 0xcf, 0x60, 0x3d, 0x02, 0x88,
    0x68, 0xbe, 0xb1, 0xb9, 0xb5, 0xbe, 0x71, 0x50, 0x9a, 0x3e,
    0x67, 0xe5, 0x40, 0xbe, 0x1a, 0x87, 0x02, 0x3e, 0x7e, 0x62,
    0x15, 0xbe, 0xfc, 0xdf, 0x16, 0x3e, 0x7a, 0xa9, 0x52, 0x3e,
    0x2f, 0xee, 0x46, 0xba, 0x55, 0x15, 0x17, 0xbe, 0xf5, 0xf2,
    0x9f, 0xbe, 0x86, 0x89, 0xa9, 0xbd, 0xdd, 0xd3, 0x9a, 0xbe,
    0x6e, 0x46, 0xe4, 0xbd, 0x98, 0x0c, 0xdb, 0x3b, 0x38, 0xef,
    0xa8, 0xbd, 0x2e, 0x3b, 0x55, 0xbe, 0x70, 0xd3, 0x39, 0xbe,
    0x50, 0xf7, 0x10, 0xbe, 0xaf, 0x32, 0x62, 0xbe, 0xd8, 0xf7,
    0x74, 0x3d, 0x21, 0x91, 0xf6, 0x3d, 0x3d, 0x1a, 0x60, 0xbe,
    0xbf, 0xd3, 0x64, 0x3d, 0x68, 0x1d, 0x29, 0x3e, 0x31, 0xd4,
    0xd0, 0xbc, 0x79, 0x7c, 0x85, 0xbe, 0x4b, 0xbe, 0x6d, 0xbd,
    0x28, 0x06, 0x16, 0xbe, 0x00, 0xfc, 0xaa, 0x3c, 0x0d, 0x5f,
    0x76, 0x3c, 0x1d, 0xf1, 0xd7, 0xbc, 0xb3, 0xba, 0x65, 0x3e,
    0x73, 0xb4, 0x6e, 0xbe, 0x06, 0x83, 0x94, 0x3e, 0xbb, 0xfa,
    0x07, 0xbe, 0xf2, 0x4a, 0xb2, 0x3d, 0xf2, 0x72, 0xe8, 0xbd,
    0x55, 0x56, 0x83, 0x3e, 0xad, 0xd3, 0x6b, 0xbe, 0x5a, 0x8a,
    0x28, 0xbe, 0x5f, 0x22, 0x87, 0xbd, 0xe5, 0xa4, 0x72, 0x3e,
    0x51, 0xf1, 0x68, 0xbe, 0xd2, 0x2d, 0xfe, 0x3d, 0xbe, 0xc7,
    0x24, 0xbe, 0x81, 0x70, 0xfd, 0xbd, 0x3f, 0xe3, 0x9a, 0x3e,
    0x11, 0x3c, 0x8f, 0xbe, 0xf6, 0xd7, 0x6a, 0xbd, 0x4a, 0xe2,
    0x48, 0x3e, 0xe6, 0xa0, 0x52, 0x3e, 0xcb, 0x85, 0x51, 0x3e,
    0xce, 0x2c, 0x49, 0x3d, 0x3e, 0xf2, 0x32, 0xbe, 0x74, 0x8a,
    0x51, 0x3d, 0x40, 0x0a, 0x98, 0xbe, 0xfa, 0x98, 0x3a, 0xbe,
    0x06, 0x6f, 0xf7, 0xbd, 0x8f, 0x5d, 0x2e, 0x3e, 0xc7, 0x20,
    0xba, 0x3d, 0xdf, 0x52, 0x2c, 0xbb, 0x60, 0xb3, 0xfa, 0x3c,
    0x4a, 0xdb, 0xa7, 0xbe, 0xc4, 0xa2, 0x9b, 0xbe, 0xa1, 0xaa,
    0xa6, 0xbe, 0x21, 0x72, 0x92, 0xbe, 0xea, 0x40, 0x8a, 0x3e,
    0x5f, 0xf8, 0x25, 0x3e, 0x17, 0xbe, 0x43, 0x3d, 0x11, 0xa4,
    0xea, 0xbc, 0xd4, 0x3c, 0xb3, 0x3c, 0x76, 0xc2, 0x64, 0xbd,
    0xaa, 0xa0, 0x22, 0xbe, 0x1e, 0xdc, 0xa2, 0xbd, 0x61, 0x8f,
    0x84, 0x3d, 0x24, 0xb2, 0x81, 0xbb, 0x6f, 0xb5, 0x6e, 0xbe,
    0x45, 0xc7, 0x54, 0xbe, 0x7f, 0x9e, 0x86, 0xbe, 0xfc, 0x98,
    0x68, 0xbe, 0x13, 0x3d, 0x4a, 0x3e, 0x52, 0xd1, 0x65, 0x3e,
    0x13, 0xe9, 0x3f, 0x3e, 0xf6, 0x6c, 0x8e, 0xbe, 0x4f, 0x12,
    0xc1, 0x3b, 0x30, 0x71, 0xf5, 0xbd, 0xf2, 0x04, 0x85, 0xbe,
    0x91, 0xc4, 0xc0, 0xbd, 0xde, 0x7a, 0x12, 0x3f, 0xdb, 0xd4,
    0x85, 0x3e, 0x90, 0xd6, 0x81, 0x3e, 0x97, 0xf3, 0x12, 0xbd,
    0x2a, 0x2f, 0x68, 0x3c, 0x3d, 0x17, 0xb5, 0x3e, 0x35, 0xa9,
    0x9e, 0x3e, 0x58, 0xff, 0xba, 0x3d, 0x29, 0xbd, 0x9c, 0xbb,
    0xf4, 0xa3, 0x80, 0x3c, 0xd1, 0x7d, 0x32, 0xbe, 0xcd, 0xb9,
    0x33, 0xbc, 0x93, 0x34, 0xaf, 0xbe, 0x71, 0xef, 0xa0, 0xbe,
    0x5d, 0x34, 0x89, 0x3e, 0x8d, 0x39, 0x2b, 0xbe, 0x80, 0x28,
    0x1a, 0x3d, 0x22, 0x6c, 0x72, 0x3e, 0xea, 0x86, 0x5d, 0xbe,
    0x0a, 0xc3, 0x00, 0x3b, 0x0e, 0x14, 0x9a, 0x3b, 0x7f, 0x44,
    0xeb, 0x3d, 0xad, 0xe9, 0x26, 0x3d, 0x66, 0x78, 0x03, 0xbe,
    0xca, 0x65, 0xa9, 0xbd, 0xa3, 0x7d, 0xf7, 0xbd, 0x70, 0xff,
    0x54, 0xbc, 0x10, 0xe9, 0x9f, 0xbd, 0x9c, 0xa7, 0x33, 0xbe,
    0xed, 0xcc, 0x6f, 0x3e, 0xce, 0xdc, 0xa7, 0xbe, 0x49, 0x25,
    0xec, 0xbd, 0x30, 0xc0, 0x22, 0x3e, 0xd0, 0x8a, 0x13, 0xbe,
    0x62, 0x2d, 0x88, 0x3e, 0x82, 0x57, 0x52, 0xbd, 0x21, 0xec,
    0x84, 0xbe, 0xc2, 0xbe, 0x9d, 0x3e, 0xd1, 0xbd, 0x2f, 0x3e,
    0x4a, 0x8b, 0x31, 0x3e, 0xab, 0xd3, 0x25, 0x3e, 0x46, 0xa4,
    0x0b, 0x3d, 0x01, 0x7d, 0x11, 0x3d, 0x29, 0x46, 0x4e, 0xbe,
    0xa0, 0x79, 0xe8, 0xbc, 0x9c, 0x30, 0x95, 0x3e, 0x27, 0x2f,
    0xac, 0x3e, 0xa9, 0x5d, 0x6a, 0x3e, 0xf7, 0x56, 0x34, 0x3e,
    0x65, 0x08, 0x9b, 0x3c, 0xb2, 0x83, 0x67, 0xbe, 0x99, 0x3f,
    0xb4, 0xbd, 0x95, 0x18, 0x6b, 0xbd, 0x61, 0x46, 0x84, 0xbe,
    0x8d, 0x03, 0x42, 0xbe, 0xdc, 0x27, 0x94, 0x3e, 0xae, 0x7b,
    0xe9, 0xba, 0x8f, 0x75, 0xcc, 0xbd, 0x3e, 0x91, 0x87, 0x3e,
    0xbf, 0x15, 0xab, 0xbd, 0x26, 0xe5, 0x8d, 0xbc, 0xf8, 0xac,
    0x8d, 0xbe, 0x1a, 0xcd, 0x83, 0xbc, 0x3d, 0x68, 0x6c, 0x3e,
    0x53, 0x85, 0x85, 0xbe, 0x13, 0x5f, 0x5c, 0xbd, 0xcc, 0x8a,
    0x13, 0x3e, 0xfc, 0xe6, 0x2b, 0xbe, 0xa0, 0xac, 0x84, 0xbe,
    0x87, 0xfd, 0x92, 0x3e, 0x66, 0x5f, 0x61, 0xbd, 0x13, 0x13,
    0xd8, 0x3d, 0xa0, 0x38, 0xa8, 0xbc, 0x39, 0xa7, 0x77, 0x3e,
    0x2e, 0x22, 0x32, 0x3e, 0xd4, 0xc0, 0xa3, 0x3e, 0x7d, 0xc0,
    0x08, 0xbe, 0x84, 0xfd, 0xe9, 0x3d, 0xcd, 0x2b, 0x44, 0x3e,
    0x26, 0x7b, 0xf6, 0x3d, 0x46, 0x68, 0x05, 0x3d, 0x7b, 0xa6,
    0x2c, 0xbd, 0xb7, 0x5c, 0xde, 0xbc, 0x7a, 0x26, 0x92, 0xbe,
    0x99, 0x37, 0x84, 0x3e, 0x2c, 0xb6, 0x86, 0x3e, 0x23, 0x78,
    0xef, 0xbd, 0x02, 0xc4, 0x61, 0x3e, 0x23, 0xf7, 0x6e, 0xbd,
    0x7b, 0x69, 0x05, 0xbe, 0xb9, 0x6c, 0x75, 0x3e, 0xd0, 0x88,
    0x9c, 0x3d, 0x5c, 0xba, 0x24, 0x3d, 0x39, 0x69, 0xaf, 0xbe,
    0xc8, 0x77, 0xc2, 0x3d, 0x63, 0xac, 0x9b, 0xbd, 0x59, 0x55,
    0x02, 0xbe, 0x30, 0x29, 0x21, 0x3e, 0x11, 0xfd, 0x82, 0x3e,
    0x82, 0x63, 0xab, 0xbe, 0xde, 0xfa, 0x45, 0x3e, 0x39, 0x58,
    0x8b, 0x3e, 0xea, 0x07, 0x27, 0xbd, 0x86, 0x1d, 0x8b, 0x3e,
    0x21, 0x80, 0xa7, 0xbe, 0x1c, 0x2d, 0xa8, 0xbe, 0x2e, 0x55,
    0xaf, 0xbe, 0xff, 0xce, 0x86, 0xbe, 0x73, 0x65, 0x9b, 0x3e,
    0x88, 0x0f, 0x1f, 0x3f, 0x5e, 0xac, 0x94, 0xbc, 0x89, 0x68,
    0x82, 0xbd, 0xec, 0x5e, 0x21, 0x3c, 0x78, 0x58, 0xad, 0x3e,
    0xa5, 0x33, 0x7b, 0xbd, 0xce, 0x98, 0x1c, 0x3d, 0xe1, 0x41,
    0x0e, 0x3d, 0xf6, 0xcc, 0xee, 0x3e, 0x69, 0x33, 0x83, 0x3e,
    0xde, 0x67, 0x46, 0xbd, 0x0d, 0xc3, 0x1c, 0x3d, 0x72, 0x69,
    0xd5, 0xbd, 0x92, 0xb3, 0xad, 0xbd, 0x21, 0xfe, 0x7f, 0xbd,
    0xcb, 0x5c, 0x99, 0xbc, 0x48, 0x7a, 0xb3, 0x3e, 0x25, 0x5d,
    0x37, 0x3e, 0xf6, 0xde, 0x17, 0xbe, 0xf0, 0xc7, 0xf6, 0xbc,
    0x7d, 0xa1, 0x9e, 0xbe, 0x3d, 0x08, 0x4a, 0xbd, 0x34, 0x62,
    0xd2, 0x3d, 0xdf, 0xfc, 0x1c, 0x3d, 0x6e, 0x3a, 0xa6, 0x3e,
    0xe9, 0x74, 0x8e, 0xbe, 0xc8, 0x34, 0x1b, 0xbe, 0xdf, 0x6e,
    0x7b, 0x3d, 0x8c, 0xba, 0xb4, 0xbe, 0x4a, 0x37, 0xde, 0xbe,
    0x2c, 0x1b, 0x35, 0xbe, 0x4f, 0x52, 0x8e, 0xbe, 0x89, 0x66,
    0xb1, 0x3e, 0x74, 0x32, 0xa0, 0x3e, 0x1d, 0x56, 0xef, 0xbd,
    0x56, 0xee, 0x0d, 0xbd, 0xf3, 0xe7, 0xd1, 0xbe, 0x76, 0x30,
    0x21, 0x3d, 0x4a, 0x04, 0x1d, 0xbe, 0xa6, 0x85, 0x7e, 0x3c,
    0xac, 0x88, 0xe2, 0xbe, 0x8f, 0xa9, 0xf6, 0x3d, 0x48, 0x63,
    0x1c, 0xbe, 0xa9, 0x4a, 0x65, 0x3e, 0x4f, 0xcc, 0xee, 0x3d,
    0x2d, 0x21, 0xcf, 0x3d, 0x73, 0x01, 0xb1, 0x3e, 0xe5, 0xf9,
    0xf1, 0xbd, 0x64, 0xae, 0xb1, 0xbd, 0x82, 0xdc, 0x6e, 0xbe,
    0x52, 0xb2, 0x00, 0x3e, 0x49, 0x3e, 0x85, 0xbe, 0xb0, 0x49,
    0x32, 0xbd, 0x54, 0x8e, 0x89, 0xbd, 0xee, 0x2b, 0x9e, 0xbe,
    0x4a, 0x9b, 0xba, 0xbe, 0xd5, 0x81, 0xcc, 0xbd, 0x61, 0x14,
    0xab, 0x3e, 0xfd, 0x8a, 0x8a, 0x3e, 0x1c, 0x5f, 0xb2, 0xbe,
    0x52, 0x6d, 0xeb, 0x3e, 0x8b, 0x46, 0x8f, 0x3e, 0x57, 0x5e,
    0xcb, 0x3d, 0xd5, 0xa8, 0x6e, 0xbe, 0xfd, 0x7f, 0xb0, 0x3e,
    0xfe, 0x56, 0xc6, 0xbc, 0x09, 0x04, 0x29, 0x3e, 0xfd, 0x18,
    0x50, 0xbe, 0x7c, 0x47, 0xca, 0x3e, 0x41, 0x02, 0x13, 0x3f,
    0x0d, 0xf6, 0x8a, 0xbe, 0x5d, 0xf9, 0xfa, 0xbc, 0x69, 0xfd,
    0xeb, 0x3d, 0x7d, 0x3d, 0xd8, 0xbe, 0x1f, 0x2e, 0xf6, 0x3d,
    0xbb, 0x3d, 0x3d, 0xbd, 0x2d, 0x35, 0x3f, 0x3e, 0x86, 0x3d,
    0xcf, 0x3e, 0x5d, 0xf0, 0xcb, 0xbe, 0xe2, 0x17, 0xcb, 0x3d,
    0x1b, 0x69, 0xff, 0xbd, 0xfc, 0xa3, 0xfc, 0xbd, 0xe0, 0x32,
    0x93, 0xbe, 0xfd, 0xe9, 0xc8, 0xbe, 0x7c, 0x20, 0x50, 0xbd,
    0xff, 0xc5, 0x18, 0x3e, 0x7e, 0x9a, 0x71, 0x3e, 0x9f, 0x3b,
    0x92, 0x3e, 0x62, 0xbf, 0xb5, 0x3e, 0x94, 0xa3, 0xaf, 0xbe,
    0xaa, 0xe5, 0x8e, 0x3e, 0x9c, 0x63, 0x20, 0x3e, 0x46, 0xe9,
    0x2f, 0xbd, 0x91, 0x1e, 0x9c, 0xbe, 0x21, 0x9d, 0xf9, 0xbd,
    0x9e, 0xe9, 0xd7, 0x3e, 0xd9, 0x6b, 0xba, 0x3c, 0xc5, 0x80,
    0x9c, 0x3d, 0x4a, 0x75, 0x7f, 0x3d, 0xdd, 0xc0, 0x96, 0xbe,
    0x83, 0x3e, 0x81, 0x3f, 0x2b, 0x60, 0x81, 0xbc, 0x02, 0x01,
    0x8c, 0xbe, 0xcc, 0x41, 0xbc, 0xbe, 0xc0, 0xcc, 0x9a, 0x3e,
    0xc7, 0x60, 0xa5, 0x3e, 0xf9, 0x63, 0x38, 0xbe, 0xb6, 0xa5,
    0x97, 0xbd, 0xd7, 0x49, 0x98, 0xbe, 0xb2, 0xdc, 0xbd, 0x3e,
    0x0a, 0x07, 0xbf, 0xbc, 0xde, 0xa3, 0xeb, 0xbe, 0xc0, 0xc3,
    0xd3, 0xbe, 0x4c, 0xc2, 0xe8, 0x3d, 0xd0, 0x01, 0xb1, 0xbd,
    0xb6, 0x9b, 0xa6, 0x3e, 0x11, 0x4c, 0x20, 0x3d, 0x30, 0x1c,
    0xd9, 0xbe, 0xb8, 0xb4, 0xbd, 0x3e, 0x8a, 0xf0, 0x24, 0x3f,
    0x2e, 0x62, 0x9a, 0x3e, 0x78, 0x61, 0xa1, 0x3e, 0x1a, 0x81,
    0xbe, 0xbe, 0xa8, 0x20, 0x44, 0x3c, 0xd3, 0xd8, 0x71, 0xbe,
    0x86, 0xf7, 0xe0, 0xbd, 0x2c, 0x40, 0x0f, 0x3c, 0xc0, 0x23,
    0xee, 0xbd, 0xb7, 0xb1, 0xc8, 0x3e, 0x40, 0x5d, 0xd9, 0xbe,
    0x27, 0x65, 0xe8, 0xbe, 0x3d, 0x27, 0xc9, 0x3e, 0x39, 0x11,
    0xa8, 0xbe, 0x1d, 0xd5, 0x31, 0x3e, 0xae, 0xcf, 0x69, 0xbe,
    0x3a, 0x32, 0xc8, 0x3e, 0x18, 0xdf, 0xac, 0xbe, 0x56, 0x29,
    0x5c, 0xbd, 0x40, 0x0b, 0xd0, 0xbe, 0x7a, 0xba, 0xba, 0x3e,
    0x5f, 0xed, 0x9d, 0x3f, 0x05, 0x9f, 0x3c, 0xbe, 0x8a, 0xda,
    0x4f, 0xbb, 0x41, 0x1c, 0x94, 0x3e, 0x7e, 0x72, 0x82, 0x3e,
    0xf6, 0xf7, 0x3b, 0xbe, 0xf5, 0x25, 0x12, 0x3d, 0xc9, 0x54,
    0x07, 0x3e, 0x6d, 0x5d, 0x04, 0x3e, 0xd0, 0x63, 0x99, 0x3e,
    0xd3, 0x43, 0x83, 0xbe, 0x4c, 0xcb, 0x50, 0x3e, 0x0d, 0x53,
    0xf1, 0xbe, 0xbc, 0x0a, 0xb5, 0xbd, 0x4a, 0x6f, 0x35, 0xbd,
    0xf1, 0x64, 0x52, 0xbd, 0xc0, 0x01, 0x2a, 0x3e, 0x49, 0x90,
    0x01, 0xbe, 0x48, 0x10, 0xc2, 0x3d, 0x6f, 0x66, 0x5e, 0xbe,
    0x7c, 0x99, 0x47, 0xbe, 0xb3, 0xd2, 0xdc, 0x3e, 0x11, 0x79,
    0x42, 0xbe, 0x49, 0x98, 0xba, 0xbe, 0x65, 0x4e, 0x4b, 0xbd,
    0x4d, 0xd2, 0x95, 0xbd, 0x0b, 0x30, 0xb8, 0xbd, 0xc5, 0xd6,
    0x90, 0xbe, 0x29, 0x82, 0xb0, 0x3e, 0x3d, 0xa4, 0xb0, 0x3e,
    0x2e, 0xbf, 0xa3, 0x3e, 0x27, 0xf2, 0xe1, 0x3e, 0xe0, 0x59,
    0x01, 0xbd, 0x25, 0x51, 0xd0, 0x3c, 0xdf, 0x90, 0xf0, 0xbd,
    0xa2, 0x38, 0xfc, 0xbd, 0xed, 0x2e, 0x58, 0xbe, 0x72, 0xa7,
    0xd5, 0x3c, 0xc3, 0x49, 0x17, 0xbe, 0x9b, 0x12, 0x6c, 0x3e,
    0x37, 0xab, 0xa7, 0xbe, 0x5f, 0x91, 0x6c, 0x3e, 0x57, 0x13,
    0x64, 0xbc, 0x54, 0x36, 0x1e, 0x3e, 0xcd, 0xd9, 0xbb, 0x3e,
    0x3f, 0xd0, 0x85, 0xbd, 0xc6, 0x81, 0x51, 0x3e, 0x6a, 0x05,
    0xed, 0xbe, 0x93, 0xe2, 0x0b, 0xbe, 0xfe, 0xcc, 0xb9, 0xbe,
    0xc3, 0x42, 0x02, 0x3e, 0xbd, 0x50, 0x8c, 0x3e, 0xfe, 0xce,
    0xab, 0x3e, 0xe4, 0x08, 0xc4, 0x3e, 0x36, 0xc9, 0xbb, 0xbd,
    0x86, 0xeb, 0x2c, 0x3e, 0xbf, 0x7d, 0xc8, 0xbe, 0x37, 0x86,
    0xaf, 0x3e, 0x6c, 0x96, 0x6f, 0xbd, 0x7f, 0xd7, 0x9d, 0xbc,
    0x5b, 0xd4, 0x1c, 0xbe, 0xd6, 0x00, 0xcf, 0x3d, 0x07, 0x50,
    0x83, 0x3d, 0x7e, 0x0f, 0x96, 0x3e, 0x89, 0x72, 0xb4, 0xbe,
    0x85, 0xd6, 0x84, 0x3e, 0x8c, 0xa9, 0x88, 0x3e, 0x00, 0x97,
    0x81, 0xbe, 0xa6, 0x70, 0xcc, 0x3e, 0x4c, 0x3b, 0x48, 0xbe,
    0xa6, 0x8b, 0x02, 0xbe, 0x73, 0x6c, 0xb1, 0x3d, 0x41, 0x80,
    0xcf, 0xbe, 0x80, 0x9b, 0x3a, 0xbe, 0x69, 0x6f, 0x9f, 0xbe,
    0xd2, 0x50, 0x59, 0x3d, 0x3b, 0x26, 0xc6, 0x3e, 0xf7, 0xec,
    0xd0, 0x3e, 0xe7, 0x67, 0x28, 0xbe, 0x04, 0x7f, 0xb8, 0x3e,
    0x9f, 0x17, 0x1c, 0xbd, 0xd4, 0x19, 0x60, 0x3d, 0x5b, 0xaa,
    0xda, 0x3e, 0xd1, 0x4e, 0x34, 0xbd, 0xd5, 0xde, 0x41, 0x3e,
    0x9b, 0xa3, 0x29, 0x3d, 0x7c, 0x58, 0x8b, 0x3e, 0x88, 0xc3,
    0x32, 0x3d, 0x7b, 0x9f, 0x37, 0xbd, 0xa9, 0x51, 0x22, 0x3d,
    0x98, 0x1d, 0x32, 0xbe, 0x80, 0x31, 0x22, 0xbd, 0xf2, 0x22,
    0xdf, 0xbe, 0x83, 0x1b, 0x97, 0x3e, 0x19, 0x4e, 0x7e, 0xbd,
    0x14, 0x19, 0x08, 0xbe, 0xd5, 0x98, 0xd8, 0xbe, 0x5e, 0x91,
    0xee, 0x3d, 0x01, 0xb8, 0x10, 0x3e, 0x6c, 0xf6, 0x46, 0x3e,
    0xed, 0x7c, 0xb4, 0x3e, 0xb3, 0x79, 0xef, 0xbd, 0x34, 0xf6,
    0x06, 0x3f, 0xf3, 0x0f, 0x81, 0x3e, 0x91, 0x60, 0xc2, 0x3d,
    0x3e, 0x59, 0x24, 0x3e, 0x4a, 0xc5, 0xca, 0x3e, 0xbd, 0x22,
    0xb3, 0xbe, 0xd4, 0xda, 0xa8, 0x3e, 0x3d, 0xdf, 0x0c, 0x3f,
    0x14, 0x60, 0x1f, 0xbf, 0xba, 0xa3, 0x35, 0xbf, 0xa9, 0x44,
    0x5a, 0xbf, 0xf3, 0xd0, 0xcb, 0x3e, 0x38, 0x6a, 0x7f, 0xbd,
    0x3e, 0x32, 0x94, 0x3e, 0xfa, 0x75, 0x94, 0x3d, 0xba, 0x9a,
    0x93, 0xbd, 0x96, 0x2c, 0x61, 0x3e, 0xef, 0x9b, 0xef, 0xbe,
    0xbe, 0x8f, 0x17, 0xbf, 0x8e, 0x22, 0x18, 0x3f, 0x96, 0x56,
    0xb3, 0x3e, 0xbe, 0x75, 0x14, 0x3d, 0xdf, 0x19, 0x31, 0x3d,
    0x4e, 0x06, 0x36, 0xbd, 0xa4, 0x87, 0x0c, 0xbd, 0xa7,
    0x6e, 0x04, 0xbf, 0x61, 0x56, 0x15, 0xbf, 0x3b, 0x89,
    0x22, 0x3f, 0xed, 0x6e, 0x9d, 0xbd, 0x07, 0x20, 0x38,
    0x3e, 0xf4, 0x2b, 0x91, 0xbd, 0x7a, 0xcd, 0x95, 0xbe
  };

  return AI_HANDLE_PTR(s_network_weights);

}
