/*
 * BRLTTY - A background process providing access to the console screen (when in
 *          text mode) for a blind person using a refreshable braille display.
 *
 * Copyright (C) 1995-2025 by The BRLTTY Developers.
 *
 * BRLTTY comes with ABSOLUTELY NO WARRANTY.
 *
 * This is free software, placed under the terms of the
 * GNU Lesser General Public License, as published by the Free Software
 * Foundation; either version 2.1 of the License, or (at your option) any
 * later version. Please see the file LICENSE-LGPL for details.
 *
 * Web Page: http://brltty.app/
 *
 * This software is maintained by Dave Mielke <dave@mielke.cc>.
 */

#ifndef BRLTTY_INCLUDED_KBD_KEYCODES
#define BRLTTY_INCLUDED_KBD_KEYCODES

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef enum {
  XT_KEY_00_Escape            = 0X01,
  XT_KEY_00_1                 = 0X02,
  XT_KEY_00_2                 = 0X03,
  XT_KEY_00_3                 = 0X04,
  XT_KEY_00_4                 = 0X05,
  XT_KEY_00_5                 = 0X06,
  XT_KEY_00_6                 = 0X07,
  XT_KEY_00_7                 = 0X08,
  XT_KEY_00_8                 = 0X09,
  XT_KEY_00_9                 = 0X0A,
  XT_KEY_00_0                 = 0X0B,
  XT_KEY_00_Minus             = 0X0C,
  XT_KEY_00_Equal             = 0X0D,
  XT_KEY_00_Backspace         = 0X0E,
  XT_KEY_00_Tab               = 0X0F,
  XT_KEY_00_Q                 = 0X10,
  XT_KEY_00_W                 = 0X11,
  XT_KEY_00_E                 = 0X12,
  XT_KEY_00_R                 = 0X13,
  XT_KEY_00_T                 = 0X14,
  XT_KEY_00_Y                 = 0X15,
  XT_KEY_00_U                 = 0X16,
  XT_KEY_00_I                 = 0X17,
  XT_KEY_00_O                 = 0X18,
  XT_KEY_00_P                 = 0X19,
  XT_KEY_00_LeftBracket       = 0X1A,
  XT_KEY_00_RightBracket      = 0X1B,
  XT_KEY_00_Enter             = 0X1C,
  XT_KEY_00_LeftControl       = 0X1D,
  XT_KEY_00_A                 = 0X1E,
  XT_KEY_00_S                 = 0X1F,
  XT_KEY_00_D                 = 0X20,
  XT_KEY_00_F                 = 0X21,
  XT_KEY_00_G                 = 0X22,
  XT_KEY_00_H                 = 0X23,
  XT_KEY_00_J                 = 0X24,
  XT_KEY_00_K                 = 0X25,
  XT_KEY_00_L                 = 0X26,
  XT_KEY_00_Semicolon         = 0X27,
  XT_KEY_00_Apostrophe        = 0X28,
  XT_KEY_00_Grave             = 0X29,
  XT_KEY_00_LeftShift         = 0X2A,
  XT_KEY_00_Backslash         = 0X2B,
  XT_KEY_00_Europe1           = 0X2B,
  XT_KEY_00_Z                 = 0X2C,
  XT_KEY_00_X                 = 0X2D,
  XT_KEY_00_C                 = 0X2E,
  XT_KEY_00_V                 = 0X2F,
  XT_KEY_00_B                 = 0X30,
  XT_KEY_00_N                 = 0X31,
  XT_KEY_00_M                 = 0X32,
  XT_KEY_00_Comma             = 0X33,
  XT_KEY_00_Period            = 0X34,
  XT_KEY_00_Slash             = 0X35,
  XT_KEY_00_RightShift        = 0X36,
  XT_KEY_00_KPAsterisk        = 0X37,
  XT_KEY_00_LeftAlt           = 0X38,
  XT_KEY_00_Space             = 0X39,
  XT_KEY_00_CapsLock          = 0X3A,
  XT_KEY_00_F1                = 0X3B,
  XT_KEY_00_F2                = 0X3C,
  XT_KEY_00_F3                = 0X3D,
  XT_KEY_00_F4                = 0X3E,
  XT_KEY_00_F5                = 0X3F,
  XT_KEY_00_F6                = 0X40,
  XT_KEY_00_F7                = 0X41,
  XT_KEY_00_F8                = 0X42,
  XT_KEY_00_F9                = 0X43,
  XT_KEY_00_F10               = 0X44,
  XT_KEY_00_NumLock           = 0X45,
  XT_KEY_00_ScrollLock        = 0X46,
  XT_KEY_00_KP7               = 0X47,
  XT_KEY_00_KP8               = 0X48,
  XT_KEY_00_KP9               = 0X49,
  XT_KEY_00_KPMinus           = 0X4A,
  XT_KEY_00_KP4               = 0X4B,
  XT_KEY_00_KP5               = 0X4C,
  XT_KEY_00_KP6               = 0X4D,
  XT_KEY_00_KPPlus            = 0X4E,
  XT_KEY_00_KP1               = 0X4F,
  XT_KEY_00_KP2               = 0X50,
  XT_KEY_00_KP3               = 0X51,
  XT_KEY_00_KP0               = 0X52,
  XT_KEY_00_KPPeriod          = 0X53,
  XT_KEY_00_SystemRequest     = 0X54,
  XT_KEY_00_Europe2           = 0X56,
  XT_KEY_00_F11               = 0X57,
  XT_KEY_00_F12               = 0X58,
  XT_KEY_00_KPEqual           = 0X59,
  XT_KEY_00_International6    = 0X5C,
  XT_KEY_00_F13               = 0X64,
  XT_KEY_00_F14               = 0X65,
  XT_KEY_00_F15               = 0X66,
  XT_KEY_00_F16               = 0X67,
  XT_KEY_00_F17               = 0X68,
  XT_KEY_00_F18               = 0X69,
  XT_KEY_00_F19               = 0X6A,
  XT_KEY_00_F20               = 0X6B,
  XT_KEY_00_F21               = 0X6C,
  XT_KEY_00_F22               = 0X6D,
  XT_KEY_00_F23               = 0X6E,
  XT_KEY_00_International2    = 0X70,
  XT_KEY_00_CrSel             = 0X72,
  XT_KEY_00_International1    = 0X73,
  XT_KEY_00_ExSel             = 0X74,
  XT_KEY_00_EnlHelp           = 0X75,
  XT_KEY_00_F24               = 0X76,
  XT_KEY_00_Language5         = 0X76,
  XT_KEY_00_Language4         = 0X77,
  XT_KEY_00_Language3         = 0X78,
  XT_KEY_00_International4    = 0X79,
  XT_KEY_00_International5    = 0X7B,
  XT_KEY_00_International3    = 0X7D,
  XT_KEY_00_KPComma           = 0X7E,
  XT_KEY_00_Find              = 0X82,
  XT_KEY_00_Language2         = 0XF1,
  XT_KEY_00_Language1         = 0XF2,
} XtKey00;

