#pragma once
#include <Adafruit_GFX.h>
const uint8_t Round10x16Bitmaps[] PROGMEM = {
0x7f,0xbf,0xfe,0x1f,0x03,0xc0,0xf0,0x3c,0x0f,0x03,0xc0,0xf0,
0x3c,0x0f,0x03,0xc0,0xf8,0x7f,0xfd,0xfe,0x06,0x03,0xc1,0xf0,
0xec,0x33,0x00,0xc0,0x30,0x0c,0x03,0x00,0xc0,0x30,0x0c,0x03,
0x00,0xc0,0x30,0x0c,0x7f,0xbf,0xfe,0x1c,0x03,0x00,0xc0,0x30,
0x1d,0xff,0xff,0xb8,0x0c,0x03,0x00,0xc0,0x38,0x0f,0xff,0xfe,
0x7f,0xbf,0xfe,0x1c,0x03,0x00,0xc0,0x30,0x1c,0x3e,0x0f,0x80,
0x70,0x0c,0x03,0x00,0xf8,0x7f,0xfd,0xfe,0x40,0xb0,0x3c,0x0f,
0x03,0xc0,0xf0,0x3e,0x1f,0xff,0x7f,0xc0,0x70,0x0c,0x03,0x00,
0xc0,0x30,0x0c,0x03,0xff,0xbf,0xfe,0x03,0x00,0xc0,0x30,0x0e,
0x03,0xfe,0x7f,0xc0,0x70,0x0c,0x03,0x00,0xf8,0x7f,0xfd,0xfe,
0x7f,0xbf,0xfe,0x1f,0x00,0xc0,0x30,0x0e,0x03,0xfe,0xff,0xf8,
0x7c,0x0f,0x03,0xc0,0xf8,0x7f,0xfd,0xfe,0x7f,0xbf,0xfe,0x1c,
0x03,0x00,0xc0,0x30,0x0c,0x03,0x00,0xc0,0x30,0x0c,0x03,0x00,
0xc0,0x30,0x0c,0x02,0x7f,0xbf,0xfe,0x1f,0x03,0xc0,0xf0,0x3e,
0x1d,0xfe,0x7f,0xb8,0x7c,0x0f,0x03,0xc0,0xf8,0x7f,0xfd,0xfe,
0x7f,0xbf,0xfe,0x1f,0x03,0xc0,0xf0,0x3e,0x1f,0xff,0x7f,0xc0,
0x70,0x0c,0x03,0x00,0xf8,0x7f,0xfd,0xfe,0x00};
const GFXglyph Round10x16Glyphs[] PROGMEM = {
{0, 10, 16, 11, 0, 0},//'0'
{20, 10, 16, 11, 0, 0},//'1'
{40, 10, 16, 11, 0, 0},//'2'
{60, 10, 16, 11, 0, 0},//'3'
{80, 10, 16, 11, 0, 0},//'4'
{100, 10, 16, 11, 0, 0},//'5'
{120, 10, 16, 11, 0, 0},//'6'
{140, 10, 16, 11, 0, 0},//'7'
{160, 10, 16, 11, 0, 0},//'8'
{180, 10, 16, 11, 0, 0}//'9'
};
const GFXfont Round10x16 PROGMEM = {(uint8_t *)Round10x16Bitmaps,(GFXglyph *)Round10x16Glyphs, 48, 58, 17};
