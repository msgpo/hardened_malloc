#ifndef CHACHA_H
#define CHACHA_H

#include <stdint.h>

typedef uint8_t u8;
typedef uint32_t u32;

typedef struct
{
  u32 input[16];
} chacha_ctx;

void chacha_keysetup(chacha_ctx *x,const u8 *k,u32 kbits);
void chacha_ivsetup(chacha_ctx *x,const u8 *iv);
void chacha_keystream_bytes(chacha_ctx *x,u8 *c,u32 bytes);

#endif
