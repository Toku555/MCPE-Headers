#pragma once
class AppPlatform{
	public:
		AppPlatform(void);
		AppPlatform(void);
		void HardwareInformation(void);
		void HardwareInformation(void);
		void ~HardwareInformation();
		void ~HardwareInformation();
		void StringizeUIScalingRules(UIScalingRules);
		void StringizeUIScalingRules(UIScalingRules);
		void _fireAppFocusGained(void);
		void _fireAppFocusGained(void);
		void _fireAppFocusLost(void);
		void _fireAppFocusLost(void);
		void _fireAppResumed(void);
		void _fireAppResumed(void);
		void _fireAppSuspended(void);
		void _fireAppSuspended(void);
		void _fireAppTerminated(void);
		void _fireLowMemory(void);
		void _fireLowMemory(void);
		void _notifyUriListeners(ActivationUri const&,bool);
		void _tick(void);
		void _tick(void);
		void buyGame(void);
		void buyGame(void);
		void checkLicense(void);
		void checkLicense(void);
		void collectGraphicsHardwareDetails(void);
		void collectGraphicsHardwareDetails(void);
		void createAndroidLaunchIntent(void);
		void createAndroidLaunchIntent(void);
		void createHolographicPlatform(void);
		void createHolographicPlatform(void);
		void createUserInput(void);
		void createUserInput(void);
		void discardBackbuffer(void);
		void discardBackbuffer(void);
		void finish(void);
		void finish(void);
		void getAlternateDataUrl(void);
		void getAlternateDataUrl(void);
		void getApiEnvironmentPath(void);
		void getApiEnvironmentPath(void);
		void getAppLifecycleContext(void);
		void getAppLifecycleContext(void);
		void getAssetFileFullPath(std::string const&);
		void getAssetFileFullPath(std::string const&);
		void getAvailableMemory(void);
		void getAvailableMemory(void);
		void getBroadcastAddresses(void);
		void getBroadcastAddresses(void);
		void getControllerType(void);
		void getControllerType(void);
		void getDateString(int);
		void getDateString(int);
		void getDefaultInputMode(void);
		void getDefaultInputMode(void);
		void getDpi(void);
		void getEdition(void);
		void getEdition(void);
		void getIPAddresses(void);
		void getIPAddresses(void);
		void getKeyFromKeyCode(int,int,int);
		void getKeyFromKeyCode(int,int,int);
		void getKeyboardHeight(void);
		void getKeyboardHeight(void);
		void getModelName(void);
		void getModelName(void);
		void getPixelsPerMillimeter(void);
		void getPixelsPerMillimeter(void);
		void getPlatformDpi(void);
		void getPlatformDpi(void);
		void getPlatformStringVar(int);
		void getPlatformStringVar(int);
		void getPlatformType(void);
		void getPlatformType(void);
		void getPlatformUIScalingRules(void);
		void getPlatformUIScalingRules(void);
		void getPointerFocus(void);
		void getPointerFocus(void);
		void getScreenHeight(void);
		void getScreenHeight(void);
		void getScreenWidth(void);
		void getScreenWidth(void);
		void getTempPath(void);
		void getTempPath(void);
		void getTotalMemory(void);
		void getTotalMemory(void);
		void getUIScalingRules(void);
		void getUIScalingRules(void);
		void getUserInput(void);
		void getUserInput(void);
		void getUserInputStatus(void);
		void getUserInputStatus(void);
		void getUserdataPathForLevels(void);
		void getUserdataPathForLevels(void);
		void hasBuyButtonWhenInvalidLicense(void);
		void hasBuyButtonWhenInvalidLicense(void);
		void hasIDEProfiler(void);
		void hasIDEProfiler(void);
		void hideKeyboard(void);
		void hideKeyboard(void);
		void hideMousePointer(void);
		void hideMousePointer(void);
		void isFireTV(void);
		void isFireTV(void);
		void isFullScreenKeyboard(void);
		void isFullScreenKeyboard(void);
		void isKeyboardVisible(void);
		void isKeyboardVisible(void);
		void isNetworkEnabled(bool);
		void isNetworkEnabled(bool);
		void isNetworkThrottled(void);
		void isNetworkThrottled(void);
		void isPowerVR(void);
		void isPowerVR(void);
		void launchUri(std::string const&);
		void launchUri(std::string const&);
		void listAssetFilesIn(std::string const&,std::string const&);
		void listAssetFilesIn(std::string const&,std::string const&);
		void loadImage(TextureData &,std::string const&);
		void loadImage(TextureData &,std::string const&);
		void loadImageFromStream(TextureData &,std::string const&);
		void loadJPEG(TextureData &,std::string const&);
		void loadJPEG(TextureData &,std::string const&);
		void loadPNG(TextureData &,std::string const&);
		void loadPNG(TextureData &,std::string const&);
		void loadTGA(TextureData &,std::string const&);
		void loadTGA(TextureData &,std::string const&);
		void loadTexture(std::string const&);
		void loadTexture(std::string const&);
		void loadTextureFromStream(std::string const&);
		void loadTextureFromStream(std::string const&);
		void notifyUriListenerRegistrationDone(void);
		void notifyUriListeners(ActivationUri const&);
		void notifyUriListeners(ActivationUri const&);
		void pickFile(FilePickerSettings &);
		void pickFile(FilePickerSettings &);
		void pushNotificationReceived(PushNotificationMessage const&);
		void pushNotificationReceived(PushNotificationMessage const&);
		void readAssetFile(std::string const&);
		void readAssetFile(std::string const&);
		void readAssetFileZipped(std::string const&,std::string const&);
		void readAssetFileZipped(std::string const&,std::string const&);
		void realmsBeta(void);
		void realmsBeta(void);
		void registerUriListener(UriListener &);
		void registerUriListener(UriListener &);
		void registerUriListener(std::string const&,UriListener &);
		void registerUriListener(std::string const&,UriListener &);
		void setControllerType(ControllerType);
		void setControllerType(ControllerType);
		void setDpi(int);
		void setFullscreenMode(FullscreenMode);
		void setFullscreenMode(FullscreenMode);
		void setPendingProtocolActivation(ActivationUri const&);
		void setPointerFocus(bool);
		void setPointerFocus(bool);
		void setScreenSize(int,int);
		void setScreenSize(int,int);
		void setSleepEnabled(bool);
		void setSleepEnabled(bool);
		void setUIScalingRules(UIScalingRules);
		void setUIScalingRules(UIScalingRules);
		void setWindowSize(int,int);
		void setWindowSize(int,int);
		void setWindowText(std::string const&);
		void setWindowText(std::string const&);
		void showDialog(int);
		void showDialog(int);
		void showKeyboard(std::string const&,int,bool,bool,Vec2 const&);
		void showKeyboard(std::string const&,int,bool,bool,Vec2 const&);
		void showMousePointer(void);
		void showMousePointer(void);
		void supportsFilePicking(void);
		void supportsFilePicking(void);
		void supportsVibration(void);
		void supportsVibration(void);
		void toggleSimulateTouchWithMouse(void);
		void toggleSimulateTouchWithMouse(void);
		void unregisterUriListener(UriListener const&);
		void unregisterUriListener(UriListener const&);
		void updateLocalization(std::string const&);
		void updateLocalization(std::string const&);
		void updateTextBoxText(std::string const&);
		void updateTextBoxText(std::string const&);
		void uploadPlatformDependentData(int,void *);
		void uploadPlatformDependentData(int,void *);
		void useCenteredGUI(void);
		void useCenteredGUI(void);
		void useMetadataDrivenScreens(void);
		void useMetadataDrivenScreens(void);
		void useXboxControlHelpers(void);
		void useXboxControlHelpers(void);
		void vibrate(int);
		void vibrate(int);
		void ~AppPlatform();
		void ~AppPlatform();
		void ~AppPlatform();
		void ~AppPlatform();
};
