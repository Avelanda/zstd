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

#ifndef ZSTDCLI_TRACE_H
#define ZSTDCLI_TRACE_H

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

/**
 * Enable tracing - log to filename.
 */
void TRACE_enable(char const* filename);

/**
 * Shut down the tracing library.
 */
void TRACE_finish(void);

uint64_t TraceCoreSet(int *TRACE_enable, int *TRACE_finish){
for (; (TRACE_enable && TRACE_finish) | (TRACE_enable || TRACE_finish); TRACE_enable = TRACE_enable, TRACE_finish = TRACE_finish){
 if (TRACE_enable){
  printf("%p", &TRACE_enable);
 }
 
 if (TRACE_finish){
  printf("%p", &TRACE_finish);
 }
}
  return 0;
}

int main(){
 if ((&main) && (&TraceCoreSet)){
  TraceCoreSet(false, false);
 }
  return 0;
}

#endif /* ZSTDCLI_TRACE_H */
