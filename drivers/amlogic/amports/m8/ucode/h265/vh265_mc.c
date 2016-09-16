/*
 * AMLOGIC Audio/Video streaming port driver.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the named License,
 * or any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
 *
 * Author:  Tim Yao <timyao@amlogic.com>
 *
 */

#include <linux/types.h>

//#undef SEND_PARAM_WITH_REG
const u32 h265_ucode_v = 0xd216c3a6; /* use ucode commit id */
const u32 vh265_mc[] __attribute__((aligned(8))) = {
	0x6810001,0x6800000,0xd000001,0x7400040,0xc000900,0x0000000,0x6bffe40,0x7c00000,
	0x6030400,0x0400000,0x800c0ff,0xc031700,0x0000000,0x0000000,0x0000000,0x0000000,
	0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0xc7ffd80,0x0000000,0x0000000,
	0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,
	0xc7a4fc0,0x0000000,0xc79fcc0,0x6412108,0xc780900,0x0000000,0xcc00000,0x0400000,
	0x800c000,0x8002515,0x8002608,0x6bfbb80,0x6ffbfc0,0x6070500,0x6070600,0x6070700,
	0x6803fc0,0x7c00140,0x7c007c0,0x7c01600,0x640d000,0x7c03580,0x640d200,0x7c03500,
	0x640c108,0x6035108,0x6800408,0x6035208,0x6a04008,0x6035008,0x6435008,0x580f208,
	0xbef8048,0x0000000,0x6435308,0x900c208,0xa6f8008,0x0000000,0xcc00000,0x0000000,
	0x6bfff88,0x6030408,0x0400000,0x640c008,0xa618808,0x0000000,0xc02e580,0x0000000,
	0xc79ecc0,0x800c0ff,0xaa0c048,0xc781c80,0x0000000,0x6410c08,0x8010e90,0x9326208,
	0xaa0c808,0xc79ea80,0x800c0fe,0x7803548,0x9808008,0x7c03548,0x6410c08,0x8010e90,
	0x9384288,0x9223248,0x7c00189,0x9201248,0x7c001c9,0x8010e90,0x7800148,0xa805288,
	0x7c0010a,0xaa0ffc8,0xc026740,0x5407308,0x780010a,0x7c0014a,0x6410c08,0x8010e88,
	0x9305248,0x7c00209,0x6410c08,0x8010e90,0x9210248,0x7c00249,0x6410c08,0x8010e90,
	0x9210248,0x7c00289,0x6410c08,0x8010e84,0x9384248,0x7c04f49,0x8010e90,0x8010e90,
	0x8010e8c,0x6410c08,0x8010e88,0x9308248,0x7c002c9,0x780018b,0xaa3800b,0x0000000,
	0x6410c0a,0x8010e90,0xaa2800b,0x93e124a,0xaa08009,0xc780000,0x93c124a,0xaa08009,
	0xc780000,0x540228a,0xc7ffe00,0x44012cb,0x6410c08,0x8010e81,0x93e1248,0x780018b,
	0xa60c009,0x680000a,0x780018a,0xac0a2ca,0x0000000,0xc01da80,0x6800309,0xc01da00,
	0x6800409,0xc01d980,0x6800509,0xc7ffe00,0x400128a,0x8010e86,0x6806008,0x6010e08,
	0x6410f08,0xbefc0c8,0x9118208,0xaa08008,0xc780000,0x6410c08,0x8010e81,0x93e1248,
	0xaa38009,0x8010e90,0x8010e90,0x8010e90,0x8010e90,0x6410c08,0x8010e81,0x93e1248,
	0xaa0c009,0xc01d380,0x6800049,0xc01d300,0x6800049,0xaa04008,0x8010e81,0x7800148,
	0xaa0ffc8,0xc025180,0x5407308,0xc79d000,0x800c0ff,0xaa0c088,0xc78bd40,0x0000000,
	0x6410c08,0x8010e90,0x9326208,0xaa0c848,0xc79cdc0,0x800c0fe,0x7803548,0x9808048,
	0x7c03548,0x6410c08,0x8010e88,0x9384288,0x7c0060a,0x9323248,0x7c00649,0x9301248,
	0x7c00689,0x7800148,0xa808288,0x7c0010a,0xc024ac0,0x5407308,0x780010a,0x7c0014a,
	0xc025640,0x540730a,0x6410c08,0x8010e88,0x9305248,0x7c006c9,0x6410c08,0x8010e90,
	0x9210248,0x7c00709,0x6410c08,0x8010e90,0x9210248,0x7c00749,0x6410c08,0x8010e84,
	0x8010e90,0x8010e90,0x8010e8c,0x6410c08,0x8010e88,0x9308248,0x7c00789,0x780064b,
	0xaa3800b,0x0000000,0x6410c0a,0x8010e90,0xaa2800b,0x93e124a,0xaa08009,0xc780000,
	0x93c124a,0xaa08009,0xc780000,0x540228a,0xc7ffe00,0x44012cb,0xc01c040,0x6800049,
	0x78007c9,0xa805209,0x7c00108,0xaa0ffc9,0xc024500,0x5407309,0x7800108,0x7c007c8,
	0xc01bdc0,0x6800809,0xc01bd40,0x6800849,0xc01bcc0,0x6800889,0x7800848,0x7800889,
	0x9610209,0x6012308,0x6410c08,0x8010e81,0x93e1248,0xaa24009,0xc01ba40,0x6800049,
	0xc01b9c0,0x6800049,0xc01b940,0x6800049,0xc01b8c0,0x6800049,0xc01b840,0x68008c9,
	0xc01b7c0,0x6800909,0xc01b740,0x6800949,0x6410c08,0x8010e81,0x93e1248,0x780064b,
	0xa60c009,0x680000a,0x780064a,0xac0a2ca,0x0000000,0xc01b480,0x6800989,0xc01b400,
	0x6800a89,0xc01b380,0x6800b89,0xc7ffe00,0x400128a,0xc01b280,0x6800c89,0x7800c89,
	0x7c00d09,0xc01b180,0x6800cc9,0x7800c89,0x7800cc8,0x2009209,0x7c00d49,0x7800d48,
	0xa6300c8,0x7800849,0x403f249,0x5806249,0x7c00e09,0x7800889,0x403f249,0x5806249,
	0x7c00e49,0x8040640,0xc780900,0x6823de0,0xa630088,0x7800849,0x401f249,0x5805249,
	0x7c00e09,0x7800889,0x401f249,0x5805249,0x7c00e49,0x8040620,0xc780600,0x6824360,
	0xa630048,0x7800849,0x400f249,0x5804249,0x7c00e09,0x7800889,0x400f249,0x5804249,
	0x7c00e49,0x8040610,0xc780300,0x6824ba0,0x7800849,0x4007249,0x5803249,0x7c00e09,
	0x7800889,0x4007249,0x5803249,0x7c00e49,0x8040608,0x68256e0,0x7800e08,0x7800e49,
	0xe000248,0x0000000,0x0000000,0x6800009,0xf000200,0x4401208,0xaa10008,0x5801208,
	0xc7fff80,0x4001249,0x7c01449,0x7800849,0x780088a,0x960f24a,0x6040209,0x7800e09,
	0x7800e4a,0x960c24a,0x6040309,0x8040400,0xc019ec0,0x6800049,0x7800049,0x7c00d89,
	0xc019dc0,0x6800089,0x7800049,0x7800088,0x2009209,0x7c00dc9,0xc019c40,0x6800ec9,
	0xc019bc0,0x6800f09,0x6410c08,0x8010e81,0x93e1248,0xaa38009,0x7c00f49,0x6410c08,
	0x8010e81,0x93e1248,0xaa0c009,0xc001a80,0x0000000,0x78007c8,0xaa0c008,0x68f000c,
	0x69f000c,0xc0237c0,0x0000000,0x6410c08,0x8010e83,0x93e1248,0x7c00f89,0x93c1248,
	0x7c00fc9,0x93a1248,0xaa58009,0x6800009,0x6410c08,0x8010e88,0x9384248,0x4001249,
	0x7c01049,0x9304248,0x4001249,0x7c01089,0xc0192c0,0x68010c9,0xc019240,0x6801109,
	0x78010c9,0x2008248,0x7c01108,0x6410c08,0x8010e81,0x93e1248,0x7c01149,0x6800049,
	0x7c01009,0xc018f80,0x6801189,0x680000e,0x780118f,0x44013cf,0xaa1000f,0x58013cf,
	0xc7fff80,0x400138e,0x7c011ce,0x780118f,0x680000e,0xb4143ce,0x0000000,0x480f20e,
	0x5404208,0x680800d,0x200d20d,0xc002940,0x0000000,0x480f20e,0xaa1c3c8,0x0000000,
	0x400120e,0xb4043c8,0x0000000,0xc780100,0x0000000,0xc0049c0,0x0000000,0xc7ffb80,
	0x400138e,0x6410c08,0x8010e81,0x93e1248,0x7c01209,0xaa28009,0xc018640,0x6801249,
	0xaa1c008,0x6410c08,0x8010e89,0x9308248,0x92e1248,0xc7ffec0,0x4401208,0x6410c08,
	0x8010e83,0x93e1248,0x7c01289,0x93c1248,0x7c012c9,0x93a1248,0x6800008,0x7c014c8,
	0x7c01508,0x7c01548,0x7c01588,0xaa0c009,0xc004b80,0x0000000,0x8010e81,0x78007c8,
	0xaa0ffc8,0xc0205c0,0x5407308,0xc797e00,0x800c0ff,0x68c8408,0x6c41508,0x6070508,
	0x6070608,0x6070708,0x680000b,0x680000a,0x6410c08,0x8010e81,0x93e1248,0xaa08009,
	0xc780f00,0xc017b80,0x6800049,0xaa140cb,0x400e3ca,0xba0c0ca,0x680038f,0x68003cf,
	0xa60c00b,0xc780180,0x647050d,0xa60c04b,0xc7800c0,0x647060d,0x647070d,0xaa38008,
	0x400038f,0xaa300cb,0x680000e,0x240f20a,0xaa2410f,0x920438d,0xaa1c0cf,0x918438d,
	0xaa1408f,0x910438d,0xaa0c04f,0x908438d,0x900438d,0xa61c0cb,0xa60c00a,0xc7800c0,
	0x970434e,0x978434e,0xc780ec0,0x607070d,0xaa1c00a,0xaa2004a,0xaa2408a,0xaa280ca,
	0xaa2c10a,0xc7802c0,0x968434e,0xc780240,0x940434e,0xc7801c0,0x948434e,0xc780140,
	0x950434e,0xc7800c0,0x958434e,0x960434e,0xaa1000b,0xaa1404b,0xc7809c0,0x607070d,
	0xc780940,0x607050d,0xc7808c0,0x607060d,0xba2c08b,0x680020c,0xc016e00,0x6800049,
	0x4008308,0xaa0c08b,0x680f808,0x680f988,0x2008288,0x6070208,0x607040c,0xaa1c00b,
	0x680e008,0xaa1404b,0x6800008,0xaa0c08b,0x6806008,0x680c008,0x680040e,0xaa1000b,
	0x540424a,0x680100e,0x540624a,0x2008248,0x6070208,0x680004d,0xc016800,0x6800049,
	0x200c20c,0x48ff30c,0x607040c,0xb8fb38d,0x400134d,0xba0c0cb,0x6800149,0x6800049,
	0xb40324a,0xc7fe6c0,0x400128a,0xb60c0cb,0xc7fe5c0,0x40012cb,0xcc00000,0x0000000,
	0xaa1400e,0x6800009,0x6410c08,0x8010e81,0x93e1248,0xa608009,0xc781540,0x7801189,
	0xa40624e,0x440144e,0xc015f40,0x6800049,0xc002500,0x2411211,0x480f451,0x5404451,
	0x6808008,0x2011211,0x6800010,0x6800012,0x6410c08,0x8010e81,0x93e1288,0xc015c00,
	0x6800049,0xaa1000a,0x40014c8,0x6800009,0x24134c9,0xb60c412,0x6a0000b,0x700044b,
	0x4001451,0x4001492,0x200c2d3,0x91e12cb,0x900e30c,0x6410c08,0x8010e81,0x93e1288,
	0x95c130a,0xa62000a,0x6410c08,0x8010e81,0x93e1288,0xa61000a,0xa62400b,0xc7ffb80,
	0x0000000,0x740034c,0x400134d,0x4001410,0xa60c00b,0xc7ffa00,0x0000000,0xb60c410,
	0x6a00008,0x7400348,0xae08050,0xc780780,0x440134d,0x7000351,0x900e451,0x91a1491,
	0x6900013,0xaa0c012,0x2012453,0x2412453,0x680004c,0xb41240c,0x241130d,0x7000451,
	0x900e451,0x91a12d1,0x6900013,0xaa0c00b,0x200b453,0x240b453,0xb4072d2,0x241130d,
	0x400048b,0x700044b,0x7000353,0x740034b,0x7400453,0xc7ffc00,0x400130c,0xc7ff8c0,
	0x4401410,0xcc00000,0x0000000,0xc014b00,0x6800049,0xc014a80,0x6800089,0x6800010,
	0x680000a,0x680000b,0x780004c,0xb41130b,0xc0148c0,0x68000c9,0x240a20a,0x440128a,
	0x6410c08,0x8010e81,0x93e1248,0x900e20a,0x95c1209,0x7400348,0x400134d,0x4001410,
	0xbacc410,0x40012cb,0xcc00000,0x0000000,0x680000a,0x680000b,0x780008c,0xb41130b,
	0xc0143c0,0x68000c9,0x200a20a,0x400128a,0x6410c08,0x8010e81,0x93e1248,0x900e20a,
	0x95c1209,0x7400348,0x400134d,0x4001410,0xbacc410,0x40012cb,0xcc00000,0x0000000,
	0x6a00008,0x7400348,0xcc00000,0x0000000,0x580424e,0x7c01489,0x5409249,0x640c208,
	0x2008248,0x6035108,0x6808008,0x6035208,0x6a08008,0x6035008,0x6435008,0x580f208,
	0xbef8048,0x0000000,0x6435308,0x900c208,0xa6f8008,0x0000000,0xcc00000,0x0000000,
	0x5804251,0x7801488,0xa80e209,0x7c01489,0x5409249,0x640c208,0x2008248,0x6035108,
	0x6808008,0x6035208,0x6b08008,0x6035008,0x6435008,0x580f208,0xbef8048,0x0000000,
	0xcc00000,0x0000000,0x6410c08,0x8010e81,0x93e1248,0xaa34009,0x0000000,0x6410c08,
	0x8010e88,0x9308248,0x7c01309,0xa61ffc9,0x6410c08,0x8010e90,0x9210248,0x6410c08,
	0x8010e90,0x9210248,0x6410c08,0x8010e81,0x93e1248,0xaa0c009,0x93c1248,0x8010e81,
	0x6410c08,0x8010e81,0x93e1248,0xaa24009,0x6410c08,0x8010e85,0x9361248,0xaa14009,
	0x0000000,0x8010e88,0x0000000,0x8010e90,0x6410c08,0x8010e81,0x93e1248,0xaa14009,
	0xc012bc0,0x6800089,0xc012b40,0x6800089,0x6410c08,0x8010e84,0x93e1248,0x93c1248,
	0x93a1248,0x7c015c9,0x9381248,0xaa38009,0x6410c08,0x9118208,0xa60c008,0xcc00000,
	0x0000000,0xc012780,0x6801349,0xc012700,0x6801389,0xc012680,0x68013c9,0xc012600,
	0x6801409,0x6410c08,0x8010e81,0x93e1248,0xaa10009,0x6410c08,0x9018208,0xa608008,
	0xc7807c0,0x6410c08,0x8010e90,0x9210248,0x7c014c9,0x6410c08,0x8010e90,0x9210248,
	0x7c01509,0x6410c08,0x8010e90,0x9210248,0x7c01549,0x6410c08,0x8010e90,0x9210248,
	0x7c01589,0x6410c08,0x8010e81,0x93e1248,0xaa10009,0xc011e80,0x6800049,0x4001208,
	0x6410c08,0x8010e81,0x93e1248,0xaa10009,0x680004a,0xc000100,0x780064b,0xcc00000,
	0x0000000,0xa60c00a,0xc7807c0,0x0000000,0x6410c08,0x8010e82,0x93c2248,0xaaec009,
	0x6410c08,0x8010e81,0x93e1308,0xaa2400c,0x6410c08,0x8010e88,0x9308248,0x6410c08,
	0x8010e8b,0x9365248,0x9341248,0x92a5248,0x6410c08,0x8010e88,0x9384248,0x9304248,
	0xaa1000c,0x6410c08,0x8010e84,0x9384248,0x6410c08,0x8010e8f,0x9365248,0x92c5248,
	0x9225248,0xcc00000,0x0000000,0xaa0c0c8,0xc783180,0x0000000,0x6410c08,0x8010e90,
	0x9326208,0xaa0c888,0xc791040,0x800c0fe,0x7803548,0x9808088,0x7c03548,0xc011000,
	0x6800049,0x7801609,0xa805209,0x7c00108,0xaa0ffc9,0xc01a580,0x5407309,0x7800108,
	0x7c01608,0xc010d80,0x6801649,0x78007ca,0xa806288,0x7c00108,0x780010a,0x7c007ca,
	0xc019d80,0x540730a,0x780060a,0x7800148,0xa804288,0x7c0014a,0xc0196c0,0x540730a,
	0x6410c08,0x8010e87,0x93e1248,0x7c01689,0x93c1248,0x7c016c9,0x9363248,0x7c01709,
	0x9341248,0x7c01749,0x9321248,0x7c01789,0xc0106c0,0x68017c9,0x4001208,0x7c017c8,
	0xc0105c0,0x6801809,0x4001208,0x7c01808,0xc010680,0x6801849,0x401a208,0x7c01848,
	0x6410c08,0x8010e83,0x93e1248,0x7c01889,0x93c1248,0x7c018c9,0x93a1248,0x7c01909,
	0xaa10009,0x6800008,0xc010140,0x6801949,0x7c01948,0xc010240,0x6801989,0xc0101c0,
	0x68019c9,0x6410c08,0x8010e86,0x93e1248,0x7c01a09,0x93c1248,0x7c01a49,0x93a1248,
	0x7c01a89,0x9381248,0x7c01ac9,0x9361248,0x7c01b09,0x9341248,0x7c01e89,0xaa0c009,
	0xc015300,0x0000000,0x6800048,0x7c01e48,0x7801b08,0xa608008,0xc780a80,0xc00fa00,
	0x6801bc9,0x7800e08,0x7c01c48,0xc00f900,0x6801c09,0x7800e48,0x7c01d48,0x6410c08,
	0x8010e81,0x93e1248,0x7c01b89,0xaa14009,0xc015640,0x0000000,0xc780580,0x0000000,
	0x7801bcb,0xae0010b,0x680000a,0xb4072ca,0xc00f4c0,0x407124a,0x4001208,0x7400248,
	0xc7ffec0,0x400128a,0x7801c0b,0xae0010b,0x680000a,0xb4072ca,0xc00f240,0x407524a,
	0x4001208,0x7400248,0xc7ffec0,0x400128a,0x6410c08,0x8010e81,0x93e1248,0x7c01e49,
	0x6410c08,0x8010e82,0x93e1248,0x7c01ec9,0x93c1248,0xa618009,0x7c01f09,0x7c01f49,
	0x7c01f89,0xc780340,0x7c01fc9,0x6410c08,0x8010e82,0x93e1248,0x7c01f09,0x93c1248,
	0xa618009,0x7c01f49,0xc00ed00,0x6801f89,0xc00ec80,0x6801fc9,0x6410c08,0x8010e81,
	0x93e1248,0xa628009,0x7800f48,0xaa28008,0x7801648,0xaa0c008,0x68f000c,0x69f000c,
	0xc019b80,0x0000000,0xc7800c0,0xc076880,0x0000000,0x6410c08,0x8010e81,0x93e1248,
	0x7c02009,0xc00e580,0x6802049,0x4002208,0x7c02048,0x6410c08,0x8010e81,0x93e1248,
	0x7c02089,0x8010e81,0xc01a1c0,0x0000000,0x7801608,0xaa0ffc8,0xc017940,0x5407308,
	0xc78e0c0,0x800c0ff,0x680400d,0xaa0c1c8,0xc780d80,0x0000000,0x8010e90,0x6803fcb,
	0x6800009,0x6410c08,0x8010e88,0x9308208,0x2009209,0xa8fc2c8,0x680000a,0x6410c08,
	0x8010e88,0x9308208,0x200a20a,0xa8fc2c8,0x0000000,0x6801027,0xc020f80,0x4000a09,
	0x6801067,0xc020ec0,0x4000a0a,0x440134d,0xaa0800d,0xa60800a,0xc780680,0xaa2c049,
	0x0000000,0xaa9800a,0x0000000,0x6410c08,0x8010e88,0x6801127,0xc020b80,0x4000a08,
	0xc7ffe40,0x440128a,0x78015c9,0xa22c049,0x0000000,0x6410c08,0x8010e87,0x9327208,
	0x7c04f88,0x68010a7,0xc020880,0x4000a08,0x8010e81,0x440128a,0xc7ffac0,0x0000000,
	0xc78d2c0,0x800c0ff,0xaa0c108,0xc787600,0x0000000,0x69fff89,0x640d408,0x9010208,
	0xa8fe248,0x0000000,0x6410c08,0x8010e90,0x9326208,0xb210548,0x7c020c8,0xc78cf00,
	0x800c0fe,0x6410c08,0x8010e81,0x93e1248,0x7c02109,0x78020c8,0xba1c408,0x6800009,
	0xae14548,0x6800009,0x6410c08,0x8010e81,0x93e1248,0x7c02149,0xc00cc40,0x6800049,
	0x7801609,0xa812248,0x7c00108,0xa633fc9,0x0000000,0xc015700,0x680000c,0xc015bc0,
	0x680000c,0xc017d40,0x0000000,0x680000c,0x7c00e8c,0xc0204c0,0x0000000,0x7800108,
	0x7c01608,0xc017280,0x5407308,0x7801648,0x78007c9,0xa806248,0x7c00108,0x7800109,
	0x7c007c9,0xc015740,0x5407309,0x780060a,0x7800148,0xa804288,0x7c0014a,0xc015080,
	0x540730a,0x7802108,0x6800009,0xaa10008,0x7c021c9,0xc780440,0x7c02189,0x7801688,
	0xaa14008,0x6800009,0x6410c08,0x8010e81,0x93e1248,0x7c021c9,0x7801449,0x6410c08,
	0x680080a,0x240a24a,0x98091c9,0x6010e09,0x3808288,0x7c02188,0x78021c8,0xaa0c008,
	0xc784d00,0x0000000,0xc01bf40,0x0000000,0x7801708,0xaa0c008,0x98081c8,0x6010e08,
	0xc00bbc0,0x6802209,0x78016c8,0xaa14008,0x6800049,0x6410c08,0x8010e81,0x93e1248,
	0x7c02249,0x78020c9,0xaa084c9,0xa610509,0x6800008,0xc7818c0,0x7c02288,0x6410c08,
	0x7800949,0x4004249,0x680080a,0x240a24a,0x98091c9,0x6010e09,0x3808288,0x7c02288,
	0x6410c08,0x8010e81,0x93e1248,0xa614009,0x680400d,0xc0752c0,0x780118e,0xc780600,
	0x78011c9,0x6410c08,0x68007ca,0x240a24a,0x98091c9,0x6010e09,0x3808288,0x5801208,
	0x7c022c8,0xc0777c0,0x4000448,0x480f211,0x5404208,0x6808009,0x2009209,0x680400d,
	0x6800008,0x700024a,0x740034a,0x400134d,0x4001208,0xbaf0408,0x4001249,0x7801208,
	0xa608008,0xc780b80,0x780124a,0xaa1400a,0x680000b,0xc00ac80,0x6800049,0x40002c8,
	0xc00abc0,0x6800049,0x200c20b,0xa60800c,0xc7808c0,0xac0f2cc,0x7801248,0xba60048,
	0x7801248,0xb21c088,0x6802049,0xb214108,0x6802089,0xb20c208,0x68020c9,0x6802109,
	0x6410c08,0x6010e09,0xc780340,0x0000000,0x6410c08,0x7800949,0x4004249,0x680080a,
	0x240a24a,0x98091c9,0x6010e09,0x3808288,0x6410c08,0x8010e81,0x93e1248,0x6410c08,
	0x8010e81,0x93e1248,0xaa0c009,0xc00a300,0x6800049,0xc7ff780,0x440130c,0xc019d00,
	0x0000000,0x7801288,0xaa14008,0x6800009,0x6410c08,0x8010e81,0x93e1248,0x7c02309,
	0x7800fc8,0xa610008,0x7c02348,0xc780200,0x7c02388,0x6410c08,0x8010e82,0x93e1248,
	0x7c02349,0x93c1248,0x7c02389,0x780220b,0xa60c08b,0xc781700,0x0000000,0x641170a,
	0x6410c08,0x8010e81,0x93e1248,0xa628009,0x78017c9,0x9546289,0x7c023c9,0xa60c00b,
	0x6800009,0x7801809,0x9606289,0xc7803c0,0x7c02409,0xc009880,0x68023c9,0x78023c9,
	0x4001249,0x9546289,0x7c023c9,0xaa1c04b,0xc0096c0,0x6802409,0x7802409,0x4001249,
	0x9606289,0x7c02409,0x601170a,0x6800009,0x7c02b49,0x7802009,0xaa14009,0x7802b09,
	0xb20c049,0xc019900,0x0000000,0xa61400b,0x6800009,0x6410c08,0x8010e81,0x93e1248,
	0x641170a,0x96c1289,0x601170a,0x7c02449,0x7801789,0xaa14009,0x6800009,0x6410c08,
	0x8010e81,0x93e1248,0x7c02489,0x6411008,0x9581209,0x6011008,0x7802309,0xaa48009,
	0xa61400b,0x6800049,0x6410c08,0x8010e81,0x93e1248,0x7c024c9,0xaa1808b,0xaa0c009,
	0x6802409,0x68023c9,0x7000249,0xae10049,0x6800009,0xc780100,0x7c02509,0xc008a00,
	0x6802509,0xaa0c04b,0x7801a49,0x7801a89,0x6047b09,0x8047c00,0xaa10009,0x8047d00,
	0xc007180,0x0000000,0xc008740,0x6802549,0x6800149,0x2409209,0x6411708,0x96e3209,
	0x6011708,0xc008740,0x6802589,0x7801848,0x7902589,0x2008248,0x7c025c8,0x7802209,
	0x9446248,0x7802388,0x9501248,0x7802348,0x9521248,0x7800d08,0x9542248,0x7800d48,
	0x9582248,0x7800d88,0x95c2248,0x7800dc8,0x9602248,0x7801988,0x9647248,0x78019c8,
	0x9727248,0x6011109,0x6411009,0x9809389,0x6011009,0x7801a08,0xaa3c008,0xc007fc0,
	0x6802609,0xc007f40,0x6802649,0x6411109,0x7801988,0x780260a,0x2008288,0x9647248,
	0x78019c8,0x780264a,0x2008288,0x9727248,0x6011109,0x7801f08,0xaa14008,0x6800009,
	0x6410c08,0x8010e81,0x93e1248,0x7c02689,0xa620009,0x7801f49,0x7c026c9,0x7801f89,
	0x7c02709,0x7801fc9,0xc7802c0,0x7c02749,0x6410c08,0x8010e81,0x93e1248,0xa618009,
	0x7c026c9,0xc007740,0x6802709,0xc0076c0,0x6802749,0x7801ec8,0xaa34008,0x6800009,
	0x7802348,0xa61c008,0x7802388,0xa614008,0x78026c8,0xaa0c008,0xc780140,0x6800009,
	0x6410c08,0x8010e81,0x93e1248,0x7c02789,0x7801b08,0xa610008,0x7801e88,0xa608008,
	0xc780440,0xc006f80,0x68027c9,0x78027cb,0xaa3400b,0xc006e80,0x6800049,0x4001308,
	0x680080a,0x240a30a,0x980c1cc,0x6410c08,0x6010e0c,0x3808288,0x7c00048,0xaef004b,
	0x44012cb,0x7802088,0xaa20008,0xc006b00,0x6800049,0xaa14008,0x0000000,0x8010e88,
	0xc7fff40,0x4401208,0xc013b80,0x0000000,0x640ce09,0xa238089,0x6420408,0xa2fc048,
	0x0000000,0x9c08748,0x6020408,0x6460108,0xa216008,0x0000000,0x6460408,0xa2fc048,
	0x0000000,0x6460408,0x6060408,0x7802108,0xaa14008,0x0000000,0x6460408,0x9808708,
	0x6060408,0x69fffc9,0x640d408,0x9010208,0xa8fe248,0x0000000,0x640d208,0xa240208,
	0x7803548,0xbe30208,0x7802189,0xa60c009,0x7802209,0xaa20089,0x640d209,0x928c209,
	0x4001208,0x968c248,0x600d209,0xc785e00,0x800c0ff,0x98080c8,0x7c03548,0x800c008,
	0x8007401,0xc785c80,0x0000000,0xaa0c148,0xc784540,0x0000000,0x8010e81,0x6812008,
	0x6010e08,0x0000000,0x8010e00,0x78021c8,0xa60c008,0x6800008,0x7c02808,0x7802108,
	0xaa58008,0x6800008,0x7c02a48,0x7c02a88,0x7c00e88,0x7c02848,0x7c02888,0x7c028c8,
	0x7c02908,0x7801b09,0xaa0c009,0x7800e08,0x7801c48,0x7c02948,0x7c029c8,0xaa0c009,
	0x7800e48,0x7801d48,0x7c02988,0x7c02a08,0xc780280,0x68001df,0x7802188,0x7800e89,
	0xa806248,0x6800827,0xc018680,0x78021a8,0xc7851c0,0x800c0ff,0x78021c8,0xa61c008,
	0x0000000,0x68001df,0x7802a49,0x7802a88,0x9508248,0x7c02bc9,0x7802a49,0xa614049,
	0x7801e89,0xaa0c009,0x0000000,0x981f15f,0x7802a49,0x7802a88,0x958c248,0x978425f,
	0x6011609,0xc000400,0x0000000,0x7800e88,0x9808788,0x98087c8,0x6012408,0x7800e88,
	0x640d409,0x9010249,0xaa0c009,0xa8fd209,0x0000000,0x6a00008,0x6011408,0xc786200,
	0x0000000,0x7802949,0x7c02b89,0x7802a89,0x780290a,0xa40b289,0x680000c,0x7802a4b,
	0x78028ca,0xa40728b,0x680000c,0xa614009,0x680008c,0xa60c00a,0x680008c,0x68000cc,
	0x78021c8,0x9441308,0x6460109,0x94a324c,0x6060109,0x6420109,0x944324c,0x7802208,
	0x9402248,0x7800d48,0x4003208,0x9604248,0x7800d08,0x4003208,0x9684248,0x6020109,
	0x7800848,0x7800889,0x9610209,0x6020508,0x78028c8,0x7802909,0x9610209,0x6020708,
	0x6060708,0x78029c8,0x7802a09,0x9610209,0x6020808,0x6060808,0x7800e08,0x4401208,
	0x7800e49,0x4401249,0x9610209,0x6020608,0x6800048,0x541f208,0x6020408,0x6450a08,
	0x9005208,0xa6f8008,0x6800008,0x7801b09,0xa60c009,0x6f00008,0x6d00008,0x6050a08,
	0x6450108,0x78008c9,0x9602209,0x7800909,0x9642209,0x6050108,0x78028c8,0x7802909,
	0x960a209,0x7801b09,0x97e1209,0x6050608,0x78029ca,0x7802a09,0x960a289,0x605070a,
	0x9c087c8,0x7802a4a,0x7802a89,0x960a289,0xa40c288,0x0000000,0x98087c8,0x78028c9,
	0x780290a,0x960a24a,0xa618009,0x0000000,0x6450009,0x9809009,0x9809049,0x6050009,
	0x6050808,0x7802a89,0x780290a,0xa404289,0x7802a49,0x78028ca,0xa802289,0xc780740,
	0x640c908,0xe000248,0x640ca0a,0x0000000,0xf000240,0x200a24a,0x606110a,0x606150a,
	0x606140a,0x4020208,0x7802a89,0xe000248,0x640cc0a,0x640cb0c,0xf000340,0x7802848,
	0xe000308,0x200b34a,0x402028b,0x0000000,0xf000240,0x200a24a,0x606120a,0x606160a,
	0x2409309,0x200b24b,0x606130b,0x606170b,0x6460408,0x6060408,0x6800048,0x541f208,
	0x6060408,0x7801b08,0x6040508,0x78029c8,0x7802a09,0x9610209,0x6040308,0x78028c8,
	0x7802909,0x9610209,0x6040408,0x78021c8,0xa638008,0x6804808,0x6043008,0x6443108,
	0x900a248,0xa6f0009,0x91e5248,0xa6e8009,0x0000000,0x6440008,0x9808008,0x6040008,
	0x9c08008,0x6040008,0x8040701,0x78021c8,0xaa4c008,0x7802a48,0xa614008,0x7801e89,
	0xaa0c009,0xc007b80,0x0000000,0x6411009,0x91c1249,0xa6f8009,0x0000000,0x6411009,
	0x98093c9,0x6011009,0x6411009,0x91e1249,0xa6f8009,0xcc00000,0x0000000,0x6411009,
	0x91c1249,0xa6f8009,0x0000000,0x7800e09,0xae0c049,0xc007400,0x0000000,0x6411009,
	0x98093c9,0x6011009,0x8011c00,0x8011e00,0x6411009,0x91e1249,0xa6f8009,0xcc00000,
	0x0000000,0xa60fc08,0x0000000,0x8010e90,0xc7815c0,0x800c0ff,0x780080b,0xc001600,
	0x6800049,0x6047e08,0xaa1000b,0xc0016c0,0x6800049,0x6047f08,0x8048000,0xc0002c0,
	0x78023ca,0x6047c0c,0x780220a,0xa61400a,0x8048020,0xc000140,0x780240a,0x6047d0c,
	0xcc00000,0x0000000,0x400034a,0x6410c0e,0x980d1cd,0x6010e0d,0x680000c,0x400034a,
	0xaa1c00d,0x93e13ce,0x580130c,0x97e130f,0x540138e,0xc7ffec0,0x440134d,0x680040d,
	0x240d28d,0x380c34c,0xaa4000b,0x400034a,0x6410c0e,0x980d1cd,0x6010e0d,0x400034a,
	0xaa1c00d,0x93e13ce,0x580130c,0x97e130f,0x540138e,0xc7ffec0,0x440134d,0x680040d,
	0x240d28d,0x380c34c,0x400034c,0xae0c00a,0xcc00000,0x0000000,0x680000e,0x680000f,
	0x900140d,0xaa1c010,0xc000900,0x6800049,0x9408388,0xc000840,0x6800049,0x94083c8,
	0x920140d,0xaa34010,0xc000700,0x6800049,0x9508388,0xc000640,0x6800049,0x950a3c8,
	0xc000580,0x6800049,0x9608388,0xc0004c0,0x6800049,0x964a3c8,0x604810e,0x604810f,
	0x580134d,0xc7ff880,0x440128a,0x0800000,0x7800008,0xc7e0840,0x6030408,0x6806008,
	0x6010e08,0x6410f08,0xbefc0c8,0x9118208,0xcc00000,0x7400248,0x680e008,0x6010e08,
	0x6410f08,0xbefc0c8,0x9118208,0xcc00000,0x7400248,0x6410509,0x6bfff89,0x6030409,
	0x0400000,0xbe0c108,0xc7ffa40,0x0000000,0x8012104,0x7800e09,0xae0c049,0x6411c22,
	0x4000862,0xa26891f,0x6011c21,0xa21481f,0xc005240,0x0000000,0xa25411f,0x9c1f15f,
	0x7801e89,0xaa48009,0x8011e00,0xbe42022,0x6a907c9,0x6012b09,0x0000000,0x0000000,
	0x6412b09,0xc005180,0x0000000,0x6411009,0x98093c9,0x6011009,0x6411009,0x91e1249,
	0xa6f8009,0xc780840,0x0000000,0xa2fa022,0x6a907c9,0x6012b09,0x0000000,0x0000000,
	0x6412b09,0xc010140,0x0000000,0x6411609,0x93e1249,0xaa4c009,0x6800008,0x7c02808,
	0x6411109,0x78025c8,0x9446248,0x6011109,0x6411009,0x9809389,0x6011009,0x6411e08,
	0xbe22008,0x68001df,0xc07a3c0,0x978479f,0x6420409,0x9c09749,0xc780100,0x6020409,
	0xc7feac0,0x800c0ff,0x601161e,0x7800e88,0x9808788,0x98087c8,0x6012408,0x7800e88,
	0x640d409,0x9010249,0xaa0c009,0xa8fd209,0x0000000,0x6a00008,0x6011408,0x7801b08,
	0xaa0c008,0xc00f8c0,0x0000000,0x9c1f09f,0x7800e88,0x4001208,0x7c00e88,0x7802808,
	0x4001208,0x7c02808,0xa21409f,0x78029c9,0xb803248,0x0000000,0x9c1f05f,0x7802a48,
	0xa618048,0x4001208,0x7801e89,0xaa0c009,0x0000000,0x981f15f,0x7802949,0xb815248,
	0x7c02a48,0x78028c8,0x7c02a48,0x981f09f,0x7800e88,0x7800e09,0x2008248,0x78029c9,
	0x2408248,0x7c00e88,0x7802a88,0x4001208,0x7802989,0xb807248,0x7c02a88,0x7801b08,
	0xaa0c008,0xc7806c0,0x0000000,0x981f0df,0x7802a88,0x4001208,0x7802989,0xb80f248,
	0x7802a48,0x4001208,0x7802949,0xb80b248,0x7800e09,0xb807248,0x7802a88,0x4001208,
	0x7800e49,0xb803248,0xc7800c0,0x9c1f11f,0x981f11f,0x981f0df,0x7802a5e,0x7802a88,
	0x958c788,0x978479f,0xcb80020,0x0000000,0x6800048,0x7c021c8,0x7802848,0x7801bcc,
	0xb41a308,0x6801c49,0x2009209,0x700024a,0x78028cb,0x200b28b,0x7c028cb,0x7c02a4b,
	0x780290b,0x7c02a8b,0x4001208,0xb808308,0x7c02848,0x7800e09,0x7c02949,0x78028ca,
	0x2409289,0xc780ac0,0x7c029c9,0x4001249,0x700024a,0x7c029ca,0x780294b,0x200b28b,
	0xc780900,0x7c0294b,0x7802888,0x7801c0c,0xb802308,0xc7ff600,0x6800008,0x7c02848,
	0x7c02a48,0x7c028c8,0x7801c49,0x7c029c9,0x7c02949,0x7802888,0x6801d49,0x2009209,
	0x700024a,0x780290b,0x200b28b,0x7c0290b,0x7c02a8b,0x4001208,0xb808308,0x7c02888,
	0x7800e49,0x7c02989,0x780290a,0x2409289,0xc780200,0x7c02a09,0x4001249,0x700024a,
	0x7c02a0a,0x780298b,0x200b28b,0x7c0298b,0x7802908,0x7800e09,0xe000248,0x0000000,
	0x0000000,0x78028c9,0xf000200,0x2008248,0x7c00e88,0xc7fe780,0x4c177df,0x7802a49,
	0x78028ca,0x400228a,0xb407289,0x4402209,0x440128a,0x7802948,0xb403289,0x4401208,
	0x4401208,0x680c009,0x2009209,0x7400262,0xa21009f,0x6800021,0xc7fbf40,0x0000000,
	0x7802a48,0x680c009,0x2009209,0xc7fbe00,0x7000261,0x7802a49,0x78028ca,0x400228a,
	0xb407289,0x4402209,0x440128a,0x7802948,0xb403289,0x4401208,0x4401208,0x680c009,
	0x5801288,0x2009289,0x700024a,0xa20c048,0xc7800c0,0x94082a2,0x95102a2,0x740024a,
	0xa21009f,0x6800021,0xc7fb840,0x0000000,0x7802a48,0x680c009,0x5801288,0x2009289,
	0x700024a,0xa20c048,0x911084a,0x900884a,0xc7fb5c0,0x0000000,0x7802a49,0x78028ca,
	0x400228a,0xb407289,0x4402209,0x440128a,0x7802948,0xb403289,0x4401208,0x4401208,
	0x680c009,0x5802288,0x2009289,0x700024a,0x9002208,0xa60c008,0xc780240,0x95842a2,
	0xa60c048,0xc780180,0x95042a2,0xa60c088,0xc7800c0,0x94842a2,0x94042a2,0x740024a,
	0xa21009f,0x6800021,0xc7fae40,0x0000000,0x7802a48,0x680c009,0x5802288,0x2009289,
	0x700024a,0x9002208,0xaa1c008,0x918484a,0xaa14048,0x910484a,0xaa0c088,0x908484a,
	0x900484a,0xc7faa80,0x0000000,0xc780080,0x6800021,0xc7fa980,0x0000000,0x6412106,
	0x90c1186,0xa6f8006,0xc7db100,0x0000000,0x6804009,0x6012d09,0x6800f8a,0x8012e00,
	0x0000000,0xd07ff8a,0x0000000,0xcc00000,0x0000000,0x6804009,0x6012c09,0x6809009,
	0x6012d09,0x6800f8a,0x6412e09,0xd07ffca,0x6012e09,0xcc00000,0x0000000,0x6809009,
	0x6012c09,0x6804009,0x6012d09,0x6800f8a,0x6412e09,0xd07ffca,0x6012e09,0x6411109,
	0x78025c8,0x9446248,0x6011109,0xcc00000,0x0000000,0x7800e08,0x7801bc9,0xa608009,
	0xc780880,0xaa18049,0xaa20089,0xaa640c9,0xa608109,0xc7806c0,0xc780000,0x5801288,
	0xc780680,0x7c01c4a,0x5802288,0x540124a,0x2009289,0xb0fe209,0x400128a,0x440224a,
	0x7c01c49,0x5401289,0x400128a,0x540124a,0x2009289,0x5401208,0xb003209,0x7801c49,
	0x440128a,0x240a24a,0xc780200,0x7c01c8a,0xc000b40,0x6801c4c,0xc780100,0x0000000,
	0xc000dc0,0x6801c4c,0x7800e48,0x7801c09,0xa608009,0xc780880,0xaa18049,0xaa20089,
	0xaa640c9,0xa608109,0xc7806c0,0xc780000,0x5801288,0xc780680,0x7c01d4a,0x5802288,
	0x540124a,0x2009289,0xb0fe209,0x400128a,0x440224a,0x7c01d49,0x5401289,0x400128a,
	0x540124a,0x2009289,0x5401208,0xb003209,0x7801d49,0x440128a,0x240a24a,0xc780200,
	0x7c01d8a,0xc000200,0x6801d4c,0xcc00000,0x0000000,0xc000480,0x6801d4c,0xcc00000,
	0x0000000,0x5802348,0x740030d,0x5801248,0x240a349,0x400130c,0x740030a,0x54012c8,
	0x200b20b,0x58022cb,0x240a24b,0x400130c,0x740030a,0xcc00000,0x0000000,0x5803288,
	0x540224a,0x2009289,0xb0fe209,0x400128a,0x440224a,0x7400309,0x54012c8,0x4000349,
	0x540224a,0x2009289,0xb0fe2c9,0x400128a,0x440224a,0x240a349,0x400130c,0x740030a,
	0x54012c8,0x200b20b,0x4000349,0x540224a,0x2009289,0xb0fe2c9,0x400128a,0x440224a,
	0x240a349,0x400130c,0x740030a,0x54022c8,0x4000349,0x540224a,0x2009289,0xb0fe2c9,
	0x400128a,0x440224a,0x240a349,0x400130c,0x740030a,0xcc00000,0x0000000,0x640c308,
	0x2008308,0x6035108,0x6800808,0x6035208,0x6800149,0x680c00a,0x700024b,0x740028b,
	0xb6105c9,0x4001249,0xc7fff00,0x400128a,0x6a0c008,0x6035008,0x6435008,0x580f208,
	0xbef8048,0x0000000,0x6435308,0x900c208,0xa6f8008,0x0000000,0xcc00000,0x0000000,
	0x640c408,0x2008308,0x6035108,0x6801008,0x6035208,0x6800609,0x680c00a,0x700024b,
	0x740028b,0xb6115c9,0x4001249,0xc7fff00,0x400128a,0x6a0c008,0x6035008,0x6435008,
	0x580f208,0xbef8048,0x0000000,0x6435308,0x900c208,0xa6f8008,0x0000000,0xcc00000,
	0x0000000,0x640c308,0x2008308,0x6035108,0x6800808,0x6035208,0x6b0c008,0x6035008,
	0x6435008,0x580f208,0xbef8048,0x0000000,0x6800149,0x680c00a,0x700028b,0x740024b,
	0xb6105c9,0x4001249,0xc7fff00,0x400128a,0xcc00000,0x0000000,0x640c408,0x2008308,
	0x6035108,0x6801008,0x6035208,0x6b0c008,0x6035008,0x6435008,0x580f208,0xbef8048,
	0x0000000,0x6800609,0x680c00a,0x700028b,0x740024b,0xb6115c9,0x4001249,0xc7fff00,
	0x400128a,0xcc00000,0x0000000,0x640c508,0x2008308,0x6035108,0x6801467,0xc009b40,
	0x6435128,0x6800c08,0x6035208,0x6801609,0x680c00a,0x700024b,0x740028b,0xb612089,
	0x4001249,0xc7fff00,0x400128a,0x6a0c008,0x6035008,0x6435008,0x580f208,0xbef8048,
	0x0000000,0x6435308,0x900c208,0xa6f8008,0x0000000,0x7800f48,0xaa20008,0x540330c,
	0x7801648,0xaa0c008,0x6800008,0x6900008,0xc000100,0x200c20c,0xcc00000,0x0000000,
	0x680000d,0x8070300,0x680c00b,0x680000a,0x6470408,0x6470409,0x9508209,0x74002c8,
	0x40012cb,0xbaeffca,0x400128a,0xaa3800d,0x0000000,0x6470508,0x7c0fe88,0x9210208,
	0x7c0fec8,0x6470608,0x7c0ff08,0x9210208,0x7c0ff48,0x6470708,0x7c0ff88,0x9210208,
	0x7c0ffc8,0x640cd08,0x2008308,0x540924d,0x2008248,0x6035108,0x6804008,0x6035208,
	0x6a0c008,0x6035008,0x6435008,0x580f208,0xbef8048,0x0000000,0xba0c04d,0xcc00000,
	0x0000000,0xc7ff640,0x400134d,0x640c508,0x2008308,0x6035108,0x6801427,0xc008740,
	0x6435128,0x6800c08,0x6035208,0x6b0c008,0x6035008,0x6435008,0x580f208,0xbef8048,
	0x0000000,0x6801609,0x680c00a,0x700028b,0x740024b,0xb612089,0x4001249,0xc7fff00,
	0x400128a,0xc000e00,0x0000000,0x7800f48,0xaa20008,0x540330c,0x7801648,0xaa0c008,
	0x6800008,0x6900008,0xc000100,0x200c20c,0xcc00000,0x0000000,0x680000d,0x8070200,
	0x640cd08,0x2008308,0x540924d,0x2008248,0x6035108,0x6804008,0x6035208,0x6b0c008,
	0x6035008,0x6435008,0x580f208,0xbef8048,0x0000000,0x680c00b,0x680000a,0x70002c8,
	0x40012cb,0x6070408,0x9108248,0x6070409,0xbaeffca,0x400128a,0xaa3800d,0x0000000,
	0x780fe88,0x780fec9,0x9610209,0x6070508,0x780ff08,0x780ff49,0x9610209,0x6070608,
	0x780ff88,0x780ffc9,0x9610209,0x6070708,0xba0c04d,0xcc00000,0x0000000,0xc7ff640,
	0x400134d,0x7801748,0x78018c9,0x9421209,0x7801889,0x9441209,0x7801ac9,0x9461209,
	0x7800f09,0x9483209,0x7800ec9,0x94e3209,0x7800f89,0x9741209,0x7801909,0x9761209,
	0x7800d49,0x780194a,0x2409289,0x9782209,0x6011708,0x6412508,0x7801009,0x9401209,
	0x78010c9,0x9482209,0x7801109,0x94c2209,0x7801049,0x9504209,0x7801089,0x9584209,
	0x6800cc9,0x9706209,0x78008c9,0x9442209,0xaa18009,0x680018a,0x4401249,0x340a24a,
	0x960420a,0x9808048,0x7800909,0x97c2209,0xaa18009,0x680018a,0x4401249,0x340a24a,
	0x968420a,0x9808048,0x6012508,0x6470108,0x7800f49,0x9401209,0x9421209,0x9441209,
	0x7800d49,0x9482209,0x6070108,0x6470b08,0x78008c9,0x9402209,0x7800909,0x9482209,
	0x9502209,0x6070b08,0x6440808,0x78012c9,0x9401209,0x7801889,0x9421209,0x6040808,
	0x6440c08,0x78008c9,0x9402209,0x7800909,0x9442209,0x6040c08,0xcc00000,0x0000000,
	0xc003100,0x0000000,0x78023c8,0x7c04408,0x7802408,0x7c04448,0x7802208,0x7c04488,
	0x7802308,0x7c044c8,0x78021c8,0x7c04508,0x7802188,0x7c04548,0x7800848,0x7c045c8,
	0x7800888,0x7c04608,0x7800c88,0x7c04648,0x7800cc8,0x7c04688,0x7800948,0x7c046c8,
	0x7802288,0x7c04708,0x78024c8,0x7c04748,0x7802508,0x7c04788,0x7802048,0x7c047c8,
	0x7802548,0x7c04808,0x7800a88,0x7c04848,0x7802b48,0x7c04888,0x7801b08,0x7801b89,
	0x5401249,0x2c08248,0x7c048c8,0x7801bc8,0x7c04908,0x7801c08,0x7c04948,0x7801c48,
	0x7c04988,0x7801c88,0x7c049c8,0x7801cc8,0x7c04a08,0x7801d08,0x7c04a48,0x7801d48,
	0x7c04a88,0x7801d88,0x7c04ac8,0x7801dc8,0x7c04b08,0x7801e08,0x7c04b48,0x7801f88,
	0x7c04bc8,0x7801fc8,0x7c04c08,0x7802708,0x7c04c48,0x7802748,0x7c04c88,0x7801988,
	0x7c04cc8,0x78019c8,0x7c04d08,0x7802108,0x7c04d48,0x78014c8,0x7c04e08,0x7801508,
	0x7c04e48,0x7801548,0x7c04e88,0x7801588,0x7c04ec8,0x78008c8,0x7800909,0x9484209,
	0x7c04f08,0x6800009,0x7801148,0xa20c048,0x7801008,0x9809009,0xa20c048,0x7801e48,
	0x9809049,0xa20c048,0x7801ec8,0x9809089,0xa20c048,0x7801f08,0x98090c9,0xa20c048,
	0x7801f48,0x9809109,0xa20c048,0x7802688,0x9809149,0xa20c048,0x78026c8,0x9809189,
	0xa20c048,0x7802348,0x98091c9,0xa20c048,0x7802388,0x9809209,0xa20c048,0x7802788,
	0x9809249,0xa20c048,0x0000000,0x9809289,0x7c04b89,0x680500a,0x6802c08,0x7000209,
	0x7400289,0x400128a,0xbaf73c8,0x4001208,0x640c108,0x6035108,0x6802008,0x6035208,
	0x6a04008,0x6035008,0x6435008,0x580f208,0xbef8048,0x0000000,0x6435308,0x900c208,
	0xa6f8008,0x0000000,0xcc00000,0x0000000,0x800cf00,0x800c0ff,0x6800009,0x680ffca,
	0x7000248,0x9808408,0x600cf08,0x0000000,0x640cf08,0xa6fc008,0xb403289,0xc7ffe40,
	0x4001249,0xcc00000,0x0000000,0x680000a,0x680000b,0x6804008,0x7000209,0x580f209,
	0xbe20048,0x580e209,0xa20c048,0x400128a,0x40012cb,0x6804008,0xbae040a,0x2008288,
	0x7c02b0b,0xcc00000,0x0000000,0x6800009,0x7c02b09,0x68003ca,0x68043c8,0x7400209,
	0x440128a,0xaef800a,0x4401208,0x6a00009,0x7400209,0xcc00000,0x0000000,0x6800048,
	0x7c024c8,0x7c02308,0xcc00000,0x0000000,0x680580a,0x68020c8,0x7000209,0x7400289,
	0x400128a,0xbaf67c8,0x4001208,0xcc00000,0x0000000,0x6802c0d,0x6410c08,0x8010e81,
	0x93e1248,0xaa10009,0x7c02b49,0xc0003c0,0x78023cc,0xa62c00b,0x0000000,0x6410c08,
	0x8010e81,0x93e1248,0xaa18009,0x7802b49,0x9809049,0x7c02b49,0xc000100,0x780240c,
	0xcc00000,0x0000000,0x7802b08,0xb21c088,0x6800049,0xb214108,0x6800089,0xb20c208,
	0x68000c9,0x6800109,0x680080a,0x240a24a,0x98091c9,0x6410c08,0x6010e09,0x3808288,
	0x7400348,0x400134d,0xaeec04c,0x440130c,0xcc00000,0x0000000,0x6460409,0x9001289,
	0xaaf800a,0x0000000,0xcc00000,0x0000000,0x7802a48,0x680d009,0x2009209,0x700024d,
	0x7802a88,0x680ee09,0x2009209,0x700024e,0x680000f,0xac0338d,0x6ee000f,0x6ea000f,
	0x6050a0f,0x7802a48,0xb615e08,0x680d009,0x2009209,0x7802bcd,0x740024d,0x7802a88,
	0xb615108,0x680ee09,0x2009209,0x7802bce,0x740024e,0xcc00000,0x0000000,0x67f2f23,
	0xbefc063,0x640c023,0xa617fa3,0x0000000,0x6803ba7,0xc0019c0,0x4000a26,0xa6e3fe3,
	0x0000000,0x640d223,0xbe0c063,0x908c9a3,0x6800026,0x40019a6,0xaa10066,0x68004a7,
	0xc001700,0x4000a26,0x6410b23,0x98230a3,0x6010b23,0x6412123,0xa2fc063,0x0000000,
	0xd07fda6,0x0000000,0x6410c23,0x92039a3,0x7c04da6,0x93269a3,0x7c04de6,0x6410d23,
	0x6410b23,0x600d326,0x6800067,0xc001240,0x4000a26,0xa6288a6,0x0000000,0x640ce24,
	0xa21c0a4,0x6411624,0x93e1924,0xaa10024,0x6440123,0xa2fc063,0x0000000,0x8012101,
	0x640d224,0xa60c926,0x58108e4,0xa20c063,0xa214064,0x0000000,0x800c009,0xc7ff200,
	0x8007401,0x640d224,0xbe580a4,0x9042924,0xa60c0e4,0x68003e3,0x7c03563,0x6803c25,
	0x7803563,0xaa3c826,0xa270063,0xaa34866,0xaa308a6,0xa2640a3,0xa260123,0xaa24064,
	0xbe18223,0xa20c0a4,0xb218566,0xc7804c0,0xaa08526,0xa6444e6,0x98230e3,0x7c03563,
	0xaa38826,0x6800065,0xaa30866,0x68000a5,0xaa288a6,0x68000e5,0xb220566,0x6800125,
	0x640d224,0x5811924,0xa20c064,0xaa0c9e6,0x68001e5,0x6803c25,0xae1c566,0xa61bc25,
	0x640d224,0x928c8e4,0x40018e3,0x968c923,0x600d224,0x68000a7,0xc000180,0x4000a25,
	0x600c025,0x8030504,0xc7fe540,0x0000000,0x600d128,0x78035a8,0xaa18028,0x0000000,
	0x600d027,0x8007401,0x640d027,0xa6fc027,0x0000000,0xcc00000,0x0000000,0x600d128,
	0x78035a8,0xaa54028,0x0000000,0x640cf28,0x6035128,0x680fc28,0x6035228,0x6a00028,
	0x6035028,0x6435028,0x580fa28,0xbef8068,0x0000000,0x6435328,0x900ca28,0xa6f8028,
	0x0000000,0x9827427,0x600d027,0x8007401,0x640d027,0xa6fc027,0xcc00000,0x0000000,
	0x7800848,0x7800889,0x9610209,0x6012308,0x6800208,0x7800d49,0x3408248,0x6040608,
	0x7800849,0x780088a,0x960f24a,0x6040209,0x7800e09,0x7800e4a,0x960c24a,0x6040309,
	0x8040400,0xcc00000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,
	0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,
	0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,
	0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,
	0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,0x0000000,
};