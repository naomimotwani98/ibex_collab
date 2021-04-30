// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// SECDED Encoder generated by
// util/design/secded_gen.py -m 6 -k 22 -s 1592631616 -c hsiao

module prim_secded_28_22_enc (
  input        [21:0] in,
  output logic [27:0] out
);

  always_comb begin : p_encode
    out = 28'(in);
    out[22] = ^(out & 28'h03003FF);
    out[23] = ^(out & 28'h010FC0F);
    out[24] = ^(out & 28'h0371C71);
    out[25] = ^(out & 28'h03B6592);
    out[26] = ^(out & 28'h03DAAA4);
    out[27] = ^(out & 28'h02ED348);
  end

endmodule : prim_secded_28_22_enc