typedef enum {
  XT_KEY_E0_Redo              = 0X07,
  XT_KEY_E0_Undo              = 0X08,
  XT_KEY_E0_Paste             = 0X0A,
  XT_KEY_E0_MediaPrevious     = 0X10,
  XT_KEY_E0_Cut               = 0X17,
  XT_KEY_E0_Copy              = 0X18,
  XT_KEY_E0_MediaNext         = 0X19,
  XT_KEY_E0_KPEnter           = 0X1C,
  XT_KEY_E0_RightControl      = 0X1D,
  XT_KEY_E0_Mail              = 0X1E,
  XT_KEY_E0_Mute              = 0X20,
  XT_KEY_E0_Calculator        = 0X21,
  XT_KEY_E0_MediaPlayPause    = 0X22,
  XT_KEY_E0_MediaStop         = 0X24,
  XT_KEY_E0_MediaEject        = 0X2C,
  XT_KEY_E0_VolumeDown        = 0X2E,
  XT_KEY_E0_VolumeUp          = 0X30,
  XT_KEY_E0_WebHome           = 0X32,
  XT_KEY_E0_KPSlash           = 0X35,
  XT_KEY_E0_PrintScreen       = 0X37,
  XT_KEY_E0_RightAlt          = 0X38,
  XT_KEY_E0_Help              = 0X3B,
  XT_KEY_E0_MediaAudio        = 0X3C,
  XT_KEY_E0_Home              = 0X47,
  XT_KEY_E0_ArrowUp           = 0X48,
  XT_KEY_E0_PageUp            = 0X49,
  XT_KEY_E0_ArrowLeft         = 0X4B,
  XT_KEY_E0_ArrowRight        = 0X4D,
  XT_KEY_E0_End               = 0X4F,
  XT_KEY_E0_ArrowDown         = 0X50,
  XT_KEY_E0_PageDown          = 0X51,
  XT_KEY_E0_Insert            = 0X52,
  XT_KEY_E0_Delete            = 0X53,
  XT_KEY_E0_LeftGUI           = 0X5B,
  XT_KEY_E0_RightGUI          = 0X5C,
  XT_KEY_E0_Context           = 0X5D,
  XT_KEY_E0_Power             = 0X5E,
  XT_KEY_E0_Sleep             = 0X5F,
  XT_KEY_E0_Wake              = 0X63,
  XT_KEY_E0_MediaPictures     = 0X64,
  XT_KEY_E0_WebSearch         = 0X65,
  XT_KEY_E0_WebBookmarks      = 0X66,
  XT_KEY_E0_WebRefresh        = 0X67,
  XT_KEY_E0_WebStop           = 0X68,
  XT_KEY_E0_WebForward        = 0X69,
  XT_KEY_E0_WebBack           = 0X6A,
  XT_KEY_E0_MyComputer        = 0X6B,
  XT_KEY_E0_Mail_X1           = 0X6C,
  XT_KEY_E0_MediaVideo        = 0X6D,
} XtKeyE0;

