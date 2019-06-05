//
//    Copyright (C) Microsoft.  All rights reserved.
//
#ifndef   __USB200_H__
#define   __USB200_H__
#include <winapifamily.h>

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)


#include "usbspec.h"


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#endif // __USB200_H__
