/**
 * @file
 *
 * @author OmniBlade
 *
 * @brief Holds static mappings of names to a name key.
 *
 * @copyright Thyme is free software: you can redistribute it and/or
 *            modify it under the terms of the GNU General Public License
 *            as published by the Free Software Foundation, either version
 *            2 of the License, or (at your option) any later version.
 *            A full copy of the GNU General Public License can be found in
 *            LICENSE
 */
#pragma once

#include "always.h"
#include "namekeygenerator.h"

class StaticNameKey
{
public:
    StaticNameKey(const char *name) : m_key(NAMEKEY_INVALID), m_name(name) {}

    operator NameKeyType() { return Key(); }

    NameKeyType Key();
    const char *Name() { return m_name; }

private:
    NameKeyType m_key;
    const char *m_name;
};

#ifdef GAME_DLL
extern StaticNameKey &g_teamNameKey;
extern StaticNameKey &g_theInitialCameraPositionKey;
extern StaticNameKey &g_playerNameKey;
extern StaticNameKey &g_playerIsHumanKey;
extern StaticNameKey &g_playerDisplayNameKey;
extern StaticNameKey &g_playerFactionKey;
extern StaticNameKey &g_playerAlliesKey;
extern StaticNameKey &g_playerEnemiesKey;
extern StaticNameKey &g_teamOwnerKey;
extern StaticNameKey &g_teamIsSingletonKey;
extern StaticNameKey &g_objectInitialHealthKey;
extern StaticNameKey &g_objectEnabledKey;
extern StaticNameKey &g_objectIndestructibleKey;
extern StaticNameKey &g_objectUnsellableKey;
extern StaticNameKey &g_objectPoweredKey;
extern StaticNameKey &g_objectRecruitableAIKey;
extern StaticNameKey &g_objectTargetableKey;
extern StaticNameKey &g_originalOwnerKey;
extern StaticNameKey &g_uniqueIDKey;
extern StaticNameKey &g_waypointIDKey;
extern StaticNameKey &g_waypointNameKey;
extern StaticNameKey &g_weatherKey;
extern StaticNameKey &g_lightHeightAboveTerrainKey;
extern StaticNameKey &g_scorchTypeKey;
#else
extern StaticNameKey g_teamNameKey;
extern StaticNameKey g_theInitialCameraPositionKey;
extern StaticNameKey g_playerNameKey;
extern StaticNameKey g_playerIsHumanKey;
extern StaticNameKey g_playerDisplayNameKey;
extern StaticNameKey g_playerFactionKey;
extern StaticNameKey g_playerAlliesKey;
extern StaticNameKey g_playerEnemiesKey;
extern StaticNameKey g_teamOwnerKey;
extern StaticNameKey g_teamIsSingletonKey;
extern StaticNameKey g_objectInitialHealthKey;
extern StaticNameKey g_objectEnabledKey;
extern StaticNameKey g_objectIndestructibleKey;
extern StaticNameKey g_objectUnsellableKey;
extern StaticNameKey g_objectPoweredKey;
extern StaticNameKey g_objectRecruitableAIKey;
extern StaticNameKey g_objectTargetableKey;
extern StaticNameKey g_originalOwnerKey;
extern StaticNameKey g_uniqueIDKey;
extern StaticNameKey g_waypointIDKey;
extern StaticNameKey g_waypointNameKey;
extern StaticNameKey g_weatherKey;
extern StaticNameKey g_lightHeightAboveTerrainKey;
extern StaticNameKey g_scorchTypeKey;
#endif
