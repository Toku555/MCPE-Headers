#pragma once
namespace Options{
	class Option{
		public:
		void ~Option();
		Options(std::string const&);
		void _formatDescriptionString(char const*,char const**,int);
		void _initDefaultValues(void);
		void _load(void);
		void _readBool(std::string const&,bool &);
		void _readFloat(std::string const&,float &);
		void _readInt(std::string const&,int &);
		void _renderDistanceLevels(void);
		void _setDifficulty(int);
		void canModify(Options::Option const*);
		void checkVersionUpdate(void);
		void getAutoJump(void);
		void getAutomationServerRetryTime(void);
		void getBobView(void);
		void getBooleanValue(Options::Option const*);
		void getCameraSpeed(void);
		void getDescription(Options::Option const*,std::string);
		void getDestroyVibration(void);
		void getDevAutoLoadLevel(void);
		void getDevDisableFileSystem(void);
		void getDevRenderBoundingBoxes(void);
		void getDevRenderGoalState(void);
		void getDevRenderPaths(void);
		void getDevResetClientId(void);
		void getDevShowChunkMap(void);
		void getDifficulty(void);
		void getDpadScale(void);
		void getFancyGraphics(void);
		void getFancySkies(void);
		void getFieldOfView(void);
		void getFixedCamera(void);
		void getFlatWorldLayers(void);
		void getFlySpeed(void);
		void getFullscreen(void);
		void getGLDebug(void);
		void getGamePadCustomMap(void);
		void getGameSensitivity(void);
		void getGamma(void);
		void getGuiScale(void);
		void getHMDPositionDisplacement(void);
		void getHandObjectSortsWithTerrain(void);
		void getHideGui(void);
		void getIntValue(Options::Option const*);
		void getInvertYMouse(void);
		void getKeyboardLayout(void);
		void getLanguage(void);
		void getLastBetaVersion(void);
		void getLastCustomSkinId(void);
		void getLastMajorVersion(void);
		void getLastMinorVersion(void);
		void getLastPatchVersion(void);
		void getLimitFramerate(void);
		void getLimitWorldSize(void);
		void getMSAA(void);
		void getMaxViewDistanceChunks(void);
		void getMessage(Options::Option const*);
		void getMultiPlayerGame(void);
		void getMusic(void);
		void getParticleViewDistance(void);
		void getPlayerViewPerspective(void);
		void getPpmDpadSizeOld(void);
		void getPreferPolyTessellation(void);
		void getProgressMax(Options::Option const*);
		void getProgressMin(Options::Option const*);
		void getProgressValue(Options::Option const*);
		void getRenderDebug(void);
		void getResetPlayerAlignment(void);
		void getSensitivity(void);
		void getServerVisible(void);
		void getSkinId(void);
		void getSmoothCamera(void);
		void getSound(void);
		void getSplitControls(void);
		void getStereoRendering(void);
		void getStringValue(Options::Option const*);
		void getStutterConstantTimeMode(void);
		void getStutterTurn(void);
		void getStutterTurnSound(void);
		void getSwapJumpAndSneak(void);
		void getTexelAA(void);
		void getTransparentLeaves(void);
		void getUseMouseForDigging(void);
		void getUseTouchScreen(void);
		void getUsername(void);
		void getVRGazePitchBoost(void);
		void getVRHeadSteering(void);
		void getVRHudAtTop(void);
		void getVRHudDrifts(void);
		void getVRJoystickAim(void);
		void getVRJoystickAimInvertY(void);
		void getVRJoystickAimSensitivity(void);
		void getVRLinearJump(void);
		void getVRLinearMotion(void);
		void getVRLivingRoomMode(void);
		void getVROptionsComfortControls(void);
		void getVRRightStickDeadBand(void);
		void getVRRightStickGazeAdjust(void);
		void getVRRightStickPitchAssist(void);
		void getVRRightStickPitchAssistSteppings(void);
		void getVRRightStickPitchMaxAngle(void);
		void getVRShowComfortSelectScreen(void);
		void getVRStickyMining(void);
		void getVRUsesNormalHitEffect(void);
		void getVRUsesRedFlashForHitEffect(void);
		void getViewDistanceChunks(void);
		void getXboxLiveVisible(void);
		void hideOption(Options::Option const*);
		void isFlying(void);
		void isLeftHanded(void);
		void onScreenSizeChanged(int,int);
		void save(void);
		void set(Options::Option const*,std::string const&);
		void setAdditionalHiddenOptions(std::vector<Options::Option const*,std::allocator<Options::Option const*>> const&);
		void setAutoJump(bool);
		void setAutomationServerRetryTime(float);
		void setBobView(bool);
		void setCameraSpeed(float);
		void setDestroyVibration(bool);
		void setDevAutoLoadLevel(bool);
		void setDevDisableFileSystem(bool);
		void setDevRenderBoundingBoxes(bool);
		void setDevRenderGoalState(bool);
		void setDevRenderPaths(bool);
		void setDevResetClientId(bool);
		void setDevShowChunkMap(bool);
		void setDifficulty(int);
		void setDpadScale(float);
		void setFancyGraphics(bool);
		void setFancySkies(bool);
		void setFieldOfView(float);
		void setFixedCamera(bool);
		void setFlatWorldLayers(std::string const&);
		void setFlySpeed(float);
		void setFullscreen(bool);
		void setGamePadCustomMap(std::string const&);
		void setGameSensitivity(float);
		void setGamma(float);
		void setGlDebug(bool);
		void setGuiScale(int);
		void setHMDPositionDisplacement(bool);
		void setHandObjectSortsWithTerrain(bool);
		void setHideGui(bool);
		void setInvertYMouse(bool);
		void setIsFlying(bool);
		void setIsLeftHanded(bool);
		void setKeyboardLayout(int);
		void setLanguage(std::string const&);
		void setLastBetaVersion(int);
		void setLastCustomSkinId(std::string const&);
		void setLastMajorVersion(int);
		void setLastMinorVersion(int);
		void setLastPatchVersion(int);
		void setLimitFramerate(bool);
		void setLimitWorldSize(bool);
		void setMSAA(int);
		void setMultiPlayerGame(bool);
		void setMusic(float);
		void setParticleViewDistance(float);
		void setPlayerViewPerspective(int);
		void setPpmDpadSizeOld(float);
		void setPreferPolyTessellation(bool);
		void setRenderDebug(bool);
		void setResetPlayerAlignment(bool);
		void setSensitivity(float);
		void setServerVisible(bool);
		void setSkinId(std::string const&);
		void setSmoothCamera(bool);
		void setSound(float);
		void setSplitControls(bool);
		void setStereoRendering(bool);
		void setStutterConstantTimeMode(bool);
		void setStutterTurn(bool);
		void setStutterTurnSound(bool);
		void setSwapJumpAndSneak(bool);
		void setTexelAA(bool);
		void setTransparentLeaves(bool);
		void setUseMouseForDigging(bool);
		void setUseTouchScreen(bool);
		void setUsername(std::string const&);
		void setVRGazePitchBoost(bool);
		void setVRHeadSteering(bool);
		void setVRHudAtTop(bool);
		void setVRHudDrifts(bool);
		void setVRJoystickAim(bool);
		void setVRJoystickAimInvertY(bool);
		void setVRJoystickAimSensitivity(int);
		void setVRLinearJump(bool);
		void setVRLinearMotion(bool);
		void setVRLivingRoomMode(bool);
		void setVROptionsComfortControls(bool);
		void setVRRightStickDeadBand(bool);
		void setVRRightStickGazeAdjust(bool);
		void setVRRightStickPitchAssist(bool);
		void setVRRightStickPitchAssistSteppings(int);
		void setVRRightStickPitchMaxAngle(int);
		void setVRShowComfortSelectScreen(bool);
		void setVRStickyMining(bool);
		void setVRUsesNormalHitEffect(bool);
		void setVRUsesRedFlashForHitEffect(bool);
		void setViewDistanceChunks(int);
		void setXboxLiveVisible(bool);
		void unregisterLocks(void *);
		void unregisterObserver(void *);
		void updateGameSensitivity(void);
		void ~Options();
	}
};