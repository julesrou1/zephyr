/*
 * Copyright (c) 2022 Microchip Technology Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_GPIO_MICROCHIP_XEC_GPIO_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_GPIO_MICROCHIP_XEC_GPIO_H_

/**
 * @brief Microchip XEC GPIO bank and bit position convenience defines
 *
 * Microchip XEC documentation uses octal GPIO pin
 * numbering. These macros do not require the user to do octal arithmetic
 * to derive the pin's bit position.
 *
 * Example DT usage:
 *
 * @code{.dts}
 * gpios = <MCHP_GPIO_DECODE_176 GPIO_ACTIVE_HIGH>;
 * @endcode
 *
 * @{
 */

#define XEC_GPIO_HELPER(gpio_bank, gpio_bitpos)	gpio_bank gpio_bitpos

/* bank A */
#define MCHP_GPIO_DECODE_000 XEC_GPIO_HELPER(&gpio_000_036, 0)
#define MCHP_GPIO_DECODE_001 XEC_GPIO_HELPER(&gpio_000_036, 1)
#define MCHP_GPIO_DECODE_002 XEC_GPIO_HELPER(&gpio_000_036, 2)
#define MCHP_GPIO_DECODE_003 XEC_GPIO_HELPER(&gpio_000_036, 3)
#define MCHP_GPIO_DECODE_004 XEC_GPIO_HELPER(&gpio_000_036, 4)
#define MCHP_GPIO_DECODE_005 XEC_GPIO_HELPER(&gpio_000_036, 5)
#define MCHP_GPIO_DECODE_006 XEC_GPIO_HELPER(&gpio_000_036, 6)
#define MCHP_GPIO_DECODE_007 XEC_GPIO_HELPER(&gpio_000_036, 7)
#define MCHP_GPIO_DECODE_010 XEC_GPIO_HELPER(&gpio_000_036, 8)
#define MCHP_GPIO_DECODE_011 XEC_GPIO_HELPER(&gpio_000_036, 9)
#define MCHP_GPIO_DECODE_012 XEC_GPIO_HELPER(&gpio_000_036, 10)
#define MCHP_GPIO_DECODE_013 XEC_GPIO_HELPER(&gpio_000_036, 11)
#define MCHP_GPIO_DECODE_014 XEC_GPIO_HELPER(&gpio_000_036, 12)
#define MCHP_GPIO_DECODE_015 XEC_GPIO_HELPER(&gpio_000_036, 13)
#define MCHP_GPIO_DECODE_016 XEC_GPIO_HELPER(&gpio_000_036, 14)
#define MCHP_GPIO_DECODE_017 XEC_GPIO_HELPER(&gpio_000_036, 15)
#define MCHP_GPIO_DECODE_020 XEC_GPIO_HELPER(&gpio_000_036, 16)
#define MCHP_GPIO_DECODE_021 XEC_GPIO_HELPER(&gpio_000_036, 17)
#define MCHP_GPIO_DECODE_022 XEC_GPIO_HELPER(&gpio_000_036, 18)
#define MCHP_GPIO_DECODE_023 XEC_GPIO_HELPER(&gpio_000_036, 19)
#define MCHP_GPIO_DECODE_024 XEC_GPIO_HELPER(&gpio_000_036, 20)
#define MCHP_GPIO_DECODE_025 XEC_GPIO_HELPER(&gpio_000_036, 21)
#define MCHP_GPIO_DECODE_026 XEC_GPIO_HELPER(&gpio_000_036, 22)
#define MCHP_GPIO_DECODE_027 XEC_GPIO_HELPER(&gpio_000_036, 23)
#define MCHP_GPIO_DECODE_030 XEC_GPIO_HELPER(&gpio_000_036, 24)
#define MCHP_GPIO_DECODE_031 XEC_GPIO_HELPER(&gpio_000_036, 25)
#define MCHP_GPIO_DECODE_032 XEC_GPIO_HELPER(&gpio_000_036, 26)
#define MCHP_GPIO_DECODE_033 XEC_GPIO_HELPER(&gpio_000_036, 27)
#define MCHP_GPIO_DECODE_034 XEC_GPIO_HELPER(&gpio_000_036, 28)
#define MCHP_GPIO_DECODE_035 XEC_GPIO_HELPER(&gpio_000_036, 29)
#define MCHP_GPIO_DECODE_036 XEC_GPIO_HELPER(&gpio_000_036, 30)

