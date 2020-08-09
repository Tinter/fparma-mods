class CfgMovesBasic {
    class ManActions {
        acre_radio_helmet = "acre_radio_helmet";
        acre_radio_helmet_NoADS = "acre_radio_helmet_NoADS";

        acre_radio_vest = "acre_radio_vest";
        acre_radio_vest_NoADS = "acre_radio_vest_NoADS";

        acre_radio_stop = "acre_radio_stop";
    };
    class Actions {
        class Default;
        class NoActions: ManActions {
            acre_radio_helmet[] = {"acre_radio_helmet", "Gesture"};
            acre_radio_helmet_NoADS[] = {"acre_radio_helmet_NoADS", "Gesture"};

            acre_radio_vest[] = {"acre_radio_vest", "Gesture"};
            acre_radio_vest_NoADS[] = {"acre_radio_vest_NoADS", "Gesture"};

            acre_radio_stop[] = {"acre_radio_stop", "Gesture"};
        };
    };
};

class CfgGesturesMale {
    skeletonName = "OFP2_ManSkeleton";
    class Default;
    class States {
        class acre_radio_base: Default {
            canPullTrigger = 1;
            canReload = 0;
            connectAs = "";
            connectFrom[] = {};
            connectTo[] = {};
            disableWeapons = 0;
            disableWeaponsLong = 0;
            enableBinocular = 1;
            enableMissile = 1;
            enableOptics = 1;
            equivalentTo = "";
            forceAim = 0;
            headBobMode = 0;
            headBobStrength = 0;
            interpolateFrom[] = {};
            interpolateTo[] = {};
            interpolateWith[] = {};
            interpolationRestart = 0;
            interpolationSpeed = 6;
            limitGunMovement = 0;
            looped = 0;
            minPlayTime = 0.5;
            preload = 1;
            ragdoll = 0;
            relSpeedMax = 1;
            relSpeedMin = 1;
            showHandGun = 0;
            showItemInHand = 0;
            showItemInRightHand = 0;
            showWeaponAim = 1;
            soundEdge[] = {0.5, 1};
            soundEnabled = 1;
            soundOverride = "";
            speed = 0.3;
            static = 0;
            terminal = 0;
            Walkcycles = 1;
            weaponLowered = 0;
            leftHandIKBeg = 0;
            leftHandIKCurve[] = {0};
            leftHandIKEnd = 0;
            rightHandIKBeg = 1;
            rightHandIKCurve[] = {1};
            rightHandIKEnd = 1;
        };

        class acre_radio_helmet: acre_radio_base {
            file = "a3\anims_f_epa\data\anim\sdr\cts\custom\a_in\acts_listeningtoradioloop.rtm";
            minPlayTime = 2;
            mask = "acre_UpperBodyNoRArm";
        };
        class acre_radio_helmet_NoADS: acre_radio_helmet {
            enableOptics = 0;
        };

        class acre_radio_vest: acre_radio_base {
            file = "a3\anims_f_bootcamp\data\anim\sdr\cts\acts_kore_talkingoverradio_loop.rtm";
            mask = "acre_UpperBodyNoRArm";
        };
        class acre_radio_vest_NoADS: acre_radio_vest {
            enableOptics = 0;
        };

        class GestureNod;
        class acre_radio_stop: GestureNod {
            file = "a3\anims_f\data\anim\sdr\gst\gestureEmpty.rtm";
            disableWeaponsLong = 0;
            enableBinocular = 1;
            enableMissile = 1;
            enableOptics = 1;
        };
    };

    class BlendAnims {
        acre_UpperBodyNoRArm[] = {
            "Weapon",0,"Pelvis",0,"Spine",0,"Spine1",0,"Spine2",0,"Spine3",0,"Camera",0,"launcher",0,"weapon",0,"launcher",0,"neck",0,"neck1",0,"head",0,
            "LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,
            "RightShoulder",0,"RightArm",0,"RightArmRoll",0,"RightForeArm",0,"RightForeArmRoll",0,"RightHand",0,
            "LeftUpLeg",0,"LeftUpLegRoll",0,"LeftLeg",0,"LeftLegRoll",0,"LeftFoot",0,"LeftToeBase",0,
            "RightUpLeg",0,"RightUpLegRoll",0,"RightLeg",0,"RightLegRoll",0,"RightFoot",0,"RightToeBase",0,
            "LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,
            "RightHandIndex1",0,"RightHandIndex2",0,"RightHandIndex3",0,"RightHandMiddle1",0,"RightHandMiddle2",0,"RightHandMiddle3",0,"RightHandPinky1",0,"RightHandPinky2",0,"RightHandPinky3",0,"RightHandThumb1",0,"RightHandThumb2",0,"RightHandThumb3",0
        };
    };
};
