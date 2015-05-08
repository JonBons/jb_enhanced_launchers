# jb_enhanced_launchers
Arma 3 Enhanced Launchers Mod

![Media](https://i.imgur.com/OBRj3BV.jpg)

This mods the vanilla RPG 42 rockets to include a fly-by/whistle sound and it also modifies the RPG 42 rockets to allow for AI to use the round against infantry and air units which when combined with the new sounds create more interesting scenarios in coop.

The mod modifies the following CfgAmmo classnames:
* R_PG32V_F
* R_TBG32V_F

The mod adds the following config classnames:
* CfgAmmo
  * R_PG32V_NOMOD_F
  * R_TBG32V_NOMOD_F
* CfgMagazines (addMagazine or addMagazineCargo)
  * RPG32_NOMOD_F
    * This variant of the RPG 42 AP rocket is NOT allowed to be used against infantry and air units.
  * RPG32_HE_NOMOD_F
    * This variant of the RPG 42 HE rocket is NOT allowed to be used against infantry and air units.
