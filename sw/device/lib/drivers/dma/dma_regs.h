// Generated register defines for dma

// Copyright information found in source file:
// Copyright EPFL contributors.

// Licensing information found in source file:
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#ifndef _DMA_REG_DEFS_
#define _DMA_REG_DEFS_

#ifdef __cplusplus
extern "C" {
#endif
// Register width
#define DMA_PARAM_REG_WIDTH 32

// Input data pointer (word aligned)
#define DMA_SRC_PTR_REG_OFFSET 0x0

// Output data pointer (word aligned)
#define DMA_DST_PTR_REG_OFFSET 0x4

// Addess data pointer (word aligned)
#define DMA_ADDR_PTR_REG_OFFSET 0x8

// Number of bytes to copy from, defined with respect to the first dimension
// - Once a value is written, the copy starts
#define DMA_SIZE_TR_D1_REG_OFFSET 0xc
#define DMA_SIZE_TR_D1_SIZE_MASK 0xffff
#define DMA_SIZE_TR_D1_SIZE_OFFSET 0
#define DMA_SIZE_TR_D1_SIZE_FIELD \
  ((bitfield_field32_t) { .mask = DMA_SIZE_TR_D1_SIZE_MASK, .index = DMA_SIZE_TR_D1_SIZE_OFFSET })

// Number of bytes to copy from, defined with respect to the second dimension
#define DMA_SIZE_TR_D2_REG_OFFSET 0x10
#define DMA_SIZE_TR_D2_SIZE_MASK 0xffff
#define DMA_SIZE_TR_D2_SIZE_OFFSET 0
#define DMA_SIZE_TR_D2_SIZE_FIELD \
  ((bitfield_field32_t) { .mask = DMA_SIZE_TR_D2_SIZE_MASK, .index = DMA_SIZE_TR_D2_SIZE_OFFSET })

// Status bits are set to one if a given event occurred
#define DMA_STATUS_REG_OFFSET 0x14
#define DMA_STATUS_READY_BIT 0
#define DMA_STATUS_WINDOW_DONE_BIT 1

// Increment number of src/dst pointer every time a word is copied
#define DMA_SRC_PTR_INC_REG_OFFSET 0x18
#define DMA_SRC_PTR_INC_SRC_PTR_INC_D1_MASK 0x3f
#define DMA_SRC_PTR_INC_SRC_PTR_INC_D1_OFFSET 0
#define DMA_SRC_PTR_INC_SRC_PTR_INC_D1_FIELD \
  ((bitfield_field32_t) { .mask = DMA_SRC_PTR_INC_SRC_PTR_INC_D1_MASK, .index = DMA_SRC_PTR_INC_SRC_PTR_INC_D1_OFFSET })
#define DMA_SRC_PTR_INC_SRC_PTR_INC_D2_MASK 0x7fffff
#define DMA_SRC_PTR_INC_SRC_PTR_INC_D2_OFFSET 6
#define DMA_SRC_PTR_INC_SRC_PTR_INC_D2_FIELD \
  ((bitfield_field32_t) { .mask = DMA_SRC_PTR_INC_SRC_PTR_INC_D2_MASK, .index = DMA_SRC_PTR_INC_SRC_PTR_INC_D2_OFFSET })

// Increment number of src/dst pointer every time a word is copied
#define DMA_DST_PTR_INC_REG_OFFSET 0x1c
#define DMA_DST_PTR_INC_DST_PTR_INC_D1_MASK 0x3f
#define DMA_DST_PTR_INC_DST_PTR_INC_D1_OFFSET 0
#define DMA_DST_PTR_INC_DST_PTR_INC_D1_FIELD \
  ((bitfield_field32_t) { .mask = DMA_DST_PTR_INC_DST_PTR_INC_D1_MASK, .index = DMA_DST_PTR_INC_DST_PTR_INC_D1_OFFSET })
#define DMA_DST_PTR_INC_DST_PTR_INC_D2_MASK 0x7fffff
#define DMA_DST_PTR_INC_DST_PTR_INC_D2_OFFSET 6
#define DMA_DST_PTR_INC_DST_PTR_INC_D2_FIELD \
  ((bitfield_field32_t) { .mask = DMA_DST_PTR_INC_DST_PTR_INC_D2_MASK, .index = DMA_DST_PTR_INC_DST_PTR_INC_D2_OFFSET })

// The DMA will wait for the signal
#define DMA_SLOT_REG_OFFSET 0x20
#define DMA_SLOT_RX_TRIGGER_SLOT_MASK 0xffff
#define DMA_SLOT_RX_TRIGGER_SLOT_OFFSET 0
#define DMA_SLOT_RX_TRIGGER_SLOT_FIELD \
  ((bitfield_field32_t) { .mask = DMA_SLOT_RX_TRIGGER_SLOT_MASK, .index = DMA_SLOT_RX_TRIGGER_SLOT_OFFSET })
#define DMA_SLOT_TX_TRIGGER_SLOT_MASK 0xffff
#define DMA_SLOT_TX_TRIGGER_SLOT_OFFSET 16
#define DMA_SLOT_TX_TRIGGER_SLOT_FIELD \
  ((bitfield_field32_t) { .mask = DMA_SLOT_TX_TRIGGER_SLOT_MASK, .index = DMA_SLOT_TX_TRIGGER_SLOT_OFFSET })

// Width/type of the data to transfer
#define DMA_DATA_TYPE_REG_OFFSET 0x24
#define DMA_DATA_TYPE_DATA_TYPE_MASK 0x3
#define DMA_DATA_TYPE_DATA_TYPE_OFFSET 0
#define DMA_DATA_TYPE_DATA_TYPE_FIELD \
  ((bitfield_field32_t) { .mask = DMA_DATA_TYPE_DATA_TYPE_MASK, .index = DMA_DATA_TYPE_DATA_TYPE_OFFSET })
#define DMA_DATA_TYPE_DATA_TYPE_VALUE_DMA_32BIT_WORD 0x0
#define DMA_DATA_TYPE_DATA_TYPE_VALUE_DMA_16BIT_WORD 0x1
#define DMA_DATA_TYPE_DATA_TYPE_VALUE_DMA_8BIT_WORD 0x2
#define DMA_DATA_TYPE_DATA_TYPE_VALUE_DMA_8BIT_WORD_2 0x3

// Set the operational mode of the DMA
#define DMA_MODE_REG_OFFSET 0x28
#define DMA_MODE_MODE_MASK 0x3
#define DMA_MODE_MODE_OFFSET 0
#define DMA_MODE_MODE_FIELD \
  ((bitfield_field32_t) { .mask = DMA_MODE_MODE_MASK, .index = DMA_MODE_MODE_OFFSET })
#define DMA_MODE_MODE_VALUE_LINEAR_MODE 0x0
#define DMA_MODE_MODE_VALUE_CIRCULAR_MODE 0x1
#define DMA_MODE_MODE_VALUE_ADDRESS_MODE 0x2

// Set the dimensionality of the DMA
#define DMA_DIM_CONFIG_REG_OFFSET 0x2c
#define DMA_DIM_CONFIG_DMA_DIM_BIT 0

// Set the padding options
#define DMA_PAD_REG_OFFSET 0x30
#define DMA_PAD_LEFT_PAD_MASK 0x3f
#define DMA_PAD_LEFT_PAD_OFFSET 0
#define DMA_PAD_LEFT_PAD_FIELD \
  ((bitfield_field32_t) { .mask = DMA_PAD_LEFT_PAD_MASK, .index = DMA_PAD_LEFT_PAD_OFFSET })
#define DMA_PAD_RIGHT_PAD_MASK 0x3f
#define DMA_PAD_RIGHT_PAD_OFFSET 6
#define DMA_PAD_RIGHT_PAD_FIELD \
  ((bitfield_field32_t) { .mask = DMA_PAD_RIGHT_PAD_MASK, .index = DMA_PAD_RIGHT_PAD_OFFSET })
#define DMA_PAD_TOP_PAD_MASK 0x3f
#define DMA_PAD_TOP_PAD_OFFSET 12
#define DMA_PAD_TOP_PAD_FIELD \
  ((bitfield_field32_t) { .mask = DMA_PAD_TOP_PAD_MASK, .index = DMA_PAD_TOP_PAD_OFFSET })
#define DMA_PAD_BOTTOM_PAD_MASK 0x3f
#define DMA_PAD_BOTTOM_PAD_OFFSET 17
#define DMA_PAD_BOTTOM_PAD_FIELD \
  ((bitfield_field32_t) { .mask = DMA_PAD_BOTTOM_PAD_MASK, .index = DMA_PAD_BOTTOM_PAD_OFFSET })

// Will trigger a every "WINDOW_SIZE" writes
#define DMA_WINDOW_SIZE_REG_OFFSET 0x34
#define DMA_WINDOW_SIZE_WINDOW_SIZE_MASK 0x1fff
#define DMA_WINDOW_SIZE_WINDOW_SIZE_OFFSET 0
#define DMA_WINDOW_SIZE_WINDOW_SIZE_FIELD \
  ((bitfield_field32_t) { .mask = DMA_WINDOW_SIZE_WINDOW_SIZE_MASK, .index = DMA_WINDOW_SIZE_WINDOW_SIZE_OFFSET })

// Number of times the end of the window was reached since the beginning.
#define DMA_WINDOW_COUNT_REG_OFFSET 0x38
#define DMA_WINDOW_COUNT_WINDOW_COUNT_MASK 0xff
#define DMA_WINDOW_COUNT_WINDOW_COUNT_OFFSET 0
#define DMA_WINDOW_COUNT_WINDOW_COUNT_FIELD \
  ((bitfield_field32_t) { .mask = DMA_WINDOW_COUNT_WINDOW_COUNT_MASK, .index = DMA_WINDOW_COUNT_WINDOW_COUNT_OFFSET })

// Interrupt Enable Register
#define DMA_INTERRUPT_EN_REG_OFFSET 0x3c
#define DMA_INTERRUPT_EN_TRANSACTION_DONE_BIT 0
#define DMA_INTERRUPT_EN_WINDOW_DONE_BIT 1

#ifdef __cplusplus
}  // extern "C"
#endif
#endif  // _DMA_REG_DEFS_
// End generated register defines for dma