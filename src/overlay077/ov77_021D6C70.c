#include <nitro.h>
#include <string.h>

#include "struct_decls/struct_02007768_decl.h"
#include "struct_decls/struct_02007C7C_decl.h"
#include "struct_decls/struct_02014014_decl.h"
#include "struct_decls/struct_020203AC_decl.h"

#include "struct_defs/struct_02008A90.h"

#include "spl.h"

#include "unk_0200762C.h"
#include "unk_0201378C.h"
#include "unk_02014000.h"
#include "heap.h"
#include "unk_02020020.h"
#include "unk_0202419C.h"
#include "unk_02073C2C.h"
#include "overlay077/ov77_021D6C70.h"

typedef struct UnkStruct_ov77_021D6CFC_t {
    UnkStruct_02007768 * unk_00;
    UnkStruct_02007C7C * unk_04[3];
    BOOL unk_10;
    void * unk_14;
    UnkStruct_02014014 * unk_18;
    int unk_1C[3];
    u8 unk_28;
    u8 unk_29;
} UnkStruct_ov77_021D6CFC;

typedef struct {
    int unk_00;
    int unk_04;
} UnkStruct_ov77_021D7958;

typedef BOOL (* UnkFuncPtr_ov77_021D7940)(UnkStruct_ov77_021D6CFC *, const u8);

typedef struct {
    UnkFuncPtr_ov77_021D7940 unk_00;
    UnkFuncPtr_ov77_021D7940 unk_04;
} UnkStruct_ov77_021D7940;

static void ov77_021D725C(void);
static void ov77_021D7268(UnkSPLStruct6 * param0);
static BOOL ov77_021D7004(UnkStruct_ov77_021D6CFC * param0, const u8 param1);
static BOOL ov77_021D7074(UnkStruct_ov77_021D6CFC * param0, const u8 param1);
static BOOL ov77_021D70CC(UnkStruct_ov77_021D6CFC * param0, const u8 param1);
static BOOL ov77_021D713C(UnkStruct_ov77_021D6CFC * param0, const u8 param1);
static BOOL ov77_021D7194(UnkStruct_ov77_021D6CFC * param0, const u8 param1);
static BOOL ov77_021D7204(UnkStruct_ov77_021D6CFC * param0, const u8 param1);

static const UnkStruct_ov77_021D7958 Unk_ov77_021D7958[3] = {
    {0x5C, 0xC0},
    {0xE0, 0xC0},
    {0x50, 0xC0}
};

static u32 ov77_021D6C70 (u32 param0, BOOL param1)
{
    u32 v0;
    NNSGfdTexKey v1;

    v1 = NNS_GfdAllocTexVram(param0, param1, 0);
    sub_020145B4(v1);

    GF_ASSERT(v1 != NNS_GFD_ALLOC_ERROR_TEXKEY);

    v0 = NNS_GfdGetTexKeyAddr(v1);

    return v0;
}

static u32 ov77_021D6C94 (u32 param0, BOOL param1)
{
    NNSGfdPlttKey v0;
    u32 v1;

    v0 = NNS_GfdAllocPlttVram(param0, param1, NNS_GFD_ALLOC_FROM_LOW);

    if (v0 == NNS_GFD_ALLOC_ERROR_PLTTKEY) {
        GF_ASSERT(FALSE);
    }

    sub_020145F4(v0);

    v1 = NNS_GfdGetPlttKeyAddr(v0);

    return v1;
}

const int ov77_021D6CB8 (void)
{
    return sizeof(UnkStruct_ov77_021D6CFC);
}

UnkStruct_02014014 * ov77_021D6CBC (UnkStruct_ov77_021D6CFC * param0)
{
    GF_ASSERT(param0 != NULL && param0->unk_18 != NULL);
    return param0->unk_18;
}

UnkSPLStruct6 * ov77_021D6CD0 (UnkStruct_ov77_021D6CFC * param0, int param1)
{
    GF_ASSERT(param0 != NULL && param0->unk_18 != NULL);

    sub_02014788(param0->unk_18, 1);
    return sub_020146F4(param0->unk_18, param1, NULL, NULL);
}

