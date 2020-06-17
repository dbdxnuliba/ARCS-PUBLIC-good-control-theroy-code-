//! @file FrameFontSmall.hh
//! @brief フレームフォント(Small版)
//!
//! フレームグラフィックス用のフォントデータ
//!
//! @date 2020/03/14
//! @author Yuki YOKOKURA
//
// Copyright (C) 2011-2020 Yuki YOKOKURA
// This program is free software;
// you can redistribute it and/or modify it under the terms of the FreeBSD License.
// For details, see the License.txt file.

#ifndef FRAMEFONTSMALL
#define FRAMEFONTSMALL

#include <cstdint>

namespace ARCS {	// ARCS名前空間
	//! @brief フレームフォント(Small版)
	class FrameFontSmall {
		public:
			// フォント関連の定義
			static constexpr unsigned int NUM       =  96;	//!< 収録しているフォントの数
			static constexpr unsigned int WIDTH     =   5;	//!< [px] フォントの幅
			static constexpr unsigned int HEIGHT    =   9;	//!< [px] フォントの高さ
			static constexpr unsigned int FST_ASCII =  32;	//!< フォントデータに収録している最初の文字のアスキーコード
			static constexpr unsigned int END_ASCII = 126;	//!< フォントデータに収録している最後の文字のアスキーコード
			static constexpr unsigned int LINEBYTE16 = sizeof(uint16_t)*WIDTH;	//!< 16bitフォントデータ1ラインのバイト数
			static constexpr unsigned int LINEBYTE32 = sizeof(uint32_t)*WIDTH;	//!< 32bitフォントデータ1ラインのバイト数
			
