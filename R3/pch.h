﻿// pch.h: 这是预编译标头文件。
// 下方列出的文件仅编译一次，提高了将来生成的生成性能。
// 这还将影响 IntelliSense 性能，包括代码完成和许多代码浏览功能。
// 但是，如果此处列出的文件中的任何一个在生成之间有更新，它们全部都将被重新编译。
// 请勿在此处添加要频繁更新的文件，这将使得性能优势无效。

#ifndef PCH_H
#define PCH_H

// 添加要在此处预编译的标头
#include "framework.h"
#include <afxcontrolbars.h>

#endif //PCH_H


#include <winioctl.h>

#define MY_CTL_CODE(code, method) CTL_CODE(FILE_DEVICE_UNKNOWN, 0x800+(code), method, FILE_ANY_ACCESS)
typedef enum _MyCtlCode {
	DEVICE_CTRL_CODE_GET_DRIVER_NUM = MY_CTL_CODE(0, METHOD_BUFFERED),
	DEVICE_CTRL_CODE_ENUM_DRIVERS = MY_CTL_CODE(1, METHOD_BUFFERED),
	DEVICE_CTRL_CODE_HIDE_DRIVERS = MY_CTL_CODE(2, METHOD_BUFFERED),

	DEVICE_CTRL_CODE_GET_PROC_NUM = MY_CTL_CODE(3, METHOD_BUFFERED),
	DEVICE_CTRL_CODE_ENUM_PROC = MY_CTL_CODE(4, METHOD_OUT_DIRECT),
	DEVICE_CTRL_CODE_HIDE_PROC = MY_CTL_CODE(5, METHOD_OUT_DIRECT),

	DEVICE_CTRL_CODE_GET_THREAD_NUM = MY_CTL_CODE(6, METHOD_BUFFERED),
	DEVICE_CTRL_CODE_ENUM_THREAD = MY_CTL_CODE(7, METHOD_OUT_DIRECT),
	DEVICE_CTRL_CODE_GET_MOD_NUM = MY_CTL_CODE(8, METHOD_BUFFERED),
	DEVICE_CTRL_CODE_ENUM_MOD = MY_CTL_CODE(9, METHOD_OUT_DIRECT),

	DEVICE_CTRL_CODE_KILL_PROC = MY_CTL_CODE(10, METHOD_BUFFERED),

	DEVICE_CTRL_CODE_IDT = MY_CTL_CODE(11, METHOD_OUT_DIRECT),

	DEVICE_CTRL_CODE_GET_GDT_NUM = MY_CTL_CODE(12, METHOD_BUFFERED),
	DEVICE_CTRL_CODE_ENUM_GDT = MY_CTL_CODE(13, METHOD_OUT_DIRECT),

	DEVICE_CTRL_CODE_GET_SSDT_SERVICE_NUM = MY_CTL_CODE(14, METHOD_OUT_DIRECT),
	DEVICE_CTRL_CODE_GET_SSDT_SERVICE = MY_CTL_CODE(15, METHOD_OUT_DIRECT),

	DEVICE_CTRL_CODE_PROTECT_SELF = MY_CTL_CODE(16, METHOD_OUT_DIRECT),

	DEVICE_CTRL_CODE_KERNEL_RELOAD = MY_CTL_CODE(17, METHOD_OUT_DIRECT),

	DEVICE_CTRL_CODE_GET_FILE_COUNT = MY_CTL_CODE(18, METHOD_BUFFERED),
	DEVICE_CTRL_CODE_GET_FILE_INFO = MY_CTL_CODE(19, METHOD_OUT_DIRECT)

}MyCtlCode;