typedef enum {
  XT_KEY_E1_Pause = 0X1D,
} XtKeyE1;

#define XT_BIT_RELEASE 0X80
#define XT_MOD_00      0X00
#define XT_MOD_E0      0XE0
#define XT_MOD_E1      0XE1
#define XT_KEY(group,name) ((XT_MOD_##group << 8) | XT_KEY_##group##_##name)

typedef enum {
  AT_KEY_00_F9                = 0X01,
  AT_KEY_00_F7_X1             = 0X02,
  AT_KEY_00_F5                = 0X03,
  AT_KEY_00_F3                = 0X04,
  AT_KEY_00_F1                = 0X05,
  AT_KEY_00_F2                = 0X06,
  AT_KEY_00_F12               = 0X07,
  AT_KEY_00_F13               = 0X08,
  AT_KEY_00_F10               = 0X09,
  AT_KEY_00_F8                = 0X0A,
  AT_KEY_00_F6                = 0X0B,
  AT_KEY_00_F4                = 0X0C,
  AT_KEY_00_Tab               = 0X0D,
  AT_KEY_00_Grave             = 0X0E,
  AT_KEY_00_KPEqual           = 0X0F,
  AT_KEY_00_F14               = 0X10,
  AT_KEY_00_LeftAlt           = 0X11,
  AT_KEY_00_LeftShift         = 0X12,
  AT_KEY_00_International2    = 0X13,
  AT_KEY_00_LeftControl       = 0X14,
  AT_KEY_00_Q                 = 0X15,
  AT_KEY_00_1                 = 0X16,
  AT_KEY_00_F15               = 0X18,
  AT_KEY_00_Z                 = 0X1A,
  AT_KEY_00_S                 = 0X1B,
  AT_KEY_00_A                 = 0X1C,
  AT_KEY_00_W                 = 0X1D,
  AT_KEY_00_2                 = 0X1E,
  AT_KEY_00_F16               = 0X20,
  AT_KEY_00_C                 = 0X21,
  AT_KEY_00_X                 = 0X22,
  AT_KEY_00_D                 = 0X23,
  AT_KEY_00_E                 = 0X24,
  AT_KEY_00_4                 = 0X25,
  AT_KEY_00_3                 = 0X26,
  AT_KEY_00_International6    = 0X27,
  AT_KEY_00_F17               = 0X28,
  AT_KEY_00_Space             = 0X29,
  AT_KEY_00_V                 = 0X2A,
  AT_KEY_00_F                 = 0X2B,
  AT_KEY_00_T                 = 0X2C,
  AT_KEY_00_R                 = 0X2D,
  AT_KEY_00_5                 = 0X2E,
  AT_KEY_00_F18               = 0X30,
  AT_KEY_00_N                 = 0X31,
  AT_KEY_00_B                 = 0X32,
  AT_KEY_00_H                 = 0X33,
  AT_KEY_00_G                 = 0X34,
  AT_KEY_00_Y                 = 0X35,
  AT_KEY_00_6                 = 0X36,
  AT_KEY_00_F19               = 0X38,
  AT_KEY_00_CrSel             = 0X39,
  AT_KEY_00_M                 = 0X3A,
  AT_KEY_00_J                 = 0X3B,
  AT_KEY_00_U                 = 0X3C,
  AT_KEY_00_7                 = 0X3D,
  AT_KEY_00_8                 = 0X3E,
  AT_KEY_00_F20               = 0X40,
  AT_KEY_00_Comma             = 0X41,
  AT_KEY_00_K                 = 0X42,
  AT_KEY_00_I                 = 0X43,
  AT_KEY_00_O                 = 0X44,
  AT_KEY_00_0                 = 0X45,
  AT_KEY_00_9                 = 0X46,
  AT_KEY_00_F21               = 0X48,
  AT_KEY_00_Period            = 0X49,
  AT_KEY_00_Slash             = 0X4A,
  AT_KEY_00_L                 = 0X4B,
  AT_KEY_00_Semicolon         = 0X4C,
  AT_KEY_00_P                 = 0X4D,
  AT_KEY_00_Minus             = 0X4E,
  AT_KEY_00_F22               = 0X50,
  AT_KEY_00_International1    = 0X51,
  AT_KEY_00_Apostrophe        = 0X52,
  AT_KEY_00_ExSel             = 0X53,
  AT_KEY_00_LeftBracket       = 0X54,
  AT_KEY_00_Equal             = 0X55,
  AT_KEY_00_F23               = 0X57,
  AT_KEY_00_CapsLock          = 0X58,
  AT_KEY_00_RightShift        = 0X59,
  AT_KEY_00_Enter             = 0X5A,
  AT_KEY_00_RightBracket      = 0X5B,
  AT_KEY_00_EnlHelp           = 0X5C,
  AT_KEY_00_Backslash         = 0X5D,
  AT_KEY_00_Europe1           = 0X5D,
  AT_KEY_00_F24               = 0X5F,
  AT_KEY_00_Language5         = 0X5F,
  AT_KEY_00_Europe2           = 0X61,
  AT_KEY_00_Language4         = 0X62,
  AT_KEY_00_Language3         = 0X63,
  AT_KEY_00_International4    = 0X64,
  AT_KEY_00_Backspace         = 0X66,
  AT_KEY_00_International5    = 0X67,
  AT_KEY_00_KP1               = 0X69,
  AT_KEY_00_International3    = 0X6A,
  AT_KEY_00_KP4               = 0X6B,
  AT_KEY_00_KP7               = 0X6C,
  AT_KEY_00_KPComma           = 0X6D,
  AT_KEY_00_KP0               = 0X70,
  AT_KEY_00_KPPeriod          = 0X71,
  AT_KEY_00_KP2               = 0X72,
  AT_KEY_00_KP5               = 0X73,
  AT_KEY_00_KP6               = 0X74,
  AT_KEY_00_KP8               = 0X75,
  AT_KEY_00_Escape            = 0X76,
  AT_KEY_00_NumLock           = 0X77,
  AT_KEY_00_F11               = 0X78,
  AT_KEY_00_KPPlus            = 0X79,
  AT_KEY_00_KP3               = 0X7A,
  AT_KEY_00_KPMinus           = 0X7B,
  AT_KEY_00_KPAsterisk        = 0X7C,
  AT_KEY_00_KP9               = 0X7D,
  AT_KEY_00_ScrollLock        = 0X7E,
  AT_KEY_00_F7                = 0X83,
  AT_KEY_00_SystemRequest     = 0X84,
  AT_KEY_00_Language2         = 0XF1,
  AT_KEY_00_Language1         = 0XF2,
} AtKey00;

