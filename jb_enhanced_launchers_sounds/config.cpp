class CfgPatches
{
  class jb_enhanced_launchers_sounds
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
    soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",6,1.5,400};
    whistleDist = 24;
  };

  class R_TBG32V_F: R_PG32V_F {};

};