void ov77_021D6CFC (UnkStruct_ov77_021D6CFC * param0)
{
    u8 v0;
    UnkStruct_02008A90 v1;
    UnkStruct_020203AC * v2;
    void * v3;
    int v4[3] = {389, 392, 395};
    int v5[3];
    int v6, v7;
    RTCTime v8;

    sub_02013880(&v8);

    v6 = (v8.hour * v8.minute + v8.second) & 1;
    v7 = v8.second % 3;

    for (v0 = 0; v0 < 3; v0++) {
        v5[v0] = v4[v7];
        param0->unk_1C[v0] = v7;

        if (v6) {
            v7++;
        } else {
            v7--;
        }

        if (v7 >= 3) {
            v7 = 0;
        } else if (v7 < 0) {
            v7 = 3 - 1;
        }
    }

    param0->unk_00 = sub_0200762C(76);

    for (v0 = 0; v0 < 3; v0++) {
        sub_02075FB4(&v1, v5[v0], 0, 2, 0, NULL, NULL);
        param0->unk_04[v0] = sub_02007C34(param0->unk_00, &v1, Unk_ov77_021D7958[param0->unk_1C[v0]].unk_00, Unk_ov77_021D7958[param0->unk_1C[v0]].unk_04, 1023, v0, NULL, NULL);
        sub_02007DEC(param0->unk_04[v0], 6, 1);
    }

    param0->unk_10 = 1;

    sub_02014000();

    param0->unk_14 = Heap_AllocFromHeap(76, 0x4800);
    param0->unk_18 = sub_02014014(ov77_021D6C70, ov77_021D6C94, param0->unk_14, 0x4800, 1, 76);
    v2 = sub_02014784(param0->unk_18);

    sub_020206BC((FX32_ONE), (FX32_ONE * 900), v2);

    v3 = sub_020144C4(61, 4, 76);
    sub_020144CC(param0->unk_18, v3, (1 << 1) | (1 << 3), 1);
}

void ov77_021D6E28 (UnkStruct_ov77_021D6CFC * param0)
{
    sub_0201411C(param0->unk_18);
    Heap_FreeToHeap(param0->unk_14);
    sub_02007B6C(param0->unk_00);
}

void ov77_021D6E40 (UnkStruct_ov77_021D6CFC * param0)
{
    if (param0 != NULL) {
        sub_02008A94(param0->unk_00);
    }
}

void ov77_021D6E50 (UnkStruct_ov77_021D6CFC * param0)
{
    if (param0 != NULL) {
        NNS_G3dGeFlushBuffer();
        sub_020241B4();
        NNS_G2dSetupSoftwareSpriteCamera();
        sub_02007768(param0->unk_00);
        ov77_021D725C();
        sub_020241BC(GX_SORTMODE_MANUAL, GX_BUFFERMODE_Z);
    }
}

static const UnkStruct_ov77_021D7940 Unk_ov77_021D7940[3] = {
    {ov77_021D7004, ov77_021D7074},
    {ov77_021D70CC, ov77_021D713C},
    {ov77_021D7194, ov77_021D7204}
};

static const int Unk_ov77_021D7970[3][3] = {
    {0x6, 0x7, 0x8},
    {0x3, 0x4, 0x5},
    {0x0, 0x1, 0x2}
};

BOOL ov77_021D6E78 (UnkStruct_ov77_021D6CFC * param0, const u8 param1, const int param2)
{
    u8 * v0 = &param0->unk_28;

    switch (*v0) {
    case 0:
        G2_SetWndOutsidePlane(GX_WND_PLANEMASK_BG0 | GX_WND_PLANEMASK_OBJ, 1);
        sub_02007DEC(param0->unk_04[param1], 12, 0x400);
        sub_02007DEC(param0->unk_04[param1], 13, 0x400);
        sub_02007DEC(param0->unk_04[param1], 6, 0);
        (*v0)++;
    case 1:
        if (Unk_ov77_021D7940[param0->unk_1C[param1]].unk_00(param0, param1)) {
            param0->unk_29 = 0;
            (*v0)++;
        }
        break;
    case 2:
        sub_02014788(param0->unk_18, 1);
        sub_020146F4(param0->unk_18, Unk_ov77_021D7970[param0->unk_1C[param1]][0], ov77_021D7268, param0->unk_04[param1]);
        sub_020146F4(param0->unk_18, Unk_ov77_021D7970[param0->unk_1C[param1]][1], ov77_021D7268, param0->unk_04[param1]);
        sub_020146F4(param0->unk_18, Unk_ov77_021D7970[param0->unk_1C[param1]][2], ov77_021D7268, param0->unk_04[param1]);
        (*v0)++;
        break;
    case 3:
        if (sub_02014710(param0->unk_18) == 0) {
            G2_SetWndOutsidePlane(GX_WND_PLANEMASK_OBJ, 1);
            (*v0)++;
        }
        break;
    case 4:
        if (Unk_ov77_021D7940[param0->unk_1C[param1]].unk_04(param0, param1)) {
            sub_02007DEC(param0->unk_04[param1], 6, 1);
            param0->unk_29 = 0;
            (*v0)++;
        }
        break;
    case 5:
        param0->unk_29++;

        if (param0->unk_29 >= 20) {
            param0->unk_29 = 0;
            (*v0) = 0;
            return 1;
        }
    }

    return 0;
}