typedef enum {
  AT_KEY_E0_Help              = 0X05,
  AT_KEY_E0_MediaAudio        = 0X06,
  AT_KEY_E0_MediaPictures     = 0X08,
  AT_KEY_E0_WebSearch         = 0X10,
  AT_KEY_E0_RightAlt          = 0X11,
  AT_KEY_E0_RightControl      = 0X14,
  AT_KEY_E0_MediaPrevious     = 0X15,
  AT_KEY_E0_WebBookmarks      = 0X18,
  AT_KEY_E0_MediaEject        = 0X1A,
  AT_KEY_E0_Mail              = 0X1C,
  AT_KEY_E0_LeftGUI           = 0X1F,
  AT_KEY_E0_WebRefresh        = 0X20,
  AT_KEY_E0_VolumeDown        = 0X21,
  AT_KEY_E0_Mute              = 0X23,
  AT_KEY_E0_RightGUI          = 0X27,
  AT_KEY_E0_WebStop           = 0X28,
  AT_KEY_E0_Calculator        = 0X2B,
  AT_KEY_E0_Context           = 0X2F,
  AT_KEY_E0_WebForward        = 0X30,
  AT_KEY_E0_VolumeUp          = 0X32,
  AT_KEY_E0_MediaPlayPause    = 0X34,
  AT_KEY_E0_Redo              = 0X36,
  AT_KEY_E0_Power             = 0X37,
  AT_KEY_E0_WebBack           = 0X38,
  AT_KEY_E0_WebHome           = 0X3A,
  AT_KEY_E0_MediaStop         = 0X3B,
  AT_KEY_E0_Undo              = 0X3D,
  AT_KEY_E0_Sleep             = 0X3F,
  AT_KEY_E0_MyComputer        = 0X40,
  AT_KEY_E0_Cut               = 0X43,
  AT_KEY_E0_Copy              = 0X44,
  AT_KEY_E0_Paste             = 0X46,
  AT_KEY_E0_Mail_X1           = 0X48,
  AT_KEY_E0_KPSlash           = 0X4A,
  AT_KEY_E0_MediaNext         = 0X4D,
  AT_KEY_E0_MediaVideo        = 0X50,
  AT_KEY_E0_KPEnter           = 0X5A,
  AT_KEY_E0_Wake              = 0X5E,
  AT_KEY_E0_End               = 0X69,
  AT_KEY_E0_ArrowLeft         = 0X6B,
  AT_KEY_E0_Home              = 0X6C,
  AT_KEY_E0_Insert            = 0X70,
  AT_KEY_E0_Delete            = 0X71,
  AT_KEY_E0_ArrowDown         = 0X72,
  AT_KEY_E0_ArrowRight        = 0X74,
  AT_KEY_E0_ArrowUp           = 0X75,
  AT_KEY_E0_PageDown          = 0X7A,
  AT_KEY_E0_PrintScreen       = 0X7C,
  AT_KEY_E0_PageUp            = 0X7D,
} AtKeyE0;

