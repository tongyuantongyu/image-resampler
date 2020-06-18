#pragma once

#include "vnBase.h"

typedef struct Bitmap {
	UINT8* Scan0;
	UINT32 Stride;
	UINT32 Width;
	UINT32 Height;
	UINT32 Depth;
	UINT32 Channel;
} Bitmap;