static BOOL ov77_021D7004 (UnkStruct_ov77_021D6CFC * param0, const u8 param1)
{
    UnkStruct_02007C7C * v0 = param0->unk_04[param1];

    sub_02008274(v0, 0, 6);
    sub_02008274(v0, 1, -16);

    sub_02008274(v0, 12, -0x80);
    sub_02008274(v0, 13, -0x80);

    param0->unk_29++;

    if (param0->unk_29 >= 6) {
        sub_02007DEC(v0, 12, 0x100);
        sub_02007DEC(v0, 13, 0x100);
        return 1;
    }

    return 0;
}

static BOOL ov77_021D7074 (UnkStruct_ov77_021D6CFC * param0, const u8 param1)
{
    UnkStruct_02007C7C * v0 = param0->unk_04[param1];

    sub_02008274(v0, 0, -3);
    sub_02008274(v0, 1, -18);

    param0->unk_29++;

    if (param0->unk_29 >= 6) {
        sub_02007DEC(v0, 12, 0x100);
        sub_02007DEC(v0, 13, 0x100);
        return 1;
    }

    return 0;
}

static BOOL ov77_021D70CC (UnkStruct_ov77_021D6CFC * param0, const u8 param1)
{
    UnkStruct_02007C7C * v0 = param0->unk_04[param1];

    sub_02008274(v0, 0, -16);
    sub_02008274(v0, 1, -16);

    sub_02008274(v0, 12, -0x80);
    sub_02008274(v0, 13, -0x80);

    param0->unk_29++;

    if (param0->unk_29 >= 6) {
        sub_02007DEC(v0, 12, 0x100);
        sub_02007DEC(v0, 13, 0x100);
        return 1;
    }

    return 0;
}

static BOOL ov77_021D713C (UnkStruct_ov77_021D6CFC * param0, const u8 param1)
{
    UnkStruct_02007C7C * v0 = param0->unk_04[param1];

    sub_02008274(v0, 0, -6);
    sub_02008274(v0, 1, -16);

    param0->unk_29++;

    if (param0->unk_29 >= 6) {
        sub_02007DEC(v0, 12, 0x100);
        sub_02007DEC(v0, 13, 0x100);
        return 1;
    }

    return 0;
}

static BOOL ov77_021D7194 (UnkStruct_ov77_021D6CFC * param0, const u8 param1)
{
    UnkStruct_02007C7C * v0 = param0->unk_04[param1];

    sub_02008274(v0, 0, 8);
    sub_02008274(v0, 1, -16);

    sub_02008274(v0, 12, -0x80);
    sub_02008274(v0, 13, -0x80);

    param0->unk_29++;

    if (param0->unk_29 >= 6) {
        sub_02007DEC(v0, 12, 0x100);
        sub_02007DEC(v0, 13, 0x100);
        return 1;
    }

    return 0;
}

static BOOL ov77_021D7204 (UnkStruct_ov77_021D6CFC * param0, const u8 param1)
{
    UnkStruct_02007C7C * v0 = param0->unk_04[param1];

    sub_02008274(v0, 0, 6);
    sub_02008274(v0, 1, -20);

    param0->unk_29++;

    if (param0->unk_29 >= 6) {
        sub_02007DEC(v0, 12, 0x100);
        sub_02007DEC(v0, 13, 0x100);
        return 1;
    }

    return 0;
}

static void ov77_021D725C (void)
{
    int v0;

    v0 = sub_0201469C();

    sub_020146C0();
}

static void ov77_021D7268 (UnkSPLStruct6 * param0)
{
    UnkStruct_02007C7C * v0 = sub_02014764();
    VecFx32 v1 = {0, 0, 0};

    v1.x = 172 * (sub_020080C0(v0, 0) - 128);
    v1.y = 172 * (sub_020080C0(v0, 1) - 96);
    v1.z = 0x40;

    SPL_UnkInline1(param0, &v1);
}
