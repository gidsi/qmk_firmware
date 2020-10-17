#include "lily58.h"

const char *read_logo(void) {
  static char logo[] = {
      0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
      0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
      0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
      0};

  return logo;
}/**/

/*
const char *read_logo(void) {
    static char logo[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x08, 0x08,
    0x08, 0x04, 0x04, 0x04, 0x04, 0x04, 0x08, 0x08, 0x18, 0x24, 0x44, 0x84, 0x84, 0x04, 0x02, 0x02,
    0x02, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x08, 0x08, 0x08, 0x14, 0x24, 0x44, 0x84, 0x04, 0x04,
    0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0x01, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x82, 0x82, 0x82, 0x82, 0x84,
    0x08, 0x08, 0x10, 0x20, 0x20, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40,
    0x60, 0x30, 0x30, 0x18, 0x14, 0x0c, 0x0a, 0x06, 0x0e, 0x17, 0x13, 0xff, 0x22, 0x22, 0x22, 0x22,
    0xe4, 0x24, 0x38, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0xc0, 0x20, 0xff, 0x64, 0xa4,
    0x22, 0x21, 0x21, 0x21, 0x41, 0x41, 0x41, 0x41, 0x41, 0x42, 0x44, 0x58, 0xe0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x04, 0x0a, 0x12, 0xe1, 0x01, 0x01, 0x81, 0x81, 0xc1, 0xa1,
    0xa0, 0x90, 0x90, 0x90, 0x48, 0x48, 0x48, 0x48, 0x24, 0x24, 0xa4, 0x64, 0x64, 0x24, 0x34, 0x14,
    0x1d, 0x1d, 0x15, 0x95, 0x6f, 0x1f, 0x0f, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x08, 0x10, 0xf0,
    0x10, 0x10, 0x20, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x81, 0x5e, 0x66, 0x49, 0x51, 0x37, 0x38,
    0x70, 0x60, 0x60, 0x60, 0xa0, 0xa0, 0x90, 0x88, 0x84, 0x82, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x40, 0x40, 0x20, 0x20, 0x20, 0x10, 0x10, 0x08, 0x04, 0x04, 0x0f, 0x11, 0x20, 0x40, 0x40,
    0x81, 0x82, 0x84, 0x8c, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x04, 0x07, 0x00, 0x00, 0x00,
    0x80, 0x80, 0x80, 0x40, 0x40, 0xe0, 0xb0, 0x98, 0x8c, 0xbf, 0xc2, 0xc3, 0x41, 0x41, 0x40, 0x20,
    0x20, 0x10, 0x08, 0x08, 0x04, 0x04, 0x02, 0x02, 0x81, 0x81, 0x40, 0x20, 0x20, 0x10, 0x08, 0x04,
    0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x60, 0x20, 0x10, 0x08, 0x04, 0x03, 0x00,
    0x00, 0x00, 0x80, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x04, 0x04, 0x04, 0x04, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x02, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x11, 0x12, 0x14, 0x0c,
    0x08, 0x08, 0x0c, 0x14, 0x12, 0x16, 0x15, 0x15, 0x14, 0x14, 0x34, 0x24, 0x24, 0x24, 0x24, 0x24,
    0x24, 0x22, 0x22, 0x22, 0x21, 0x21, 0x20, 0x20, 0x10, 0x10, 0x10, 0x10, 0x08, 0x08, 0x08, 0x04,
    0x02, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };

  return logo;
}
*/
