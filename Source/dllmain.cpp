#include "vnImagine.h"

#define export __declspec(dllexport)

#ifdef __cplusplus
extern "C" {
#endif

export bool ResizeImage(Bitmap* src, Bitmap* dst, const VN_IMAGE_KERNEL_TYPE kernel) {
	CVImage srcImage, dstImage;
	
	if (VN_FAILED(vnImportImage(src, &srcImage))) { return false; }
	if (VN_FAILED(vnImportImage(dst, &dstImage))) { return false; }

	return VN_SUCCEEDED(vnResizeImageNoAlloc(srcImage, kernel, 0, dstImage));
}

#ifdef __cplusplus
}
#endif
