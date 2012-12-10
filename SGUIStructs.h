/*!
 * Defender Map Editor -- SGUIStructs.h
 * Part of GUI lib.
 */
#ifndef __SGUISTRUCTS_H__
#define __SGUISTRUCTS_H__

enum E_ASSET_TYPE
{
    // nieaktualne, do zrealizowania przy pomocy dziedziczenia.
    EAT_MOB,
    EAT_SPAWNER,
    EAT_AUDIO,
    EAT_BULLET,
    EAT_TURRET
};

enum E_ALIGN_H
{
    EAH_LEFT,
    EAH_CENTER, //Nie obslugiwane
    EAH_RIGHT
};

enum E_ALIGN_V
{
    EAV_TOP,
    EAV_MIDDLE, //Nie obslugiwane
    EAV_BOTTOM
};


#endif
