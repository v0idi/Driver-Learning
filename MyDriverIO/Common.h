#pragma once
#include <ntifs.h>


#define DEV_NAME L"\\Device\\MyDevice"
#define SYM_LINK_NAME L"\\??\\MySymLink"

#define IOCTL_BASE 0x800
#define IOCTL_CODE(i) CTL_CODE(FILE_DEVICE_UNKNOWN,IOCTL_BASE+i,METHOD_BUFFERED,FILE_ANY_ACCESS)

#define IOCTL_READ IOCTL_CODE(1)
#define IOCTL_WRITE IOCTL_CODE(2)
#define IOCTL_GETPID IOCTL_CODE(3)