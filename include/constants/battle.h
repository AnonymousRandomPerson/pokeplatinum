#ifndef POKEPLATINUM_CONSTANTS_BATTLE_H
#define POKEPLATINUM_CONSTANTS_BATTLE_H

#define BATTLE_TYPE_SINGLES         (0 << 0)
#define BATTLE_TYPE_WILD_MON        (0 << 0)
#define BATTLE_TYPE_TRAINER         (1 << 0)
#define BATTLE_TYPE_DOUBLES         (1 << 1)
#define BATTLE_TYPE_LINK            (1 << 2)
#define BATTLE_TYPE_2vs2            (1 << 3) // This is, explicitly, two distinct battlers on each side
#define BATTLE_TYPE_TAG             (1 << 4) // This is, explicitly, a battle with a partner
#define BATTLE_TYPE_SAFARI          (1 << 5)
#define BATTLE_TYPE_AI              (1 << 6)
#define BATTLE_TYPE_FRONTIER        (1 << 7)
#define BATTLE_TYPE_ROAMER          (1 << 8)
#define BATTLE_TYPE_PAL_PARK        (1 << 9)
#define BATTLE_TYPE_CATCH_TUTORIAL  (1 << 10)
#define BATTLE_TYPE_DEBUG           (1 << 31)

#define BATTLE_TYPE_AI_PARTNER      (BATTLE_TYPE_DOUBLES | BATTLE_TYPE_2vs2 | BATTLE_TYPE_AI)
#define BATTLE_TYPE_SPECIAL_WILD    (BATTLE_TYPE_SAFARI | BATTLE_TYPE_ROAMER | BATTLE_TYPE_PAL_PARK | BATTLE_TYPE_CATCH_TUTORIAL)

#define MAX_LINK_BATTLERS       4
#define MAX_BATTLERS            4
#define NUM_BATTLE_SIDES        2
#define MAX_BATTLERS_PER_SIDE   2

#define BATTLE_IO_QUEUE_SIZE    16
#define BATTLE_IO_BUFFER_SIZE   256
#define BATTLE_SCRIPT_SIZE_MAX  400
#define BATTLE_SCRIPT_STACK_MAX 4

#define MAX_OPPONENTS     2
#define MAX_TRAINER_ITEMS 4

enum BattleActions {
    BATTLE_ACTION_PICK_COMMAND = 0,
    BATTLE_ACTION_CHOOSE_TARGET,
    BATTLE_ACTION_TEMP_VALUE,
    BATTLE_ACTION_SELECTED_COMMAND,

    MAX_BATTLE_ACTIONS
};

#endif // POKEPLATINUM_CONSTANTS_BATTLE_H
