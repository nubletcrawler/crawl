#pragma once

enum potion_type
{
    POT_CURING,
    POT_HEAL_WOUNDS,
    POT_HASTE,
    POT_MIGHT,
    POT_BRILLIANCE,
    POT_AGILITY,
#if TAG_MAJOR_VERSION == 34
    POT_GAIN_STRENGTH,
    POT_GAIN_DEXTERITY,
    POT_GAIN_INTELLIGENCE,
#endif
    POT_FLIGHT,
#if TAG_MAJOR_VERSION == 34
    POT_POISON,
    POT_SLOWING,
#endif
    POT_CANCELLATION,
    POT_AMBROSIA,
    POT_INVISIBILITY,
#if TAG_MAJOR_VERSION == 34
    POT_PORRIDGE,
#endif
    POT_DEGENERATION,
#if TAG_MAJOR_VERSION == 34
    POT_DECAY,
    POT_WATER,
#endif
    POT_EXPERIENCE,
    POT_MAGIC,
    POT_RESTORE_ABILITIES,
#if TAG_MAJOR_VERSION == 34
    POT_STRONG_POISON,
#endif
    POT_BERSERK_RAGE,
#if TAG_MAJOR_VERSION == 34
    POT_CURE_MUTATION,
#endif
    POT_MUTATION,
    POT_RESISTANCE,
    POT_BLOOD,
#if TAG_MAJOR_VERSION == 34
    POT_BLOOD_COAGULATED,
#endif
    POT_LIGNIFY,
#if TAG_MAJOR_VERSION == 34
    POT_BENEFICIAL_MUTATION,
#endif
    NUM_POTIONS
};