/* bank B */
#define MCHP_GPIO_DECODE_040 XEC_GPIO_HELPER(&gpio_040_076, 0)
#define MCHP_GPIO_DECODE_041 XEC_GPIO_HELPER(&gpio_040_076, 1)
#define MCHP_GPIO_DECODE_042 XEC_GPIO_HELPER(&gpio_040_076, 2)
#define MCHP_GPIO_DECODE_043 XEC_GPIO_HELPER(&gpio_040_076, 3)
#define MCHP_GPIO_DECODE_044 XEC_GPIO_HELPER(&gpio_040_076, 4)
#define MCHP_GPIO_DECODE_045 XEC_GPIO_HELPER(&gpio_040_076, 5)
#define MCHP_GPIO_DECODE_046 XEC_GPIO_HELPER(&gpio_040_076, 6)
#define MCHP_GPIO_DECODE_047 XEC_GPIO_HELPER(&gpio_040_076, 7)
#define MCHP_GPIO_DECODE_050 XEC_GPIO_HELPER(&gpio_040_076, 8)
#define MCHP_GPIO_DECODE_051 XEC_GPIO_HELPER(&gpio_040_076, 9)
#define MCHP_GPIO_DECODE_052 XEC_GPIO_HELPER(&gpio_040_076, 10)
#define MCHP_GPIO_DECODE_053 XEC_GPIO_HELPER(&gpio_040_076, 11)
#define MCHP_GPIO_DECODE_054 XEC_GPIO_HELPER(&gpio_040_076, 12)
#define MCHP_GPIO_DECODE_055 XEC_GPIO_HELPER(&gpio_040_076, 13)
#define MCHP_GPIO_DECODE_056 XEC_GPIO_HELPER(&gpio_040_076, 14)
#define MCHP_GPIO_DECODE_057 XEC_GPIO_HELPER(&gpio_040_076, 15)
#define MCHP_GPIO_DECODE_060 XEC_GPIO_HELPER(&gpio_040_076, 16)
#define MCHP_GPIO_DECODE_061 XEC_GPIO_HELPER(&gpio_040_076, 17)
#define MCHP_GPIO_DECODE_062 XEC_GPIO_HELPER(&gpio_040_076, 18)
#define MCHP_GPIO_DECODE_063 XEC_GPIO_HELPER(&gpio_040_076, 19)
#define MCHP_GPIO_DECODE_064 XEC_GPIO_HELPER(&gpio_040_076, 20)
#define MCHP_GPIO_DECODE_065 XEC_GPIO_HELPER(&gpio_040_076, 21)
#define MCHP_GPIO_DECODE_066 XEC_GPIO_HELPER(&gpio_040_076, 22)
#define MCHP_GPIO_DECODE_067 XEC_GPIO_HELPER(&gpio_040_076, 23)
#define MCHP_GPIO_DECODE_070 XEC_GPIO_HELPER(&gpio_040_076, 24)
#define MCHP_GPIO_DECODE_071 XEC_GPIO_HELPER(&gpio_040_076, 25)
#define MCHP_GPIO_DECODE_072 XEC_GPIO_HELPER(&gpio_040_076, 26)
#define MCHP_GPIO_DECODE_073 XEC_GPIO_HELPER(&gpio_040_076, 27)
#define MCHP_GPIO_DECODE_074 XEC_GPIO_HELPER(&gpio_040_076, 28)
#define MCHP_GPIO_DECODE_075 XEC_GPIO_HELPER(&gpio_040_076, 29)
#define MCHP_GPIO_DECODE_076 XEC_GPIO_HELPER(&gpio_040_076, 30)