typedef enum {
  AT_KEY_E1_Pause = 0X14,
} AtKeyE1;

#define AT_MOD_RELEASE 0XF0
#define AT_MOD_00      0X00
#define AT_MOD_E0      0XE0
#define AT_MOD_E1      0XE1
#define AT_KEY(group,name) ((AT_MOD_##group << 8) | AT_KEY_##group##_##name)

typedef enum {
  PS2_KEY_EnlHelp        = 0X01,
  PS2_KEY_ExSel          = 0X03,
  PS2_KEY_CrSel          = 0X04,
  PS2_KEY_F1             = 0X07,
  PS2_KEY_Escape         = 0X08,
  PS2_KEY_Tab            = 0X0D,
  PS2_KEY_Grave          = 0X0E,
  PS2_KEY_F2             = 0X0F,
  PS2_KEY_LeftControl    = 0X11,
  PS2_KEY_LeftShift      = 0X12,
  PS2_KEY_Europe2        = 0X13,
  PS2_KEY_CapsLock       = 0X14,
  PS2_KEY_Q              = 0X15,
  PS2_KEY_1              = 0X16,
  PS2_KEY_F3             = 0X17,
  PS2_KEY_LeftAlt        = 0X19,
  PS2_KEY_Z              = 0X1A,
  PS2_KEY_S              = 0X1B,
  PS2_KEY_A              = 0X1C,
  PS2_KEY_W              = 0X1D,
  PS2_KEY_2              = 0X1E,
  PS2_KEY_F4             = 0X1F,
  PS2_KEY_C              = 0X21,
  PS2_KEY_X              = 0X22,
  PS2_KEY_D              = 0X23,
  PS2_KEY_E              = 0X24,
  PS2_KEY_4              = 0X25,
  PS2_KEY_3              = 0X26,
  PS2_KEY_F5             = 0X27,
  PS2_KEY_Space          = 0X29,
  PS2_KEY_V              = 0X2A,
  PS2_KEY_F              = 0X2B,
  PS2_KEY_T              = 0X2C,
  PS2_KEY_R              = 0X2D,
  PS2_KEY_5              = 0X2E,
  PS2_KEY_F6             = 0X2F,
  PS2_KEY_N              = 0X31,
  PS2_KEY_B              = 0X32,
  PS2_KEY_H              = 0X33,
  PS2_KEY_G              = 0X34,
  PS2_KEY_Y              = 0X35,
  PS2_KEY_6              = 0X36,
  PS2_KEY_F7             = 0X37,
  PS2_KEY_RightAlt       = 0X39,
  PS2_KEY_M              = 0X3A,
  PS2_KEY_J              = 0X3B,
  PS2_KEY_U              = 0X3C,
  PS2_KEY_7              = 0X3D,
  PS2_KEY_8              = 0X3E,
  PS2_KEY_F8             = 0X3F,
  PS2_KEY_Comma          = 0X41,
  PS2_KEY_K              = 0X42,
  PS2_KEY_I              = 0X43,
  PS2_KEY_O              = 0X44,
  PS2_KEY_0              = 0X45,
  PS2_KEY_9              = 0X46,
  PS2_KEY_F9             = 0X47,
  PS2_KEY_Period         = 0X49,
  PS2_KEY_Slash          = 0X4A,
  PS2_KEY_L              = 0X4B,
  PS2_KEY_Semicolon      = 0X4C,
  PS2_KEY_P              = 0X4D,
  PS2_KEY_Minus          = 0X4E,
  PS2_KEY_F10            = 0X4F,
  PS2_KEY_International1 = 0X51,
  PS2_KEY_Apostrophe     = 0X52,
  PS2_KEY_Europe1        = 0X53,
  PS2_KEY_LeftBracket    = 0X54,
  PS2_KEY_Equal          = 0X55,
  PS2_KEY_F11            = 0X56,
  PS2_KEY_PrintScreen    = 0X57,
  PS2_KEY_RightControl   = 0X58,
  PS2_KEY_RightShift     = 0X59,
  PS2_KEY_Enter          = 0X5A,
  PS2_KEY_RightBracket   = 0X5B,
  PS2_KEY_Backslash      = 0X5C,
  PS2_KEY_International3 = 0X5D,
  PS2_KEY_F12            = 0X5E,
  PS2_KEY_ScrollLock     = 0X5F,
  PS2_KEY_ArrowDown      = 0X60,
  PS2_KEY_ArrowLeft      = 0X61,
  PS2_KEY_Pause          = 0X62,
  PS2_KEY_ArrowUp        = 0X63,
  PS2_KEY_Delete         = 0X64,
  PS2_KEY_End            = 0X65,
  PS2_KEY_Backspace      = 0X66,
  PS2_KEY_Insert         = 0X67,
  PS2_KEY_KP1            = 0X69,
  PS2_KEY_ArrowRight     = 0X6A,
  PS2_KEY_KP4            = 0X6B,
  PS2_KEY_KP7            = 0X6C,
  PS2_KEY_PageDown       = 0X6D,
  PS2_KEY_Home           = 0X6E,
  PS2_KEY_PageUp         = 0X6F,
  PS2_KEY_KP0            = 0X70,
  PS2_KEY_KPPeriod       = 0X71,
  PS2_KEY_KP2            = 0X72,
  PS2_KEY_KP5            = 0X73,
  PS2_KEY_KP6            = 0X74,
  PS2_KEY_KP8            = 0X75,
  PS2_KEY_NumLock        = 0X76,
  PS2_KEY_KPSlash        = 0X77,
  PS2_KEY_KPEnter        = 0X79,
  PS2_KEY_KP3            = 0X7A,
  PS2_KEY_KPComma        = 0X7B,
  PS2_KEY_KPPlus         = 0X7C,
  PS2_KEY_KP9            = 0X7D,
  PS2_KEY_KPAsterisk     = 0X7E,
  PS2_KEY_KPMinus        = 0X84,
  PS2_KEY_International5 = 0X85,
  PS2_KEY_International4 = 0X86,
  PS2_KEY_International2 = 0X87,
  PS2_KEY_LeftGUI        = 0X8B,
  PS2_KEY_RightGUI       = 0X8C,
  PS2_KEY_Context        = 0X8D,
} Ps2Key;

