﻿#ifndef _MICROCORECMD_H
#define _MICROCORECMD_H

#define MICRO_CORE_VERSION 150

#define VERF_DISABLE_UPDATE 1
#define VERF_RUN_ON_ANDROID 2

enum
{
	MCMD_SET_EMULATE_MODE = 0,
	MCMD_KEY_DOWN,
	MCMD_KEY_UP,
	MCMD_KEY_PRESS,
	MCMD_MOUSE_MOVE,
	MCMD_MOUSE_DOWN,
	MCMD_MOUSE_UP,
	MCMD_MOUSE_CLICK,
	MCMD_MOUSE_DOUBLE_CLICK,
	MCMD_MOUSE_WHEEL,
	MCMD_LOCK_INPUT,
	MCMD_UNLOCK_INPUT,
	MCMD_SEND_STRING,
	MCMD_TOUCH_MOVE,
	MCMD_TOUCH_DOWN,
	MCMD_TOUCH_UP,
	MCMD_TOUCH_TAP,
	MCMD_TOUCH_SWIPE,
};

enum
{
	MCMD_CAPTURE_BITMAP = 100,
	MCMD_RELEASE_BITMAP,
	MCMD_GET_PREVIOUS_CAPTURE,
	MCMD_CREATE_BITMAP,
	MCMD_GET_BITMAP_FILE,
	MCMD_FIND_PICTURE,
	MCMD_FIND_COLOR,
	MCMD_FIND_COLOR_EX,
	MCMD_GET_PIXEL_COLOR,
	MCMD_GET_COLOR_COUNT,
	MCMD_IS_SIMILAR_COLOR,
	MCMD_FIND_STRING,
	MCMD_FIND_STRING_EX,
	MCMD_SET_OCR_DICT,
	MCMD_OCR_EXTRACT,
	MCMD_SIMPLE_OCR,
	MCMD_SIMPLE_OCR_EX,
	MCMD_GET_CURSOR_SHAPE,
};

enum
{
	MCMD_GET_CLIENT_SIZE = 200,
	MCMD_SET_CLIENT_SIZE,
	MCMD_GET_SPECIFY_WINDOW,
	MCMD_FIND_PROCESS_WINDOW,
	MCMD_MOVE_WINDOW,
	MCMD_GET_CLASS_NAME,
	MCMD_GET_WINDOW_STATE,
	MCMD_SET_WINDOW_STATE,
	MCMD_GET_WINDOW_TEXT,
	MCMD_SET_WINDOW_TEXT,
	MCMD_IS_WINDOW_VALID,
	MCMD_GET_PARENT_WINDOW,
	MCMD_ENUM_WINDOW,
	MCMD_GET_WINDOW_RECT,
};

enum
{
	MCMD_RUN_APP = 300,
	MCMD_KILL_APP,
	MCMD_SHELL_OPEN,
	MCMD_WAIT_KEY,
	MCMD_GET_PROCESS_ID,
	MCMD_SEND_DEVICE_CMD,
	MCMD_GET_DEVICE_INFO,
};

enum
{
	MCMD_BIND_PROCESS = 400,
	MCMD_BIND_WINDOW,
	MCMD_UNBIND_WINDOW,
};

enum
{
	MCMD_GET_MICRO_CORE_VERSION = 500,
	MCMD_REQUEST_CONTROL,
	MCMD_GET_FILE_CRC,
	MCMD_UPDATE_MICRO_SERVER,
	MCMD_INIT_MICRO_CORE,
	MCMD_GET_PLUGIN_CRC,
	MCMD_PUSH_PLUGIN,
	MCMD_LOAD_PLUGINS,
	MCMD_GET_PLUGIN_COMMANDS,
	MCMD_INVOKE_PLUGIN_COMMAND,
	MCMD_DESTROY_PLUGIN_OBJECT,
	MCMD_CLEANUP_PLUGINS,
};

enum
{
	MCMD_SEARCH_CODE = 600,
	MCMD_READ_MEMORY,
	MCMD_WRITE_MEMORY,
	MCMD_LOAD_DLL_EXTEND,
	MCMD_FREE_DLL_EXTEND,
	MCMD_INVOKE_DLL_EXTEND,
};

#endif