// Copyright 2022 Will Winder (@winder)
// SPDX-License-Identifier: GPL-2.0-or-later

#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2500

#pragma once

#    define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL+2

#ifdef OLED_ENABLE
#    define OLED_DISPLAY_128X64
#    define OLED_TIMEOUT 30000
#endif
