
class CfgPatches
{
  class jb_enhanced_launchers_air
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
    airLock = 1;
  };

  class R_TBG32V_F: R_PG32V_F {};

  class R_PG32V_NOMOD_F: R_PG32V_F
  {
    airLock = 0;
  };

  class R_TBG32V_NOMOD_F: R_TBG32V_F
  {
    airLock = 0;
  };

};
