#pragma once
namespace Options{
	class Option{
		public:
		void ~Option();
		Options(std::string const&);
		Options(std::string const&);
		void _formatDescriptionString(char const*,char const**,int);
		void _initDefaultValues(void);
		void _initDefaultValues(void);
		void _load(void);
		void _load(void);
		void string>(Options::Option const*,std::string const&,std::vector<Options::OptionObserver<std::string>,std::allocator<Options::OptionObserver<std::string>>> const&);
		void string>(Options::Option const*,std::string const&,std::vector<Options::OptionObserver<std::string>,std::allocator<Options::OptionObserver<std::string>>> const&);
		void _readBool(std::string const&,bool &);
		void _readBool(std::string const&,bool &);
		void _readFloat(std::string const&,float &);
		void _readInt(std::string const&,int &);
		void _renderDistanceLevels(void);
		void _setDifficulty(int);
		void canModify(Options::Option const*);
		void canModify(Options::Option const*);
		void checkVersionUpdate(void);
		void checkVersionUpdate(void);
		void getAutoJump(void);
		void getAutoJump(void);
		void getAutomationServerRetryTime(void);
		void getBobView(void);
		void getBobView(void);
		void getBooleanValue(Options::Option const*);
		void getBooleanValue(Options::Option const*);
		void getCameraSpeed(void);
		void getCameraSpeed(void);
		void getDescription(Options::Option const*,std::string);
		void getDescription(Options::Option const*,std::string);
		void getDestroyVibration(void);
		void getDestroyVibration(void);
		void getDevAutoLoadLevel(void);
		void getDevAutoLoadLevel(void);
		void getDevConnectionQuality(void);
		void getDevConnectionQuality(void);
		void getDevCreateRealmWithoutPurchase(void);
		void getDevCreateRealmWithoutPurchase(void);
		void getDevDisableFileSystem(void);
		void getDevEnableProfilerOutput(void);
		void getDevEnableProfilerOutput(void);
		void getDevLogAppend(void);
		void getDevLogAppend(void);
		void getDevLogAreaFilter(void);
		void getDevLogAreaFilter(void);
		void getDevLogFlushImmediate(void);
		void getDevLogFlushImmediate(void);
		void getDevLogPriorityFilter(void);
		void getDevLogPriorityFilter(void);
		void getDevLogTimestamp(void);
		void getDevLogTimestamp(void);
		void getDevLogTrace(void);
		void getDevLogTrace(void);
		void getDevOffersUnlocked(void);
		void getDevRenderBoundingBoxes(void);
		void getDevRenderBoundingBoxes(void);
		void getDevRenderGoalState(void);
		void getDevRenderGoalState(void);
		void getDevRenderPaths(void);
		void getDevRenderPaths(void);
		void getDevResetClientId(void);
		void getDevResetClientId(void);
		void getDevShowChunkMap(void);
		void getDevShowChunkMap(void);
		void getDifficulty(void);
		void getDifficulty(void);
		void getDpadScale(void);
		void getDpadScale(void);
		void getFancyGraphics(void);
		void getFancyGraphics(void);
		void getFancySkies(void);
		void getFancySkies(void);
		void getFieldOfView(void);
		void getFieldOfView(void);
		void getFixedCamera(void);
		void getFixedCamera(void);
		void getFlatWorldLayers(void);
		void getFlySpeed(void);
		void getFlySpeed(void);
		void getFullscreen(void);
		void getFullscreen(void);
		void getGLDebug(void);
		void getGamePadCustomMap(ControllerType);
		void getGamePadCustomMap(ControllerType);
		void getGameSensitivity(void);
		void getGameSensitivity(void);
		void getGamma(void);
		void getGamma(void);
		void getGuiScale(void);
		void getGuiScale(void);
		void getHMDPositionDisplacement(void);
		void getHMDPositionDisplacement(void);
		void getHandObjectSortsWithTerrain(void);
		void getHasChosenNotToSignInToXbl(void);
		void getHasChosenNotToSignInToXbl(void);
		void getHasEverLoggedIntoXbl(void);
		void getHasEverLoggedIntoXbl(void);
		void getHideGui(void);
		void getHideGui(void);
		void getIntValue(Options::Option const*);
		void getIntValue(Options::Option const*);
		void getInvertYMouse(void);
		void getInvertYMouse(void);
		void getKeyboardLayout(void);
		void getKeyboardLayout(void);
		void getLanguage(void);
		void getLanguage(void);
		void getLastBetaVersion(void);
		void getLastCustomSkinId(void);
		void getLastCustomSkinId(void);
		void getLastMajorVersion(void);
		void getLastMinorVersion(void);
		void getLastPatchVersion(void);
		void getLimitFramerate(void);
		void getLimitFramerate(void);
		void getLimitWorldSize(void);
		void getLimitWorldSize(void);
		void getMSAA(void);
		void getMaxViewDistanceChunks(void);
		void getMaxViewDistanceChunks(void);
		void getMessage(Options::Option const*);
		void getMultiPlayerGame(void);
		void getMultiPlayerGame(void);
		void getMusic(void);
		void getMusic(void);
		void getParticleViewDistance(void);
		void getParticleViewDistance(void);
		void getPlayerViewPerspective(void);
		void getPlayerViewPerspective(void);
		void getPpmDpadSizeOld(void);
		void getPreferPolyTessellation(void);
		void getPreferPolyTessellation(void);
		void getProgressMax(Options::Option const*);
		void getProgressMax(Options::Option const*);
		void getProgressMin(Options::Option const*);
		void getProgressMin(Options::Option const*);
		void getProgressValue(Options::Option const*);
		void getProgressValue(Options::Option const*);
		void getRecentSkinIds(void);
		void getRecentSkinIds(void);
		void getRenderDebug(void);
		void getRenderDebug(void);
		void getResetPlayerAlignment(void);
		void getResetPlayerAlignment(void);
		void getSensitivity(void);
		void getSensitivity(void);
		void getServerVisible(void);
		void getServerVisible(void);
		void getSkinId(void);
		void getSkinId(void);
		void getSmoothCamera(void);
		void getSmoothCamera(void);
		void getSound(void);
		void getSound(void);
		void getSplitControls(void);
		void getSplitControls(void);
		void getStereoRendering(void);
		void getStereoRendering(void);
		void getStringValue(Options::Option const*);
		void getStringValue(Options::Option const*);
		void getStutterConstantTimeMode(void);
		void getStutterConstantTimeMode(void);
		void getStutterTurn(void);
		void getStutterTurn(void);
		void getStutterTurnSound(void);
		void getStutterTurnSound(void);
		void getSwapJumpAndSneak(void);
		void getSwapJumpAndSneak(void);
		void getTexelAA(void);
		void getTransparentLeaves(void);
		void getTransparentLeaves(void);
		void getUseLocalServer(void);
		void getUseLocalServer(void);
		void getUseMouseForDigging(void);
		void getUseMouseForDigging(void);
		void getUseTouchScreen(void);
		void getUseTouchScreen(void);
		void getUsername(void);
		void getUsername(void);
		void getVRGazePitchBoost(void);
		void getVRGazePitchBoost(void);
		void getVRHeadSteering(void);
		void getVRHeadSteering(void);
		void getVRHudAtTop(void);
		void getVRHudAtTop(void);
		void getVRHudDrifts(void);
		void getVRHudDrifts(void);
		void getVRJoystickAim(void);
		void getVRJoystickAim(void);
		void getVRJoystickAimInvertY(void);
		void getVRJoystickAimSensitivity(void);
		void getVRLinearJump(void);
		void getVRLinearJump(void);
		void getVRLinearMotion(void);
		void getVRLinearMotion(void);
		void getVRLivingRoomHintTime(void);
		void getVRLivingRoomHintTime(void);
		void getVRLivingRoomMode(void);
		void getVRLivingRoomMode(void);
		void getVROptionsComfortControls(void);
		void getVROptionsComfortControls(void);
		void getVRRightStickDeadBand(void);
		void getVRRightStickDeadBand(void);
		void getVRRightStickGazeAdjust(void);
		void getVRRightStickGazeAdjust(void);
		void getVRRightStickPitchAssist(void);
		void getVRRightStickPitchAssist(void);
		void getVRRightStickPitchAssistSteppings(void);
		void getVRRightStickPitchAssistSteppings(void);
		void getVRRightStickPitchMaxAngle(void);
		void getVRRightStickPitchMaxAngle(void);
		void getVRRollTurning(void);
		void getVRRollTurning(void);
		void getVRRollTurningSensitivity(void);
		void getVRShowComfortSelectScreen(void);
		void getVRShowComfortSelectScreen(void);
		void getVRStickyMining(void);
		void getVRStickyMining(void);
		void getVRTapTurn(void);
		void getVRTapTurn(void);
		void getVRTapTurningSensitivity(void);
		void getVRTapTurningSensitivity(void);
		void getVRUsesNormalHitEffect(void);
		void getVRUsesNormalHitEffect(void);
		void getVRUsesRedFlashForHitEffect(void);
		void getVRUsesRedFlashForHitEffect(void);
		void getValues(Options::Option const*);
		void getValues(Options::Option const*);
		void getViewDistanceChunks(void);
		void getViewDistanceChunks(void);
		void getXboxLiveVisible(void);
		void getXboxLiveVisible(void);
		void hideOption(Options::Option const*);
		void hideOption(Options::Option const*);
		void isFlying(void);
		void isFlying(void);
		void isLeftHanded(void);
		void isLeftHanded(void);
		void onScreenSizeChanged(int,int);
		void onScreenSizeChanged(int,int);
		void function<void ();
		void function<void ();
		void function<void ();
		void function<void ();
		void function<void ();
		void function<void ();
		void function<bool ();
		void function<bool ();
		void function<void ();
		void function<void ();
		void save(void);
		void save(void);
		void set(Options::Option const*,ControllerType,std::string const&);
		void set(Options::Option const*,ControllerType,std::string const&);
		void set(Options::Option const*,bool);
		void set(Options::Option const*,float);
		void set(Options::Option const*,int);
		void set(Options::Option const*,std::string const&);
		void set(Options::Option const*,std::string const&);
		void setAdditionalHiddenOptions(std::vector<Options::Option const*,std::allocator<Options::Option const*>> const&);
		void setAutoJump(bool);
		void setAutomationServerRetryTime(float);
		void setBobView(bool);
		void setCameraSpeed(float);
		void setDestroyVibration(bool);
		void setDevAutoLoadLevel(bool);
		void setDevConnectionQuality(DevConnectionQuality);
		void setDevCreateRealmWithoutPurchase(bool);
		void setDevDisableFileSystem(bool);
		void setDevEnableProfilerOutput(bool);
		void setDevLogAppend(bool);
		void setDevLogAppend(bool);
		void setDevLogFlushImmediate(bool);
		void setDevLogFlushImmediate(bool);
		void setDevLogTimestamp(bool);
		void setDevLogTimestamp(bool);
		void setDevLogTrace(bool);
		void setDevLogTrace(bool);
		void setDevOffersUnlocked(bool);
		void setDevRenderBoundingBoxes(bool);
		void setDevRenderBoundingBoxes(bool);
		void setDevRenderGoalState(bool);
		void setDevRenderGoalState(bool);
		void setDevRenderPaths(bool);
		void setDevRenderPaths(bool);
		void setDevResetClientId(bool);
		void setDevShowChunkMap(bool);
		void setDevShowChunkMap(bool);
		void setDifficulty(int);
		void setDpadScale(float);
		void setFancyGraphics(bool);
		void setFancySkies(bool);
		void setFieldOfView(float);
		void setFixedCamera(bool);
		void setFixedCamera(bool);
		void setFlatWorldLayers(std::string const&);
		void setFlySpeed(float);
		void setFullscreen(bool);
		void setGameSensitivity(float);
		void setGamma(float);
		void setGlDebug(bool);
		void setGuiScale(int);
		void setHMDPositionDisplacement(bool);
		void setHandObjectSortsWithTerrain(bool);
		void setHasChosenNotToSignInToXbl(bool);
		void setHasChosenNotToSignInToXbl(bool);
		void setHasEverLoggedIntoXbl(bool);
		void setHasEverLoggedIntoXbl(bool);
		void setHideGui(bool);
		void setHideGui(bool);
		void setInvertYMouse(bool);
		void setIsFlying(bool);
		void setIsLeftHanded(bool);
		void setKeyboardLayout(int);
		void setLanguage(std::string const&);
		void setLanguage(std::string const&);
		void setLastBetaVersion(int);
		void setLastCustomSkinId(std::string const&);
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
		void setPlayerViewPerspective(int);
		void setPpmDpadSizeOld(float);
		void setPreferPolyTessellation(bool);
		void setRecentSkinIds(std::vector<std::string,std::allocator<std::string>> const&);
		void setRecentSkinIds(std::vector<std::string,std::allocator<std::string>> const&);
		void setRenderDebug(bool);
		void setRenderDebug(bool);
		void setResetPlayerAlignment(bool);
		void setResetPlayerAlignment(bool);
		void setSensitivity(float);
		void setServerVisible(bool);
		void setSkinId(std::string const&);
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
		void setUseLocalServer(bool);
		void setUseMouseForDigging(bool);
		void setUseTouchScreen(bool);
		void setUsername(std::string const&);
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
		void setVRLivingRoomHintTime(int);
		void setVRLivingRoomHintTime(int);
		void setVRLivingRoomMode(bool);
		void setVRLivingRoomMode(bool);
		void setVROptionsComfortControls(bool);
		void setVROptionsComfortControls(bool);
		void setVRRightStickDeadBand(bool);
		void setVRRightStickGazeAdjust(bool);
		void setVRRightStickPitchAssist(bool);
		void setVRRightStickPitchAssistSteppings(int);
		void setVRRightStickPitchMaxAngle(int);
		void setVRRollTurning(bool);
		void setVRRollTurningSensitivity(float);
		void setVRShowComfortSelectScreen(bool);
		void setVRStickyMining(bool);
		void setVRTapTurn(bool);
		void setVRTapTurningSensitivity(float);
		void setVRUsesNormalHitEffect(bool);
		void setVRUsesRedFlashForHitEffect(bool);
		void setViewDistanceChunks(int);
		void setViewDistanceChunks(int);
		void setXboxLiveVisible(bool);
		void toggle(Options::Option const*,int);
		void toggleDevLogAreaFilter(int);
		void toggleDevLogAreaFilter(int);
		void toggleDevLogPriorityFilter(int);
		void toggleDevLogPriorityFilter(int);
		void unregisterLocks(void *);
		void unregisterLocks(void *);
		void unregisterObserver(void *);
		void unregisterObserver(void *);
		void updateGameSensitivity(void);
		void ~Options();
		void ~Options();
	}
};
