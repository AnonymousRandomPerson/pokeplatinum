#include <nitro.h>
#include <string.h>

#include "struct_decls/struct_02006C24_decl.h"

#include "overlay012/const_ov12_0223B0B8.h"
#include "overlay012/const_ov12_0223B0A0.h"
#include "overlay012/const_ov12_0223B0DC.h"

#include "struct_defs/struct_02008A90.h"
#include "overlay012/struct_ov12_022380DC.h"

#include "narc.h"
#include "unk_0200762C.h"
#include "unk_020131EC.h"
#include "unk_02073C2C.h"
#include "overlay012/ov12_022380BC.h"

static void ov12_022380DC(UnkStruct_ov12_022380DC * param0, int param1, int param2, int param3);

const s16 Unk_ov12_0223B0B8[][3] = {
    {0x150, 0x70, 0xFFFFFFFFFFFFFE00},
    {0xFFFFFFFFFFFFFFB0, 0x32, 0xFFFFFFFFFFFFFD80},
    {0x13C, 0x70, 0xFFFFFFFFFFFFFE00},
    {0xFFFFFFFFFFFFFFC4, 0x32, 0xFFFFFFFFFFFFFF9C},
    {0x164, 0x78, 0x0},
    {0xFFFFFFFFFFFFFF9C, 0x2A, 0xFFFFFFFFFFFFFD80}
};

const s16 Unk_ov12_0223B0A0[][2] = {
    {0x40, 0x20},
    {0xC0, 0xE0},
    {0x28, 0x20},
    {0xD8, 0xE0},
    {0x50, 0x20},
    {0xB0, 0xE0}
};

const s16 Unk_ov12_0223B0DC[][3] = {
    {0xFFFFFFFFFFFFFFB0, 0x70, 0xFFFFFFFFFFFFFE00},
    {0x150, 0x32, 0xFFFFFFFFFFFFFE00},
    {0xFFFFFFFFFFFFFFB0, 0x70, 0xFFFFFFFFFFFFFE00},
    {0x150, 0x32, 0xFFFFFFFFFFFFFE00},
    {0xFFFFFFFFFFFFFFB0, 0x70, 0xFFFFFFFFFFFFFE00},
    {0x150, 0x32, 0xFFFFFFFFFFFFFE00}
};

void ov12_022380BC (UnkStruct_ov12_022380DC * param0, int param1)
{
    ov12_022380DC(param0, param0->unk_00, 0, param1);
}

void ov12_022380CC (UnkStruct_ov12_022380DC * param0, int param1)
{
    ov12_022380DC(param0, param0->unk_04, 1, param1);
}

static void ov12_022380DC (UnkStruct_ov12_022380DC * param0, int param1, int param2, int param3)
{
    UnkStruct_02008A90 v0;
    UnkStruct_02008A90 * v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    u32 v7;
    int v8;
    s8 v9;
    s8 v10;
    s8 v11;
    u8 v12;

    sub_020089B0(param0->unk_18[param0->unk_00]);

    v2 = param0->unk_28[param0->unk_04];
    v3 = param0->unk_30[param0->unk_04];
    v5 = param0->unk_34[param0->unk_04];
    v6 = param0->unk_38[param0->unk_04];
    v7 = param0->unk_3C[param0->unk_04];

    if (param2) {
        if (param0->unk_4C[param1] & 0x1) {
            v4 = 0;
        } else {
            v4 = 2;
        }
    } else {
        if (param0->unk_4C[param1] & 0x1) {
            v4 = 2;
        } else {
            v4 = 0;
        }
    }

    sub_02075FB4(&v0, v2, v3, v4, v5, v6, v7);

    v1 = sub_02008A90(param0->unk_18[param0->unk_00]);
    *v1 = v0;

    sub_020089A0(param0->unk_18[param0->unk_00]);
    sub_02013750(v1->unk_00, v1->unk_02, param3, param0->unk_08[param0->unk_00]->unk_00, v7, 0, v4, v1->unk_06);

    param0->unk_08[param0->unk_00]->unk_04 = v1->unk_00;
    param0->unk_08[param0->unk_00]->unk_08 = v1->unk_04;

    v11 = param0->unk_08[param0->unk_00]->unk_0C = sub_02076648(v2, v3, v4, v6, v7);
    v8 = ov12_022384CC(param0->unk_4C[param0->unk_00], 1);

    sub_02007DEC(param0->unk_18[param0->unk_00], 1, v8 + v11);

    if (v4 == 2) {
        NARC * v13 = NARC_ctor(NARC_INDEX_POKETOOL__POKE_EDIT__PL_POKE_DATA, param3);

        sub_02078A80(v13, &v9, v2);
        sub_02078AA4(v13, &v10, v2);
        sub_02078AC8(v13, &v12, v2);
        NARC_dtor(v13);

        sub_02007DEC(param0->unk_18[param0->unk_00], 46, v12);
        sub_02007DEC(param0->unk_18[param0->unk_00], 20, (v8 + v11) + (36 - v11));
        sub_02007DEC(param0->unk_18[param0->unk_00], 21, v10);
        sub_02007DEC(param0->unk_18[param0->unk_00], 22, 36 - v11);
        sub_02007DEC(param0->unk_18[param0->unk_00], 41, v9);
    }
}

