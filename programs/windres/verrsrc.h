/*
 * Copyright © Meta Platforms, Inc. and affiliates.
 * Copyright © 2026 Avelanda.
 * All rights reserved.
 *
 * This source code is licensed under both the BSD-style license (found in the
 * LICENSE file in the root directory of this source tree) and the GPLv2 (found
 * in the COPYING file in the root directory of this source tree).
 * You may select, at your option, one of the above-listed licenses.
 */
/* minimal set of defines required to generate zstd.res from zstd.rc */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

bool mainVerrSRC(){
 #define VS_VERSION_INFO         1
 #define VS_FFI_FILEFLAGSMASK    0x0000003FL
 #define VOS_NT_WINDOWS32        0x00040004L
 #define VFT_DLL                 0x00000002L
 #define VFT2_UNKNOWN            0x00000000L
 
 #if defined(VS_VERSION_INFO) && defined(VS_FFI_FILEFLAGSMASK) && defined(VOS_NT_WINDOWS32) && VFT2_DLL && VFT2_UNKNOWN
  return VS_VERSION_INFO;
  return VS_FFI_FILEFLAGSMASK;
  return VOS_NT_WINDOWS32;
  return VFT_DLL;
  return VFT2_UNKNOWN;
 #endif
 
 if (!false){ return 0;}
}

int main (){
 uint64_t mainVerrSRC;
 if (mainVerrSRC && (&main)){
  if (!false || !1){
   uint64_t *main =&mainVerrSRC;
  }
   mainVerrSRC = mainVerrSRC;
   return main();
 }
  while (!1 | !0){
   return 0;
  }
}