#define PS2_MOD_RELEASE 0XF0

typedef enum {
  HID_ERR_RollOver             = 0X01,
  HID_ERR_PostFail             = 0X02,
  HID_ERR_Undefined            = 0X03,
  HID_KEY_A                    = 0X04,
  HID_KEY_B                    = 0X05,
  HID_KEY_C                    = 0X06,
  HID_KEY_D                    = 0X07,
  HID_KEY_E                    = 0X08,
  HID_KEY_F                    = 0X09,
  HID_KEY_G                    = 0X0A,
  HID_KEY_H                    = 0X0B,
  HID_KEY_I                    = 0X0C,
  HID_KEY_J                    = 0X0D,
  HID_KEY_K                    = 0X0E,
  HID_KEY_L                    = 0X0F,
  HID_KEY_M                    = 0X10,
  HID_KEY_N                    = 0X11,
  HID_KEY_O                    = 0X12,
  HID_KEY_P                    = 0X13,
  HID_KEY_Q                    = 0X14,
  HID_KEY_R                    = 0X15,
  HID_KEY_S                    = 0X16,
  HID_KEY_T                    = 0X17,
  HID_KEY_U                    = 0X18,
  HID_KEY_V                    = 0X19,
  HID_KEY_W                    = 0X1A,
  HID_KEY_X                    = 0X1B,
  HID_KEY_Y                    = 0X1C,
  HID_KEY_Z                    = 0X1D,
  HID_KEY_1                    = 0X1E,
  HID_KEY_2                    = 0X1F,
  HID_KEY_3                    = 0X20,
  HID_KEY_4                    = 0X21,
  HID_KEY_5                    = 0X22,
  HID_KEY_6                    = 0X23,
  HID_KEY_7                    = 0X24,
  HID_KEY_8                    = 0X25,
  HID_KEY_9                    = 0X26,
  HID_KEY_0                    = 0X27,
  HID_KEY_Enter                = 0X28,
  HID_KEY_Escape               = 0X29,
  HID_KEY_Backspace            = 0X2A,
  HID_KEY_Tab                  = 0X2B,
  HID_KEY_Space                = 0X2C,
  HID_KEY_Minus                = 0X2D,
  HID_KEY_Equal                = 0X2E,
  HID_KEY_LeftBracket          = 0X2F,
  HID_KEY_RightBracket         = 0X30,
  HID_KEY_Backslash            = 0X31,
  HID_KEY_Europe1              = 0X32,
  HID_KEY_Semicolon            = 0X33,
  HID_KEY_Apostrophe           = 0X34,
  HID_KEY_Grave                = 0X35,
  HID_KEY_Comma                = 0X36,
  HID_KEY_Period               = 0X37,
  HID_KEY_Slash                = 0X38,
  HID_KEY_CapsLock             = 0X39,
  HID_KEY_F1                   = 0X3A,
  HID_KEY_F2                   = 0X3B,
  HID_KEY_F3                   = 0X3C,
  HID_KEY_F4                   = 0X3D,
  HID_KEY_F5                   = 0X3E,
  HID_KEY_F6                   = 0X3F,
  HID_KEY_F7                   = 0X40,
  HID_KEY_F8                   = 0X41,
  HID_KEY_F9                   = 0X42,
  HID_KEY_F10                  = 0X43,
  HID_KEY_F11                  = 0X44,
  HID_KEY_F12                  = 0X45,
  HID_KEY_PrintScreen          = 0X46,
  HID_KEY_ScrollLock           = 0X47,
  HID_KEY_Pause                = 0X48,
  HID_KEY_Insert               = 0X49,
  HID_KEY_Home                 = 0X4A,
  HID_KEY_PageUp               = 0X4B,
  HID_KEY_Delete               = 0X4C,
  HID_KEY_End                  = 0X4D,
  HID_KEY_PageDown             = 0X4E,
  HID_KEY_ArrowRight           = 0X4F,
  HID_KEY_ArrowLeft            = 0X50,
  HID_KEY_ArrowDown            = 0X51,
  HID_KEY_ArrowUp              = 0X52,
  HID_KEY_NumLock              = 0X53,
  HID_KEY_KPSlash              = 0X54,
  HID_KEY_KPAsterisk           = 0X55,
  HID_KEY_KPMinus              = 0X56,
  HID_KEY_KPPlus               = 0X57,
  HID_KEY_KPEnter              = 0X58,
  HID_KEY_KP1                  = 0X59,
  HID_KEY_KP2                  = 0X5A,
  HID_KEY_KP3                  = 0X5B,
  HID_KEY_KP4                  = 0X5C,
  HID_KEY_KP5                  = 0X5D,
  HID_KEY_KP6                  = 0X5E,
  HID_KEY_KP7                  = 0X5F,
  HID_KEY_KP8                  = 0X60,
  HID_KEY_KP9                  = 0X61,
  HID_KEY_KP0                  = 0X62,
  HID_KEY_KPPeriod             = 0X63,
  HID_KEY_Europe2              = 0X64,
  HID_KEY_Context              = 0X65,
  HID_KEY_Power                = 0X66,
  HID_KEY_KPEqual              = 0X67,
  HID_KEY_F13                  = 0X68,
  HID_KEY_F14                  = 0X69,
  HID_KEY_F15                  = 0X6A,
  HID_KEY_F16                  = 0X6B,
  HID_KEY_F17                  = 0X6C,
  HID_KEY_F18                  = 0X6D,
  HID_KEY_F19                  = 0X6E,
  HID_KEY_F20                  = 0X6F,
  HID_KEY_F21                  = 0X70,
  HID_KEY_F22                  = 0X71,
  HID_KEY_F23                  = 0X72,
  HID_KEY_F24                  = 0X73,
  HID_KEY_Execute              = 0X74,
  HID_KEY_Help                 = 0X75,
  HID_KEY_Menu                 = 0X76,
  HID_KEY_Select               = 0X77,
  HID_KEY_Stop                 = 0X78,
  HID_KEY_Again                = 0X79,
  HID_KEY_Undo                 = 0X7A,
  HID_KEY_Cut                  = 0X7B,
  HID_KEY_Copy                 = 0X7C,
  HID_KEY_Paste                = 0X7D,
  HID_KEY_Find                 = 0X7E,
  HID_KEY_Mute                 = 0X7F,
  HID_KEY_VolumeUp             = 0X80,
  HID_KEY_VolumeDown           = 0X81,
  HID_KEY_CapsLocking          = 0X82,
  HID_KEY_NumLocking           = 0X83,
  HID_KEY_ScrollLocking        = 0X84,
  HID_KEY_KPComma              = 0X85,
  HID_KEY_Equal_X1             = 0X86,
  HID_KEY_International1       = 0X87, // Ro
  HID_KEY_International2       = 0X88, // Katakana/Hiragana
  HID_KEY_International3       = 0X89, // Yen
  HID_KEY_International4       = 0X8A, // Henkan
  HID_KEY_International5       = 0X8B, // Muhenkan
  HID_KEY_International6       = 0X8C, // PC9800 Keypad '
  HID_KEY_International7       = 0X8D,
  HID_KEY_International8       = 0X8E,
  HID_KEY_International9       = 0X8F,
  HID_KEY_Language1            = 0X90, // Hanguel/English
  HID_KEY_Language2            = 0X91, // Hanja
  HID_KEY_Language3            = 0X92, // Katakana
  HID_KEY_Language4            = 0X93, // Hiragana
  HID_KEY_Language5            = 0X94, // Zenkaku/Hankaku
  HID_KEY_Language6            = 0X95,
  HID_KEY_Language7            = 0X96,
  HID_KEY_Language8            = 0X97,
  HID_KEY_Language9            = 0X98,
  HID_KEY_AlternateErase       = 0X99,
  HID_KEY_SystemReequest       = 0X9A,
  HID_KEY_Cancel               = 0X9B,
  HID_KEY_Clear                = 0X9C,
  HID_KEY_Prior                = 0X9D,
  HID_KEY_Return               = 0X9E,
  HID_KEY_Separator            = 0X9F,
  HID_KEY_Out                  = 0XA0,
  HID_KEY_Oper                 = 0XA1,
  HID_KEY_ClearAgain           = 0XA2,
  HID_KEY_CrSel                = 0XA3,
  HID_KEY_ExSel                = 0XA4,
  HID_KEY_KP00                 = 0XB0,
  HID_KEY_KP000                = 0XB1,
  HID_KEY_KPThousandsSeparator = 0XB2,
  HID_KEY_KPDecimalSeparator   = 0XB3,
  HID_KEY_KPCurrencyUnit       = 0XB4,
  HID_KEY_KPCurrencySubunit    = 0XB5,
  HID_KEY_KPLeftParenthesis    = 0XB6,
  HID_KEY_KPRightParenthesis   = 0XB7,
  HID_KEY_KPLeftBrace          = 0XB8,
  HID_KEY_KPRightBrace         = 0XB9,
  HID_KEY_KPTab                = 0XBA,
  HID_KEY_KPBackspace          = 0XBB,
  HID_KEY_KPA                  = 0XBC,
  HID_KEY_KPB                  = 0XBD,
  HID_KEY_KPC                  = 0XBE,
  HID_KEY_KPD                  = 0XBF,
  HID_KEY_KPE                  = 0XC0,
  HID_KEY_KPF                  = 0XC1,
  HID_KEY_KPBitwiseXor         = 0XC2,
  HID_KEY_KPExponentiate       = 0XC3,
  HID_KEY_KPmodulo             = 0XC4,
  HID_KEY_KPLess               = 0XC5,
  HID_KEY_KPGreater            = 0XC6,
  HID_KEY_KPBitwiseAnd         = 0XC7,
  HID_KEY_KPBooleanAnd         = 0XC8,
  HID_KEY_KPBitwiseOr          = 0XC9,
  HID_KEY_KPBooleanOr          = 0XCA,
  HID_KEY_KPColon              = 0XCB,
  HID_KEY_KPNumber             = 0XCC,
  HID_KEY_KPSpace              = 0XCD,
  HID_KEY_KPAt                 = 0XCE,
  HID_KEY_KPBooleanNot         = 0XCF,
  HID_KEY_KPMemoryStore        = 0XD0,
  HID_KEY_KPMemoryRecall       = 0XD1,
  HID_KEY_KPMemoryClear        = 0XD2,
  HID_KEY_KPMemoryAdd          = 0XD3,
  HID_KEY_KPMemorySubtract     = 0XD4,
  HID_KEY_KPMemoryMultiply     = 0XD5,
  HID_KEY_KPMemoryDivide       = 0XD6,
  HID_KEY_KPPlusMinus          = 0XD7,
  HID_KEY_KPClear              = 0XD8,
  HID_KEY_KPClearEntry         = 0XD9,
  HID_KEY_KPBinary             = 0XDA,
  HID_KEY_KPOctal              = 0XDB,
  HID_KEY_KPDecimal            = 0XDC,
  HID_KEY_KPHexadecimal        = 0XDD,
  HID_KEY_LeftControl          = 0XE0,
  HID_KEY_LeftShift            = 0XE1,
  HID_KEY_LeftAlt              = 0XE2,
  HID_KEY_LeftGUI              = 0XE3,
  HID_KEY_RightControl         = 0XE4,
  HID_KEY_RightShift           = 0XE5,
  HID_KEY_RightAlt             = 0XE6,
  HID_KEY_RightGUI             = 0XE7,
} HidKey;

extern const unsigned char AT2XT[0X80];

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* BRLTTY_INCLUDED_KBD_KEYCODES */