void ov12_022382BC (UnkStruct_ov12_022380DC * param0, int param1)
{
    UnkStruct_02008A90 * v0;
    int v1;
    int v2;
    int v3;
    int v4;
    u32 v5;
    int v6;

    sub_02008A0C(param0->unk_18[param0->unk_00]);

    v0 = sub_02008A90(param0->unk_18[param0->unk_00]);
    v1 = param0->unk_28[param0->unk_00];
    v2 = param0->unk_30[param0->unk_00];
    v4 = param0->unk_38[param0->unk_00];
    v5 = param0->unk_3C[param0->unk_00];

    if (param0->unk_4C[param0->unk_00] & 0x1) {
        v3 = 2;
    } else {
        v3 = 0;
    }

    sub_02013750(v0->unk_00, v0->unk_02, param1, param0->unk_08[param0->unk_00]->unk_00, v5, 0, v3, v0->unk_06);

    param0->unk_08[param0->unk_00]->unk_04 = v0->unk_00;
    param0->unk_08[param0->unk_00]->unk_08 = v0->unk_04;
    param0->unk_08[param0->unk_00]->unk_0C = sub_02076648(v1, v2, v3, v4, v5);

    v6 = ov12_022384CC(param0->unk_4C[param0->unk_00], 1) + param0->unk_08[param0->unk_00]->unk_0C;

    sub_02007DEC(param0->unk_18[param0->unk_00], 1, v6);
}

void ov12_02238390 (UnkStruct_ov12_022380DC * param0, int param1)
{
    UnkStruct_02008A90 v0;
    UnkStruct_02008A90 * v1;
    int v2;
    int v3;
    u8 v4;

    sub_020089B0(param0->unk_18[param0->unk_00]);

    v0.unk_00 = 117;
    v0.unk_04 = 250;
    v0.unk_06 = 0;
    v0.unk_08 = 0;
    v0.unk_0C = 0;

    if (param0->unk_4C[param0->unk_00] & 0x1) {
        v0.unk_02 = 249;
        v3 = 135;
    } else {
        v0.unk_02 = 248;
        v3 = 134;
    }

    v1 = sub_02008A90(param0->unk_18[param0->unk_00]);
    *v1 = v0;

    sub_020089A0(param0->unk_18[param0->unk_00]);
    sub_02013610(v1->unk_00, v1->unk_02, param1, param0->unk_08[param0->unk_00]->unk_00);

    param0->unk_08[param0->unk_00]->unk_04 = v0.unk_00;
    param0->unk_08[param0->unk_00]->unk_08 = v0.unk_04;

    NARC_ReadWholeMemberByIndexPair(&v4, NARC_INDEX_POKETOOL__POKEGRA__HEIGHT_O, v3);
    param0->unk_08[param0->unk_00]->unk_0C = v4;
    v2 = ov12_022384CC(param0->unk_4C[param0->unk_00], 1) + param0->unk_08[param0->unk_00]->unk_0C;

    sub_02007DEC(param0->unk_18[param0->unk_00], 1, v2);

    if (param0->unk_4C[param0->unk_00] & 0x1) {
        sub_02007DEC(param0->unk_18[param0->unk_00], 46, 1);
        sub_02007DEC(param0->unk_18[param0->unk_00], 20, v2 + (36 - v4));
        sub_02007DEC(param0->unk_18[param0->unk_00], 21, 0);
        sub_02007DEC(param0->unk_18[param0->unk_00], 22, 36 - v4);
        sub_02007DEC(param0->unk_18[param0->unk_00], 41, 0);
    }
}

s16 ov12_022384CC (int param0, int param1)
{
    if (param1 == 0) {
        return Unk_ov12_0223B0A0[param0][0];
    } else {
        return Unk_ov12_0223B0B8[param0][param1];
    }
}
