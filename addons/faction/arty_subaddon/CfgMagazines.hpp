class CfgMagazines
{
    class 32Rnd_155mm_Mo_shells;
    class GerRng_8Rnd_120mm_Flare_White: 32Rnd_155mm_Mo_shells
    {
        ammo = "Flare_82mm_AMOS_White_Illumination";
        author = "Cookie";
        count = 8;
        descriptionShort = "";
        displayName = CSTRING(120mm_illum);
        displayNameMFDFormat = "HE";
        displayNameShort = CSTRING(120mm_illum_short);
    };

    class GerRng_8Rnd_120mm_Guided_HE: 32Rnd_155mm_Mo_shells
    {
        ammo = "Sh_155mm_AMOS_guided";
        author = "Cookie";
        count = 8;
        descriptionShort = "";
        displayName = CSTRING(120mm_guided_he);
        displayNameMFDFormat = "HE GUIDED";
        displayNameShort = CSTRING(120mm_guided_he_short);
    };

    class GerRng_8Rnd_120mm_Laser_Guided_HE: 32Rnd_155mm_Mo_shells
    {
        ammo = "Sh_155mm_AMOS_LG";
        author = "Cookie";
        count = 8;
        descriptionShort = "";
        displayName = CSTRING(120mm_laser_guided_he);
        displayNameMFDFormat = "HE LASER";
        displayNameShort = CSTRING(120mm_laser_guided_he_short);
    };
};
