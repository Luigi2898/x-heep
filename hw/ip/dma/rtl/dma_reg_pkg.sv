// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Register Package auto-generated by `reggen` containing data structure

package dma_reg_pkg;

  // Address widths within the block
  parameter int BlockAw = 6;

  ////////////////////////////
  // Typedefs for registers //
  ////////////////////////////

  typedef struct packed {logic [31:0] q;} dma_reg2hw_src_ptr_reg_t;

  typedef struct packed {logic [31:0] q;} dma_reg2hw_dst_ptr_reg_t;

  typedef struct packed {logic [31:0] q;} dma_reg2hw_addr_ptr_reg_t;

  typedef struct packed {
    logic [15:0] q;
    logic        qe;
  } dma_reg2hw_size_tr_d1_reg_t;

  typedef struct packed {
    logic [15:0] q;
    logic        qe;
  } dma_reg2hw_size_tr_d2_reg_t;

  typedef struct packed {
    struct packed {
      logic q;
      logic re;
    } ready;
    struct packed {
      logic q;
      logic re;
    } window_done;
  } dma_reg2hw_status_reg_t;

  typedef struct packed {
    struct packed {logic [5:0] q;} src_ptr_inc_d1;
    struct packed {logic [22:0] q;} src_ptr_inc_d2;
  } dma_reg2hw_src_ptr_inc_reg_t;

  typedef struct packed {
    struct packed {logic [5:0] q;} dst_ptr_inc_d1;
    struct packed {logic [22:0] q;} dst_ptr_inc_d2;
  } dma_reg2hw_dst_ptr_inc_reg_t;

  typedef struct packed {
    struct packed {logic [15:0] q;} rx_trigger_slot;
    struct packed {logic [15:0] q;} tx_trigger_slot;
  } dma_reg2hw_slot_reg_t;

  typedef struct packed {logic [1:0] q;} dma_reg2hw_data_type_reg_t;

  typedef struct packed {logic [1:0] q;} dma_reg2hw_mode_reg_t;

  typedef struct packed {logic q;} dma_reg2hw_dim_config_reg_t;

  typedef struct packed {
    struct packed {
      logic [5:0] q;
      logic       qe;
    } left_pad;
    struct packed {
      logic [5:0] q;
      logic       qe;
    } right_pad;
    struct packed {
      logic [5:0] q;
      logic       qe;
    } top_pad;
    struct packed {
      logic [5:0] q;
      logic       qe;
    } bottom_pad;
  } dma_reg2hw_pad_reg_t;

  typedef struct packed {logic [12:0] q;} dma_reg2hw_window_size_reg_t;

  typedef struct packed {logic [7:0] q;} dma_reg2hw_window_count_reg_t;

  typedef struct packed {
    struct packed {logic q;} transaction_done;
    struct packed {logic q;} window_done;
  } dma_reg2hw_interrupt_en_reg_t;

  typedef struct packed {
    struct packed {logic d;} ready;
    struct packed {logic d;} window_done;
  } dma_hw2reg_status_reg_t;

  typedef struct packed {
    logic [7:0] d;
    logic       de;
  } dma_hw2reg_window_count_reg_t;

  // Register -> HW type
  typedef struct packed {
    dma_reg2hw_src_ptr_reg_t src_ptr;  // [279:248]
    dma_reg2hw_dst_ptr_reg_t dst_ptr;  // [247:216]
    dma_reg2hw_addr_ptr_reg_t addr_ptr;  // [215:184]
    dma_reg2hw_size_tr_d1_reg_t size_tr_d1;  // [183:167]
    dma_reg2hw_size_tr_d2_reg_t size_tr_d2;  // [166:150]
    dma_reg2hw_status_reg_t status;  // [149:146]
    dma_reg2hw_src_ptr_inc_reg_t src_ptr_inc;  // [145:117]
    dma_reg2hw_dst_ptr_inc_reg_t dst_ptr_inc;  // [116:88]
    dma_reg2hw_slot_reg_t slot;  // [87:56]
    dma_reg2hw_data_type_reg_t data_type;  // [55:54]
    dma_reg2hw_mode_reg_t mode;  // [53:52]
    dma_reg2hw_dim_config_reg_t dim_config;  // [51:51]
    dma_reg2hw_pad_reg_t pad;  // [50:23]
    dma_reg2hw_window_size_reg_t window_size;  // [22:10]
    dma_reg2hw_window_count_reg_t window_count;  // [9:2]
    dma_reg2hw_interrupt_en_reg_t interrupt_en;  // [1:0]
  } dma_reg2hw_t;

  // HW -> register type
  typedef struct packed {
    dma_hw2reg_status_reg_t status;  // [10:9]
    dma_hw2reg_window_count_reg_t window_count;  // [8:0]
  } dma_hw2reg_t;

  // Register offsets
  parameter logic [BlockAw-1:0] DMA_SRC_PTR_OFFSET = 6'h0;
  parameter logic [BlockAw-1:0] DMA_DST_PTR_OFFSET = 6'h4;
  parameter logic [BlockAw-1:0] DMA_ADDR_PTR_OFFSET = 6'h8;
  parameter logic [BlockAw-1:0] DMA_SIZE_TR_D1_OFFSET = 6'hc;
  parameter logic [BlockAw-1:0] DMA_SIZE_TR_D2_OFFSET = 6'h10;
  parameter logic [BlockAw-1:0] DMA_STATUS_OFFSET = 6'h14;
  parameter logic [BlockAw-1:0] DMA_SRC_PTR_INC_OFFSET = 6'h18;
  parameter logic [BlockAw-1:0] DMA_DST_PTR_INC_OFFSET = 6'h1c;
  parameter logic [BlockAw-1:0] DMA_SLOT_OFFSET = 6'h20;
  parameter logic [BlockAw-1:0] DMA_DATA_TYPE_OFFSET = 6'h24;
  parameter logic [BlockAw-1:0] DMA_MODE_OFFSET = 6'h28;
  parameter logic [BlockAw-1:0] DMA_DIM_CONFIG_OFFSET = 6'h2c;
  parameter logic [BlockAw-1:0] DMA_PAD_OFFSET = 6'h30;
  parameter logic [BlockAw-1:0] DMA_WINDOW_SIZE_OFFSET = 6'h34;
  parameter logic [BlockAw-1:0] DMA_WINDOW_COUNT_OFFSET = 6'h38;
  parameter logic [BlockAw-1:0] DMA_INTERRUPT_EN_OFFSET = 6'h3c;

  // Reset values for hwext registers and their fields
  parameter logic [1:0] DMA_STATUS_RESVAL = 2'h1;
  parameter logic [0:0] DMA_STATUS_READY_RESVAL = 1'h1;
  parameter logic [0:0] DMA_STATUS_WINDOW_DONE_RESVAL = 1'h0;

  // Register index
  typedef enum int {
    DMA_SRC_PTR,
    DMA_DST_PTR,
    DMA_ADDR_PTR,
    DMA_SIZE_TR_D1,
    DMA_SIZE_TR_D2,
    DMA_STATUS,
    DMA_SRC_PTR_INC,
    DMA_DST_PTR_INC,
    DMA_SLOT,
    DMA_DATA_TYPE,
    DMA_MODE,
    DMA_DIM_CONFIG,
    DMA_PAD,
    DMA_WINDOW_SIZE,
    DMA_WINDOW_COUNT,
    DMA_INTERRUPT_EN
  } dma_id_e;

  // Register width information to check illegal writes
  parameter logic [3:0] DMA_PERMIT[16] = '{
      4'b1111,  // index[ 0] DMA_SRC_PTR
      4'b1111,  // index[ 1] DMA_DST_PTR
      4'b1111,  // index[ 2] DMA_ADDR_PTR
      4'b0011,  // index[ 3] DMA_SIZE_TR_D1
      4'b0011,  // index[ 4] DMA_SIZE_TR_D2
      4'b0001,  // index[ 5] DMA_STATUS
      4'b1111,  // index[ 6] DMA_SRC_PTR_INC
      4'b1111,  // index[ 7] DMA_DST_PTR_INC
      4'b1111,  // index[ 8] DMA_SLOT
      4'b0001,  // index[ 9] DMA_DATA_TYPE
      4'b0001,  // index[10] DMA_MODE
      4'b0001,  // index[11] DMA_DIM_CONFIG
      4'b0111,  // index[12] DMA_PAD
      4'b0011,  // index[13] DMA_WINDOW_SIZE
      4'b0001,  // index[14] DMA_WINDOW_COUNT
      4'b0001  // index[15] DMA_INTERRUPT_EN
  };

endpackage