			//! @brief フォントデータ
			//! (フォントが気に食わない人は各自で好きなように変えてネ)
			static constexpr int DATA[NUM][HEIGHT][WIDTH] = {
			//static constexpr std::array< std::array< std::array<int, FONT_WIDTH>, FONT_HEIGHT>, FONT_NUM> FONT_DATA = {{
				{	// " " ASCII CODE = 32
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0}
				},
				{	// "!" ASCII CODE = 33
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0}
				},
				{	// """ ASCII CODE = 34
					{0, 1, 0, 1, 0},
					{0, 1, 0, 1, 0},
					{0, 1, 0, 1, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0}
				},
				{	// "#" ASCII CODE = 35
					{0, 1, 0, 1, 0},
					{0, 1, 0, 1, 0},
					{1, 1, 1, 1, 1},
					{0, 1, 0, 1, 0},
					{0, 1, 0, 1, 0},
					{0, 1, 0, 1, 0},
					{1, 1, 1, 1, 1},
					{0, 1, 0, 1, 0},
					{0, 1, 0, 1, 0}
				},
				{	// "$" ASCII CODE = 36
					{0, 0, 1, 0, 0},
					{0, 1, 1, 1, 0},
					{1, 0, 1, 0, 1},
					{1, 0, 1, 0, 0},
					{0, 1, 1, 1, 0},
					{0, 0, 1, 0, 1},
					{1, 0, 1, 0, 1},
					{0, 1, 1, 1, 0},
					{0, 0, 1, 0, 0}
				},
				{	// "%" ASCII CODE = 37
					{0, 1, 0, 0, 1},
					{1, 0, 1, 0, 1},
					{0, 1, 0, 1, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 1, 0, 1, 0},
					{0, 1, 1, 0, 1},
					{1, 0, 0, 1, 0}
				},
				{	// "&" ASCII CODE = 38
					{0, 0, 1, 0, 0},
					{0, 1, 0, 1, 0},
					{0, 1, 0, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 1, 1, 0, 0},
					{1, 0, 1, 0, 1},
					{1, 0, 0, 1, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 0}
				},
				{	// "'" ASCII CODE = 39
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0}
				},
				{	// "(" ASCII CODE = 40
					{0, 0, 0, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 1, 0, 0, 0},
					{0, 1, 0, 0, 0},
					{0, 1, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 0, 1, 0}
				},
				{	// ")" ASCII CODE = 41
					{0, 1, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 1, 0, 0, 0}
				},
				{	// "*" ASCII CODE = 42
					{0, 0, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{1, 0, 1, 0, 1},
					{0, 1, 1, 1, 0},
					{1, 1, 1, 1, 1},
					{0, 1, 1, 1, 0},
					{1, 0, 1, 0, 1},
					{0, 0, 1, 0, 0},
					{0, 0, 0, 0, 0}
				},
				{	// "+" ASCII CODE = 43
					{0, 0, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{1, 1, 1, 1, 1},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 0, 0, 0}
				},
				{	// "," ASCII CODE = 44
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 1, 0, 0, 0}
				},
				{	// "-" ASCII CODE = 45
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{1, 1, 1, 1, 1},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0}
				},
				{	// "." ASCII CODE = 46
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0}
				},
				{	// "/" ASCII CODE = 47
					{0, 0, 0, 0, 1},
					{0, 0, 0, 0, 1},
					{0, 0, 0, 1, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 1, 0, 0, 0},
					{0, 1, 0, 0, 0},
					{1, 0, 0, 0, 0}
				},
				{	// "0" ASCII CODE = 48
					{0, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 1, 1},
					{1, 0, 1, 0, 1},
					{1, 1, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 0}
				},
				{	// "1" ASCII CODE = 49
					{0, 0, 1, 0, 0},
					{0, 1, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 1, 1, 1, 0}
				},
				{	// "2" ASCII CODE = 50
					{0, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 0, 0, 0, 1},
					{0, 0, 0, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 1, 0, 0, 0},
					{1, 0, 0, 0, 1},
					{1, 1, 1, 1, 1}
				},
				{	// "3" ASCII CODE = 51
					{0, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 0, 0, 0, 1},
					{0, 0, 1, 1, 0},
					{0, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 0}
				},
				{	// "4" ASCII CODE = 52
					{0, 0, 0, 1, 0},
					{0, 0, 1, 1, 0},
					{0, 0, 1, 1, 0},
					{0, 1, 0, 1, 0},
					{0, 1, 0, 1, 0},
					{1, 0, 0, 1, 0},
					{1, 1, 1, 1, 1},
					{0, 0, 0, 1, 0},
					{0, 0, 0, 1, 0}
				},
				{	// "5" ASCII CODE = 53
					{1, 1, 1, 1, 1},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 1, 1, 1, 0},
					{0, 0, 0, 0, 1},
					{0, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 0}
				},
				{	// "6" ASCII CODE = 54
					{0, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 0},
					{1, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 0}
				},
				{	// "7" ASCII CODE = 55
					{1, 1, 1, 1, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 0, 0, 1, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0}
				},
				{	// "8" ASCII CODE = 56
					{0, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 0}
				},
				{	// "9" ASCII CODE = 57
					{0, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 1},
					{0, 0, 0, 0, 1},
					{0, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 0}
				},
				{	// ":" ASCII CODE = 58
					{0, 0, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 0, 0, 0}
				},
				{	// ";" ASCII CODE = 59
					{0, 0, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 1, 0, 0, 0}
				},
				{	// "<" ASCII CODE = 60
					{0, 0, 0, 0, 1},
					{0, 0, 0, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 1, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{0, 1, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 0, 0, 1}
				},
				{	// "=" ASCII CODE = 61
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{1, 1, 1, 1, 1},
					{0, 0, 0, 0, 0},
					{1, 1, 1, 1, 1},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0}
				},
				{	// ">" ASCII CODE = 62
					{1, 0, 0, 0, 0},
					{0, 1, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 0, 0, 1},
					{0, 0, 0, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 1, 0, 0, 0},
					{1, 0, 0, 0, 0}
				},
				{	// "?" ASCII CODE = 63
					{0, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 0, 0, 0, 1},
					{0, 0, 0, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0}
				},
				{	// "@" ASCII CODE = 64
					{0, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 1, 1},
					{1, 0, 1, 0, 1},
					{1, 0, 1, 0, 1},
					{1, 0, 1, 0, 1},
					{1, 0, 0, 1, 1},
					{1, 0, 0, 0, 0},
					{0, 1, 1, 1, 0}
				},
				{	// "A" ASCII CODE = 65
					{0, 0, 1, 0, 0},
					{0, 1, 0, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 1, 1, 1, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1}
				},
				{	// "B" ASCII CODE = 66
					{1, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 1, 1, 1, 0}
				},
				{	// "C" ASCII CODE = 67
					{0, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 0}
				},
				{	// "D" ASCII CODE = 68
					{1, 1, 1, 0, 0},
					{1, 0, 0, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 1, 0},
					{1, 1, 1, 0, 0}
				},
				{	// "E" ASCII CODE = 69
					{1, 1, 1, 1, 1},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 1, 1, 1, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 1, 1, 1, 1}
				},
				{	// "F" ASCII CODE = 70
					{1, 1, 1, 1, 1},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 1, 1, 1, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0}
				},
				{	// "G" ASCII CODE = 71
					{0, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 1, 1, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 0}
				},
				{	// "H" ASCII CODE = 72
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 1, 1, 1, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1}
				},
				{	// "I" ASCII CODE = 73
					{0, 1, 1, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 1, 1, 1, 0}
				},
				{	// "J" ASCII CODE = 74
					{0, 0, 0, 0, 1},
					{0, 0, 0, 0, 1},
					{0, 0, 0, 0, 1},
					{0, 0, 0, 0, 1},
					{0, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 0}
				},
				{	// "K" ASCII CODE = 75
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 1, 0},
					{1, 0, 1, 0, 0},
					{1, 1, 0, 0, 0},
					{1, 0, 1, 0, 0},
					{1, 0, 0, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1}
				},
				{	// "L" ASCII CODE = 76
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 1, 1, 1, 1}
				},
				{	// "M" ASCII CODE = 77
					{1, 0, 0, 0, 1},
					{1, 1, 0, 1, 1},
					{1, 1, 0, 1, 1},
					{1, 0, 1, 0, 1},
					{1, 0, 1, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1}
				},
				{	// "N" ASCII CODE = 78
					{1, 0, 0, 0, 1},
					{1, 1, 0, 0, 1},
					{1, 1, 0, 0, 1},
					{1, 0, 1, 0, 1},
					{1, 0, 1, 0, 1},
					{1, 0, 0, 1, 1},
					{1, 0, 0, 1, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1}
				},
				{	// "0" ASCII CODE = 79
					{0, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 0}
				},
				{	// "P" ASCII CODE = 80
					{1, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 1, 1, 1, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0}
				},
				{	// "Q" ASCII CODE = 81
					{0, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 1, 0, 1},
					{1, 1, 0, 1, 1},
					{0, 1, 1, 1, 1}
				},
				{	// "R" ASCII CODE = 82
					{1, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 1, 1, 1, 0},
					{1, 0, 0, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1}
				},
				{	// "S" ASCII CODE = 83
					{0, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 0, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 0}
				},
				{	// "T" ASCII CODE = 84
					{1, 1, 1, 1, 1},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0}
				},
				{	// "U" ASCII CODE = 85
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 0}
				},
				{	// "V" ASCII CODE = 86
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 0, 1, 0},
					{0, 1, 0, 1, 0},
					{0, 1, 0, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0}
				},
				{	// "W" ASCII CODE = 87
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 1, 0, 1},
					{1, 0, 1, 0, 1},
					{1, 0, 1, 0, 1},
					{1, 1, 0, 1, 1},
					{1, 1, 0, 1, 1},
					{0, 1, 0, 1, 0},
					{0, 1, 0, 1, 0}
				},
				{	// "X" ASCII CODE = 88
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 0, 1, 0},
					{0, 1, 0, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 1, 0, 1, 0},
					{0, 1, 0, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1}
				},
				{	// "Y" ASCII CODE = 89
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 0, 1, 0},
					{0, 1, 0, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0}
				},
				{	// "Z" ASCII CODE = 90
					{1, 1, 1, 1, 1},
					{0, 0, 0, 0, 1},
					{0, 0, 0, 1, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 1, 0, 0, 0},
					{0, 1, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 1, 1, 1, 1}
				},
				{	// "[" ASCII CODE = 91
					{0, 1, 1, 1, 0},
					{0, 1, 0, 0, 0},
					{0, 1, 0, 0, 0},
					{0, 1, 0, 0, 0},
					{0, 1, 0, 0, 0},
					{0, 1, 0, 0, 0},
					{0, 1, 0, 0, 0},
					{0, 1, 0, 0, 0},
					{0, 1, 1, 1, 0}
				},
				{	// "\" ASCII CODE = 92
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{0, 1, 0, 0, 0},
					{0, 1, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 0, 0, 1}
				},
				{	// "]" ASCII CODE = 93
					{0, 1, 1, 1, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 0, 1, 0},
					{0, 1, 1, 1, 0}
				},
				{	// "^" ASCII CODE = 94
					{0, 0, 1, 0, 0},
					{0, 1, 0, 1, 0},
					{1, 0, 0, 0, 1},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0}
				},
				{	// "_" ASCII CODE = 95
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{1, 1, 1, 1, 1}
				},
				{	// "`" ASCII CODE = 96
					{0, 1, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0}
				},
				{	// "a" ASCII CODE = 97
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{0, 0, 0, 0, 1},
					{0, 1, 1, 1, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 1, 1},
					{0, 1, 1, 0, 1}
				},
				{	// "b" ASCII CODE = 98
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 1, 1, 1, 0}
				},
				{	// "c" ASCII CODE = 99
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 0}
				},
				{	// "d" ASCII CODE = 100
					{0, 0, 0, 0, 1},
					{0, 0, 0, 0, 1},
					{0, 0, 0, 0, 1},
					{0, 1, 1, 1, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 1}
				},
				{	// "e" ASCII CODE = 101
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 1, 1, 1, 1},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 0}
				},
				{	// "f" ASCII CODE = 102
					{0, 0, 0, 1, 1},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{1, 1, 1, 1, 1},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0}
				},
				{	// "g" ASCII CODE = 103
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 1, 1, 1, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 0}
				},
				{	// "h" ASCII CODE = 104
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 1, 1, 0},
					{1, 1, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1}
				},
				{	// "i" ASCII CODE = 105
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0}
				},
				{	// "j" ASCII CODE = 106
					{0, 0, 0, 0, 1},
					{0, 0, 0, 0, 1},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 1},
					{0, 0, 0, 0, 1},
					{0, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 0}
				},
				{	// "k" ASCII CODE = 107
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 1, 0},
					{1, 0, 1, 0, 0},
					{1, 1, 0, 0, 0},
					{1, 1, 0, 0, 0},
					{1, 0, 1, 0, 0},
					{1, 0, 0, 1, 0},
					{1, 0, 0, 0, 1}
				},
				{	// "l" ASCII CODE = 108
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0}
				},
				{	// "m" ASCII CODE = 109
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{1, 1, 0, 1, 0},
					{1, 0, 1, 0, 1},
					{1, 0, 1, 0, 1},
					{1, 0, 1, 0, 1},
					{1, 0, 1, 0, 1},
					{1, 0, 1, 0, 1},
					{1, 0, 1, 0, 1}
				},
				{	// "n" ASCII CODE = 110
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{1, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1}
				},
				{	// "o" ASCII CODE = 111
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 1, 1, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 0}
				},
				{	// "p" ASCII CODE = 112
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{1, 0, 1, 1, 0},
					{1, 1, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 1, 1, 1, 0},
					{1, 0, 0, 0, 0}
				},
				{	// "q" ASCII CODE = 113
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 1, 1, 0, 1},
					{1, 0, 0, 1, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 1, 1, 1},
					{0, 0, 0, 0, 1}
				},
				{	// "r" ASCII CODE = 114
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{1, 0, 1, 1, 0},
					{1, 1, 0, 0, 1},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0}
				},
				{	// "s" ASCII CODE = 115
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 1, 1, 1, 1},
					{1, 0, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{0, 1, 1, 1, 0},
					{0, 0, 0, 0, 1},
					{0, 0, 0, 0, 1},
					{1, 1, 1, 1, 0}
				},
				{	// "t" ASCII CODE = 116
					{0, 0, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{1, 1, 1, 1, 1},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 0, 1, 1}
				},
				{	// "u" ASCII CODE = 117
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 1, 1},
					{0, 1, 1, 0, 1}
				},
				{	// "v" ASCII CODE = 118
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 0, 1, 0},
					{0, 1, 0, 1, 0},
					{0, 1, 0, 1, 0},
					{0, 0, 1, 0, 0}
				},
				{	// "w" ASCII CODE = 119
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{1, 0, 1, 0, 1},
					{1, 0, 1, 0, 1},
					{1, 0, 1, 0, 1},
					{1, 0, 1, 0, 1},
					{0, 1, 0, 1, 0}
				},
				{	// "x" ASCII CODE = 120
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 0, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 1, 0, 1, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1}
				},
				{	// "y" ASCII CODE = 121
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{1, 0, 0, 0, 1},
					{1, 0, 0, 0, 1},
					{0, 1, 0, 1, 0},
					{0, 1, 0, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{1, 1, 0, 0, 0}
				},
				{	// "z" ASCII CODE = 122
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{1, 1, 1, 1, 1},
					{0, 0, 0, 0, 1},
					{0, 0, 0, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 1, 0, 0, 0},
					{1, 0, 0, 0, 0},
					{1, 1, 1, 1, 1}
				},
				{	// "{" ASCII CODE = 123
					{0, 0, 1, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 1, 0, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 1, 0}
				},
				{	// "|" ASCII CODE = 124
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0}
				},
				{	// "}" ASCII CODE = 125
					{0, 1, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 0, 1, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 0, 1, 0, 0},
					{0, 1, 1, 0, 0}
				},
				{	// "~" ASCII CODE = 126
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 1, 0, 0, 0},
					{1, 0, 1, 0, 1},
					{0, 0, 0, 1, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0}
				},
				{	// "■" ASCII CODE = 範囲外
					{1, 1, 1, 1, 1},
					{1, 1, 1, 1, 1},
					{1, 1, 1, 1, 1},
					{1, 1, 1, 1, 1},
					{1, 1, 1, 1, 1},
					{1, 1, 1, 1, 1},
					{1, 1, 1, 1, 1},
					{1, 1, 1, 1, 1},
					{1, 1, 1, 1, 1}
				}
			};
			
		private:
			FrameFontSmall() = delete;					//!< コンストラクタ使用禁止
			FrameFontSmall(FrameFontSmall&& r) = delete;//!< ムーブコンストラクタ使用禁止
			~FrameFontSmall() = delete;					//!< デストラクタ使用禁止
			FrameFontSmall(const FrameFontSmall&) = delete;					//!< コピーコンストラクタ使用禁止
			const FrameFontSmall& operator=(const FrameFontSmall&) = delete;//!< 代入演算子使用禁止
	};
}

#endif