/* bank C */
#define MCHP_GPIO_DECODE_100 XEC_GPIO_HELPER(&gpio_100_136, 0)
#define MCHP_GPIO_DECODE_101 XEC_GPIO_HELPER(&gpio_100_136, 1)
#define MCHP_GPIO_DECODE_102 XEC_GPIO_HELPER(&gpio_100_136, 2)
#define MCHP_GPIO_DECODE_103 XEC_GPIO_HELPER(&gpio_100_136, 3)
#define MCHP_GPIO_DECODE_104 XEC_GPIO_HELPER(&gpio_100_136, 4)
#define MCHP_GPIO_DECODE_105 XEC_GPIO_HELPER(&gpio_100_136, 5)
#define MCHP_GPIO_DECODE_106 XEC_GPIO_HELPER(&gpio_100_136, 6)
#define MCHP_GPIO_DECODE_107 XEC_GPIO_HELPER(&gpio_100_136, 7)
#define MCHP_GPIO_DECODE_110 XEC_GPIO_HELPER(&gpio_100_136, 8)
#define MCHP_GPIO_DECODE_111 XEC_GPIO_HELPER(&gpio_100_136, 9)
#define MCHP_GPIO_DECODE_112 XEC_GPIO_HELPER(&gpio_100_136, 10)
#define MCHP_GPIO_DECODE_113 XEC_GPIO_HELPER(&gpio_100_136, 11)
#define MCHP_GPIO_DECODE_114 XEC_GPIO_HELPER(&gpio_100_136, 12)
#define MCHP_GPIO_DECODE_115 XEC_GPIO_HELPER(&gpio_100_136, 13)
#define MCHP_GPIO_DECODE_116 XEC_GPIO_HELPER(&gpio_100_136, 14)
#define MCHP_GPIO_DECODE_117 XEC_GPIO_HELPER(&gpio_100_136, 15)
#define MCHP_GPIO_DECODE_120 XEC_GPIO_HELPER(&gpio_100_136, 16)
#define MCHP_GPIO_DECODE_121 XEC_GPIO_HELPER(&gpio_100_136, 17)
#define MCHP_GPIO_DECODE_122 XEC_GPIO_HELPER(&gpio_100_136, 18)
#define MCHP_GPIO_DECODE_123 XEC_GPIO_HELPER(&gpio_100_136, 19)
#define MCHP_GPIO_DECODE_124 XEC_GPIO_HELPER(&gpio_100_136, 20)
#define MCHP_GPIO_DECODE_125 XEC_GPIO_HELPER(&gpio_100_136, 21)
#define MCHP_GPIO_DECODE_126 XEC_GPIO_HELPER(&gpio_100_136, 22)
#define MCHP_GPIO_DECODE_127 XEC_GPIO_HELPER(&gpio_100_136, 23)
#define MCHP_GPIO_DECODE_130 XEC_GPIO_HELPER(&gpio_100_136, 24)
#define MCHP_GPIO_DECODE_131 XEC_GPIO_HELPER(&gpio_100_136, 25)
#define MCHP_GPIO_DECODE_132 XEC_GPIO_HELPER(&gpio_100_136, 26)
#define MCHP_GPIO_DECODE_133 XEC_GPIO_HELPER(&gpio_100_136, 27)
#define MCHP_GPIO_DECODE_134 XEC_GPIO_HELPER(&gpio_100_136, 28)
#define MCHP_GPIO_DECODE_135 XEC_GPIO_HELPER(&gpio_100_136, 29)
#define MCHP_GPIO_DECODE_136 XEC_GPIO_HELPER(&gpio_100_136, 30)

/* bank D */
#define MCHP_GPIO_DECODE_140 XEC_GPIO_HELPER(&gpio_140_176, 0)
#define MCHP_GPIO_DECODE_141 XEC_GPIO_HELPER(&gpio_140_176, 1)
#define MCHP_GPIO_DECODE_142 XEC_GPIO_HELPER(&gpio_140_176, 2)
#define MCHP_GPIO_DECODE_143 XEC_GPIO_HELPER(&gpio_140_176, 3)
#define MCHP_GPIO_DECODE_144 XEC_GPIO_HELPER(&gpio_140_176, 4)
#define MCHP_GPIO_DECODE_145 XEC_GPIO_HELPER(&gpio_140_176, 5)
#define MCHP_GPIO_DECODE_146 XEC_GPIO_HELPER(&gpio_140_176, 6)
#define MCHP_GPIO_DECODE_147 XEC_GPIO_HELPER(&gpio_140_176, 7)
#define MCHP_GPIO_DECODE_150 XEC_GPIO_HELPER(&gpio_140_176, 8)
#define MCHP_GPIO_DECODE_151 XEC_GPIO_HELPER(&gpio_140_176, 9)
#define MCHP_GPIO_DECODE_152 XEC_GPIO_HELPER(&gpio_140_176, 10)
#define MCHP_GPIO_DECODE_153 XEC_GPIO_HELPER(&gpio_140_176, 11)
#define MCHP_GPIO_DECODE_154 XEC_GPIO_HELPER(&gpio_140_176, 12)
#define MCHP_GPIO_DECODE_155 XEC_GPIO_HELPER(&gpio_140_176, 13)
#define MCHP_GPIO_DECODE_156 XEC_GPIO_HELPER(&gpio_140_176, 14)
#define MCHP_GPIO_DECODE_157 XEC_GPIO_HELPER(&gpio_140_176, 15)
#define MCHP_GPIO_DECODE_160 XEC_GPIO_HELPER(&gpio_140_176, 16)
#define MCHP_GPIO_DECODE_161 XEC_GPIO_HELPER(&gpio_140_176, 17)
#define MCHP_GPIO_DECODE_162 XEC_GPIO_HELPER(&gpio_140_176, 18)
#define MCHP_GPIO_DECODE_163 XEC_GPIO_HELPER(&gpio_140_176, 19)
#define MCHP_GPIO_DECODE_164 XEC_GPIO_HELPER(&gpio_140_176, 20)
#define MCHP_GPIO_DECODE_165 XEC_GPIO_HELPER(&gpio_140_176, 21)
#define MCHP_GPIO_DECODE_166 XEC_GPIO_HELPER(&gpio_140_176, 22)
#define MCHP_GPIO_DECODE_167 XEC_GPIO_HELPER(&gpio_140_176, 23)
#define MCHP_GPIO_DECODE_170 XEC_GPIO_HELPER(&gpio_140_176, 24)
#define MCHP_GPIO_DECODE_171 XEC_GPIO_HELPER(&gpio_140_176, 25)
#define MCHP_GPIO_DECODE_172 XEC_GPIO_HELPER(&gpio_140_176, 26)
#define MCHP_GPIO_DECODE_173 XEC_GPIO_HELPER(&gpio_140_176, 27)
#define MCHP_GPIO_DECODE_174 XEC_GPIO_HELPER(&gpio_140_176, 28)
#define MCHP_GPIO_DECODE_175 XEC_GPIO_HELPER(&gpio_140_176, 29)
#define MCHP_GPIO_DECODE_176 XEC_GPIO_HELPER(&gpio_140_176, 30)

