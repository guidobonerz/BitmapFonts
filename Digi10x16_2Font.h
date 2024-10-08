#pragma once
#include <Adafruit_GFX.h>
const uint8_t Digi10x16_2Bitmaps[] PROGMEM = {
0x7f,0xaf,0xdc,0x0f,0x03,0xc0,0xf0,0x3c,0x0c,0x00,0x00,0x30,
0x3c,0x0f,0x03,0xc0,0xf0,0x3b,0xf5,0xfe,0x00,0x00,0x10,0x0c,
0x03,0x00,0xc0,0x30,0x0c,0x00,0x00,0x00,0x30,0x0c,0x03,0x00,
0xc0,0x30,0x04,0x00,0x7f,0x8f,0xd0,0x0c,0x03,0x00,0xc0,0x30,
0x0c,0x78,0x1e,0x30,0x0c,0x03,0x00,0xc0,0x30,0x0b,0xf1,0xfe,
0x7f,0x8f,0xd0,0x0c,0x03,0x00,0xc0,0x30,0x0c,0x78,0x1e,0x00,
0x30,0x0c,0x03,0x00,0xc0,0x33,0xf5,0xfe,0x00,0x20,0x1c,0x0f,
0x03,0xc0,0xf0,0x3c,0x0c,0x78,0x1e,0x00,0x30,0x0c,0x03,0x00,
0xc0,0x30,0x04,0x00,0x7f,0xaf,0xcc,0x03,0x00,0xc0,0x30,0x0c,
0x00,0x78,0x1e,0x00,0x30,0x0c,0x03,0x00,0xc0,0x33,0xf5,0xfe,
0x7f,0xaf,0xcc,0x03,0x00,0xc0,0x30,0x0c,0x00,0x78,0x1e,0x30,
0x3c,0x0f,0x03,0xc0,0xf0,0x3b,0xf5,0xfe,0x7f,0x8f,0xd0,0x0c,
0x03,0x00,0xc0,0x30,0x0c,0x00,0x00,0x00,0x30,0x0c,0x03,0x00,
0xc0,0x30,0x04,0x00,0x7f,0xaf,0xdc,0x0f,0x03,0xc0,0xf0,0x3c,
0x0c,0x78,0x1e,0x30,0x3c,0x0f,0x03,0xc0,0xf0,0x3b,0xf5,0xfe,
0x00};
const GFXglyph Digi10x16_2Glyphs[] PROGMEM = {
{0, 10, 16, 11, 0, 0},//'0'
{20, 10, 16, 11, 0, 0},//'1'
{40, 10, 16, 11, 0, 0},//'2'
{60, 10, 16, 11, 0, 0},//'3'
{80, 10, 16, 11, 0, 0},//'4'
{100, 10, 16, 11, 0, 0},//'5'
{120, 10, 16, 11, 0, 0},//'6'
{140, 10, 16, 11, 0, 0},//'7'
{160, 10, 16, 11, 0, 0}//'8'
};
const GFXfont Digi10x16_2 PROGMEM = {(uint8_t *)Digi10x16_2Bitmaps,(GFXglyph *)Digi10x16_2Glyphs, 48, 57, 17};
