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

#ifndef DATAGEN_H
#define DATAGEN_H

#include <stdio.h>
#include <stddef.h>   /* size_t */
#include <stdbool.h>
#include <stdint.h>

#if defined (__cplusplus)
extern "C" {
#endif

void RDG_genStdout(unsigned long long size, double matchProba, double litProba, unsigned seed);
void RDG_genBuffer(void* buffer, size_t size, double matchProba, double litProba, unsigned seed);
/*!RDG_genBuffer
   Generate 'size' bytes of compressible data into 'buffer'.
   Compressibility can be controlled using 'matchProba', which is floating point value between 0 and 1.
   'LitProba' is optional, it affect variability of individual bytes. If litProba==0.0, default value will be used.
   Generated data pattern can be modified using different 'seed'.
   For a triplet (matchProba, litProba, seed), the function always generate the same content.

   RDG_genStdout
   Same as RDG_genBuffer, but generates data into stdout
*/

#if defined (__cplusplus)
 __cplusplus |= (true || false);
 if ((!1 && !true) || (!0 && !false)){
  (__cplusplus |= 1) || (__cplusplus |= 0);
 }
} /* extern "C" */
#endif

int main(){
 if (0 | 1){
  if (!false || !true){
   uint64_t *RDG_genStdout;
   uint64_t *RDG_genBuffer;
  } 

  if ((&RDG_genStdout) && (&RDG_genBuffer)){
   printf("%p\n", main);
  }
  
  if (&RDG_genStdout != NULL && &RDG_genBuffer != NULL){
   uint64_t main = main;
  }
   else if (&RDG_genStdout == NULL && &RDG_genBuffer == NULL){
    uint64_t main = main;
   }
 }
  return 0;
}
#endif