/* bank E */
#define MCHP_GPIO_DECODE_200 XEC_GPIO_HELPER(&gpio_200_236, 0)
#define MCHP_GPIO_DECODE_201 XEC_GPIO_HELPER(&gpio_200_236, 1)
#define MCHP_GPIO_DECODE_202 XEC_GPIO_HELPER(&gpio_200_236, 2)
#define MCHP_GPIO_DECODE_203 XEC_GPIO_HELPER(&gpio_200_236, 3)
#define MCHP_GPIO_DECODE_204 XEC_GPIO_HELPER(&gpio_200_236, 4)
#define MCHP_GPIO_DECODE_205 XEC_GPIO_HELPER(&gpio_200_236, 5)
#define MCHP_GPIO_DECODE_206 XEC_GPIO_HELPER(&gpio_200_236, 6)
#define MCHP_GPIO_DECODE_207 XEC_GPIO_HELPER(&gpio_200_236, 7)
#define MCHP_GPIO_DECODE_210 XEC_GPIO_HELPER(&gpio_200_236, 8)
#define MCHP_GPIO_DECODE_211 XEC_GPIO_HELPER(&gpio_200_236, 9)
#define MCHP_GPIO_DECODE_212 XEC_GPIO_HELPER(&gpio_200_236, 10)
#define MCHP_GPIO_DECODE_213 XEC_GPIO_HELPER(&gpio_200_236, 11)
#define MCHP_GPIO_DECODE_214 XEC_GPIO_HELPER(&gpio_200_236, 12)
#define MCHP_GPIO_DECODE_215 XEC_GPIO_HELPER(&gpio_200_236, 13)
#define MCHP_GPIO_DECODE_216 XEC_GPIO_HELPER(&gpio_200_236, 14)
#define MCHP_GPIO_DECODE_217 XEC_GPIO_HELPER(&gpio_200_236, 15)
#define MCHP_GPIO_DECODE_220 XEC_GPIO_HELPER(&gpio_200_236, 16)
#define MCHP_GPIO_DECODE_221 XEC_GPIO_HELPER(&gpio_200_236, 17)
#define MCHP_GPIO_DECODE_222 XEC_GPIO_HELPER(&gpio_200_236, 18)
#define MCHP_GPIO_DECODE_223 XEC_GPIO_HELPER(&gpio_200_236, 19)
#define MCHP_GPIO_DECODE_224 XEC_GPIO_HELPER(&gpio_200_236, 20)
#define MCHP_GPIO_DECODE_225 XEC_GPIO_HELPER(&gpio_200_236, 21)
#define MCHP_GPIO_DECODE_226 XEC_GPIO_HELPER(&gpio_200_236, 22)
#define MCHP_GPIO_DECODE_227 XEC_GPIO_HELPER(&gpio_200_236, 23)
#define MCHP_GPIO_DECODE_230 XEC_GPIO_HELPER(&gpio_200_236, 24)
#define MCHP_GPIO_DECODE_231 XEC_GPIO_HELPER(&gpio_200_236, 25)
#define MCHP_GPIO_DECODE_232 XEC_GPIO_HELPER(&gpio_200_236, 26)
#define MCHP_GPIO_DECODE_233 XEC_GPIO_HELPER(&gpio_200_236, 27)
#define MCHP_GPIO_DECODE_234 XEC_GPIO_HELPER(&gpio_200_236, 28)
#define MCHP_GPIO_DECODE_235 XEC_GPIO_HELPER(&gpio_200_236, 29)
#define MCHP_GPIO_DECODE_236 XEC_GPIO_HELPER(&gpio_200_236, 30)

