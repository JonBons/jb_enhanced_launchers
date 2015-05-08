
class CfgPatches
{
  class jb_enhanced_launchers_infantry
  {
    units[] = {};
    weapons[] = {};
    requiredAddons[] = {"A3_Weapons_F"};
    requiredVersion = 1;
  };
};

class CfgAmmo
{
  class RocketCore;
  class RocketBase;

  class R_PG32V_F: RocketBase
  {
    allowAgainstInfantry = 1;
  };

  class R_TBG32V_F: R_PG32V_F {};

  class R_PG32V_NOMOD_F: R_PG32V_F
  {
    allowAgainstInfantry = 0;
  };

  class R_TBG32V_NOMOD_F: R_TBG32V_F
  {
    allowAgainstInfantry = 0;
  };

};
