
class CfgPatches
{
  class jb_enhanced_mags
  {
    units[] = {};
    weapons[] = {};
    requiredAddons[] = {"A3_Weapons_F"};
    requiredVersion = 1;
  };
};

class CfgMagazines
{
  class CA_Magazine;
  class CA_LauncherMagazine: CA_Magazine {};

  class RPG32_F: CA_LauncherMagazine {};
  class RPG32_HE_F: RPG32_F {};

  class RPG32_NOMOD_F: RPG32_F
  {
    ammo = "R_PG32V_NOMOD_F";
    descriptionShort = "Type: RPG-42 rocket (No Mod)<br />Rounds: 1<br />Used in: RPG-42";
    displayName = "RPG-42 Rocket (No Mod)";
  };

  class RPG32_HE_NOMOD_F: RPG32_HE_F
  {
    ammo = "R_TBG32V_NOMOD_F";
    descriptionShort = "Type: RPG-42 HE rocket (No Mod)<br />Rounds: 1<br />Used in: RPG-42";
    displayName = "RPG-42 HE Rocket (No Mod)";
  };
};