/* bank F */
#define MCHP_GPIO_DECODE_240 XEC_GPIO_HELPER(&gpio_240_276, 0)
#define MCHP_GPIO_DECODE_241 XEC_GPIO_HELPER(&gpio_240_276, 1)
#define MCHP_GPIO_DECODE_242 XEC_GPIO_HELPER(&gpio_240_276, 2)
#define MCHP_GPIO_DECODE_243 XEC_GPIO_HELPER(&gpio_240_276, 3)
#define MCHP_GPIO_DECODE_244 XEC_GPIO_HELPER(&gpio_240_276, 4)
#define MCHP_GPIO_DECODE_245 XEC_GPIO_HELPER(&gpio_240_276, 5)
#define MCHP_GPIO_DECODE_246 XEC_GPIO_HELPER(&gpio_240_276, 6)
#define MCHP_GPIO_DECODE_247 XEC_GPIO_HELPER(&gpio_240_276, 7)
#define MCHP_GPIO_DECODE_250 XEC_GPIO_HELPER(&gpio_240_276, 8)
#define MCHP_GPIO_DECODE_251 XEC_GPIO_HELPER(&gpio_240_276, 9)
#define MCHP_GPIO_DECODE_252 XEC_GPIO_HELPER(&gpio_240_276, 10)
#define MCHP_GPIO_DECODE_253 XEC_GPIO_HELPER(&gpio_240_276, 11)
#define MCHP_GPIO_DECODE_254 XEC_GPIO_HELPER(&gpio_240_276, 12)
#define MCHP_GPIO_DECODE_255 XEC_GPIO_HELPER(&gpio_240_276, 13)
#define MCHP_GPIO_DECODE_256 XEC_GPIO_HELPER(&gpio_240_276, 14)
#define MCHP_GPIO_DECODE_257 XEC_GPIO_HELPER(&gpio_240_276, 15)
#define MCHP_GPIO_DECODE_260 XEC_GPIO_HELPER(&gpio_240_276, 16)
#define MCHP_GPIO_DECODE_261 XEC_GPIO_HELPER(&gpio_240_276, 17)
#define MCHP_GPIO_DECODE_262 XEC_GPIO_HELPER(&gpio_240_276, 18)
#define MCHP_GPIO_DECODE_263 XEC_GPIO_HELPER(&gpio_240_276, 19)
#define MCHP_GPIO_DECODE_264 XEC_GPIO_HELPER(&gpio_240_276, 20)
#define MCHP_GPIO_DECODE_265 XEC_GPIO_HELPER(&gpio_240_276, 21)
#define MCHP_GPIO_DECODE_266 XEC_GPIO_HELPER(&gpio_240_276, 22)
#define MCHP_GPIO_DECODE_267 XEC_GPIO_HELPER(&gpio_240_276, 23)
#define MCHP_GPIO_DECODE_270 XEC_GPIO_HELPER(&gpio_240_276, 24)
#define MCHP_GPIO_DECODE_271 XEC_GPIO_HELPER(&gpio_240_276, 25)
#define MCHP_GPIO_DECODE_272 XEC_GPIO_HELPER(&gpio_240_276, 26)
#define MCHP_GPIO_DECODE_273 XEC_GPIO_HELPER(&gpio_240_276, 27)
#define MCHP_GPIO_DECODE_274 XEC_GPIO_HELPER(&gpio_240_276, 28)
#define MCHP_GPIO_DECODE_275 XEC_GPIO_HELPER(&gpio_240_276, 29)
#define MCHP_GPIO_DECODE_276 XEC_GPIO_HELPER(&gpio_240_276, 30)

/** @} */

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_GPIO_MICROCHIP_XEC_GPIO_H_ */
