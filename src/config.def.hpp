// somebar - dwl bar
// See LICENSE file for copyright and license details.

#pragma once
#include "common.hpp"

constexpr bool topbar = true;

constexpr int paddingX = 8;
constexpr int paddingY = 1;

// See https://docs.gtk.org/Pango/type_func.FontDescription.from_string.html
/* constexpr const char* font = "Hack Nerd Font Mono 10"; */
constexpr const char* font = "JetBrainsMono NerdFont 10";

/* constexpr ColorScheme colorActive = {Color(0xee, 0xee, 0xee), Color(0xd8, 0x18, 0x60)}; */
/* constexpr ColorScheme colorActive = {Color(0xee, 0xee, 0xee), Color(0x00, 0x55, 0x77)}; */
/* constexpr ColorScheme colorInactive = {Color(0xcc, 0xcc, 0xcc), Color(0x12, 0x12, 0x12)}; */
/* constexpr ColorScheme colorActive = {Color(0xd8, 0x18, 0x60), Color(0x12, 0x12, 0x12)}; */

/* constexpr ColorScheme colorInactive = {Color(0xff, 0xff, 0xff), Color(0x00, 0x00, 0x00)}; */
/* constexpr ColorScheme colorActive = {Color(0x31, 0x74, 0x8f), Color(0x00, 0x00, 0x00)}; */

// default
constexpr ColorScheme colorInactive = {Color(0xbb, 0xbb, 0xbb), Color(0x22, 0x22, 0x22)};
constexpr ColorScheme colorActive = {Color(0xee, 0xee, 0xee), Color(0x00, 0x55, 0x77)};

// black white
/* constexpr ColorScheme colorInactive = {Color(0x99, 0x99, 0x99), Color(0x00, 0x00, 0x00)}; */
/* constexpr ColorScheme colorActive = {Color(0xff, 0xff, 0xff), Color(0x00, 0x00, 0x00)}; */
constexpr const char* termcmd[] = {"alacritty", nullptr};

static std::vector<std::string> tagNames = {
	"1", "2", "3",
	"4", "5", "6",
	"7", "8", "9",
};

constexpr Button buttons[] = {
	{ ClkStatusText,   BTN_RIGHT,  spawn,      {.v = termcmd} },
};
