#ifndef TEST_8X8_FONT_H
#define TEST_8X8_FONT_H


const int FONT_8X8_BASIC_LENGTH = 95;
// printable only
char FONT_8X8_BASIC[95][8] =
{

	// space - ascii 32 - 0
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

	// ! - 33
	{
		0b00111000,
		0b00111000,
		0b00111000,
		0b00111000,
		0b00111000,
		0b00000000,
		0b00111000,
		0b00000000,
	},
	// "
	{
		0b00101000,
		0b00101000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
	},
	// #
	{
		0b00101000,
		0b00101000,
		0b11111110,
		0b00101000,
		0b11111110,
		0b00101000,
		0b00101000,
		0b00000000,
	},
	// $
	{
		0b00111000,
		0b01010100,
		0b01010000,
		0b00111000,
		0b00010100,
		0b01010100,
		0b00111000,
		0b00000000,
	},
	// %
	{
		0b01000010,
		0b10100100,
		0b01001000,
		0b00010000,
		0b00100100,
		0b01001010,
		0b10000100,
		0b00000000,
	},
	// &
	{
		0b00010000,
		0b00101000,
		0b00010000,
		0b00101000,
		0b01001010,
		0b01000100,
		0b00111010,
		0b00000000,
	},
	// '
	{
		0b00010000,
		0b00010000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
	},
	// (
	{
		0b00001000,
		0b00010000,
		0b00100000,
		0b00100000,
		0b00100000,
		0b00010000,
		0b00001000,
		0b00000000,
	},
	// )
	{
		0b00100000,
		0b00010000,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00010000,
		0b00100000,
		0b00000000,
	},

	// *
	{
		0b00101000,
		0b00010000,
		0b00101000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
	},

	// +
	{
		0b00000000,
		0b00010000,
		0b00010000,
		0b01111100,
		0b00010000,
		0b00010000,
		0b00000000,
		0b00000000,
	},

	// ,
	{
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00010000,
		0b00100000,
	},

	// -
	{
		0b00000000,
		0b00000000,
		0b00000000,
		0b01111100,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
	},

	// .
	{
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00010000,
		0b00000000,
	},

	// /
	{
		0b00000100,
		0b00001000,
		0b00001000,
		0b00010000,
		0b00100000,
		0b00100000,
		0b01000000,
		0b00000000,
	},

	// 0 - 48
	{
		0b00111000,
		0b01000100,
		0b01001100,
		0b01010100,
		0b01100100,
		0b01000100,
		0b00111000,
		0b00000000,
	},

	// 1
	{
		0b00010000,
		0b00110000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00111000,
		0b00000000,
	},

	// 2
	{
		0b00111000,
		0b01000100,
		0b00001100,
		0b00011000,
		0b00110000,
		0b01100000,
		0b01111100,
		0b00000000,
	},

	// 3
	{
		0b01111100,
		0b01000100,
		0b00001000,
		0b00011100,
		0b00000100,
		0b01000100,
		0b00111000,
		0b00000000,
	},

	// 4
	{
		0b00011000,
		0b00100000,
		0b01001000,
		0b01001000,
		0b01111100,
		0b00001000,
		0b00011100,
		0b00000000,
	},

	// 5
	{
		0b01111100,
		0b01000000,
		0b01000000,
		0b01111000,
		0b00000100,
		0b01000100,
		0b00111000,
		0b00000000,
	},

	// 6
	{
		0b00111000,
		0b01000000,
		0b01000000,
		0b01111000,
		0b01000100,
		0b01000100,
		0b00111000,
		0b00000000,
	},

	// 7
	{
		0b01111100,
		0b00000100,
		0b00000100,
		0b00001000,
		0b00010000,
		0b00010000,
		0b00010000,
		0b00000000,
	},

	// 8
	{
		0b00111000,
		0b01000100,
		0b01000100,
		0b00111000,
		0b01000100,
		0b01000100,
		0b00111000,
		0b00000000,
	},

	// 9
	{
		0b00111000,
		0b01000100,
		0b01000100,
		0b00111100,
		0b00000100,
		0b00000100,
		0b00111000,
		0b00000000,
	},

	// : - 58
	{
		0b00000000,
		0b00010000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00010000,
		0b00000000,
		0b00000000,
	},

	// ;
	{
		0b00000000,
		0b00010000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00010000,
		0b00100000,
		0b00000000,
	},

	// <
	{
		0b00000000,
		0b00001000,
		0b00010000,
		0b00100000,
		0b00010000,
		0b00001000,
		0b00000000,
		0b00000000,
	},

	// =
	{
		0b00000000,
		0b00000000,
		0b00111000,
		0b00000000,
		0b00111000,
		0b00000000,
		0b00000000,
		0b00000000,
	},

	// >
	{
		0b00000000,
		0b00100000,
		0b00010000,
		0b00001000,
		0b00010000,
		0b00100000,
		0b00000000,
		0b00000000,
	},

	// ?
	{
		0b00111000,
		0b01000100,
		0b00000100,
		0b00001000,
		0b00010000,
		0b00000000,
		0b00010000,
		0b00000000,
	},

	// @
	{
		0b00111000,
		0b01000100,
		0b10010010,
		0b10101010,
		0b10011100,
		0b01000000,
		0b00111000,
		0b00000000,
	},

	// A - 65
	{
		0b00111000,
		0b01111100,
		0b01101100,
		0b11000110,
		0b11000110,
		0b11111110,
		0b11000110,
		0b00000000,
	},

	// B
	{
		0b11111000,
		0b11001100,
		0b11001100,
		0b11111000,
		0b11001110,
		0b11001110,
		0b11111100,
		0b00000000,
	},

	// C
	{
		0b00011110,
		0b01111110,
		0b11110000,
		0b11000000,
		0b11100000,
		0b01111110,
		0b00011110,
		0b00000000,
	},

	// D
	{
		0b11111000,
		0b11111100,
		0b11001110,
		0b11000110,
		0b11001110,
		0b11111100,
		0b11111000,
		0b00000000,
	},

	// E
	{
		0b11111110,
		0b11111110,
		0b11000000,
		0b11111100,
		0b11000000,
		0b11111110,
		0b11111110,
		0b00000000,
	},

	// F
	{
		0b11111110,
		0b11111110,
		0b11000000,
		0b11111100,
		0b11000000,
		0b11000000,
		0b11000000,
		0b00000000,
	},

	// G
	{
		0b00111110,
		0b01111110,
		0b11100000,
		0b11001110,
		0b11000010,
		0b01111110,
		0b00111100,
		0b00000000,
	},

	// H
	{
		0b11000110,
		0b11000110,
		0b11000110,
		0b11111110,
		0b11111110,
		0b11000110,
		0b11000110,
		0b00000000,
	},

	// I
	{
		0b11111110,
		0b11111110,
		0b00011000,
		0b00011000,
		0b00011000,
		0b11111110,
		0b11111110,
		0b00000000,
	},

	// J
	{
		0b11111110,
		0b11111110,
		0b00000110,
		0b00000110,
		0b11000110,
		0b11111110,
		0b01111100,
		0b00000000,
	},

	// K
	{
		0b11000110,
		0b11001110,
		0b11111100,
		0b11111000,
		0b11011100,
		0b11001110,
		0b11000110,
		0b00000000,
	},

	// L
	{
		0b11000000,
		0b11000000,
		0b11000000,
		0b11000000,
		0b11000000,
		0b11111110,
		0b11111110,
		0b00000000,
	},

	// M
	{
		0b11000110,
		0b11101110,
		0b11111110,
		0b11010110,
		0b11000110,
		0b11000110,
		0b11000110,
		0b00000000,
	},

	// N
	{
		0b11100110,
		0b11100110,
		0b11110110,
		0b11110110,
		0b11011110,
		0b11001110,
		0b11001110,
		0b00000000,
	},

	// O
	{
		0b00111000,
		0b01111100,
		0b11000110,
		0b11000110,
		0b11000110,
		0b01111100,
		0b00111000,
		0b00000000,
	},

	// P
	{
		0b11111110,
		0b11111110,
		0b11000110,
		0b11111110,
		0b11000000,
		0b11000000,
		0b11000000,
		0b00000000,
	},

	// Q
	{
		0b00111000,
		0b01111100,
		0b11000110,
		0b11010110,
		0b11001110,
		0b01111110,
		0b00111010,
		0b00000000,
	},

	// R
	{
		0b11111110,
		0b11111110,
		0b11000110,
		0b11111100,
		0b11001000,
		0b11001100,
		0b11000110,
		0b00000000,
	},

	// S
	{
		0b01111110,
		0b11111110,
		0b11000000,
		0b01111100,
		0b00000110,
		0b11111110,
		0b11111100,
		0b00000000,
	},

	// T
	{
		0b11111110,
		0b11111110,
		0b00111000,
		0b00111000,
		0b00111000,
		0b00111000,
		0b00111000,
		0b00000000,
	},

	// U
	{
		0b11000110,
		0b11000110,
		0b11000110,
		0b11000110,
		0b11000110,
		0b11000110,
		0b01111100,
		0b00000000,
	},

	// V
	{
		0b11000110,
		0b11000110,
		0b11000110,
		0b11000110,
		0b11000110,
		0b01101100,
		0b00010000,
		0b00000000,
	},

	// W
	{
		0b11000110,
		0b11000110,
		0b11000110,
		0b11010110,
		0b11111110,
		0b11101110,
		0b11000110,
		0b00000000,
	},

	// X
	{
		0b11000110,
		0b11101110,
		0b01111100,
		0b00111000,
		0b01101100,
		0b11101110,
		0b11000110,
		0b00000000,
	},

	// Y
	{
		0b11000110,
		0b11101110,
		0b01111100,
		0b00111000,
		0b00111000,
		0b00111000,
		0b00111000,
		0b00000000,
	},

	// Z
	{
		0b11111110,
		0b11111110,
		0b00011100,
		0b00111000,
		0b01110000,
		0b11111110,
		0b11111110,
		0b00000000,
	},


	// pads for now

	// [ - 91
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// '\'
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// ]
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// ^
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// _
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// `
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

	// a - 97
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// b
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// c
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// d
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// e
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// f
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// g
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// h
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// i
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// j
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// k
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// l
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// m
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// n
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// o
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// p
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// q
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// r
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// s
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// t
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// u
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// v
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// w
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// x
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// y
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// z
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },

	// { - 123
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// |
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// }
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
	// ~
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
};

#endif // !TEST_8X8_FONT_H

