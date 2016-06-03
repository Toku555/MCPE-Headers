#pragma once
namespace AppPlatform{
	class android{
		public:
		AppPlatform_android(void);
		AppPlatform_android(void);
		void _CallStringMethod(_JNIEnv *,_jmethodID *);
		void _loadImageViaJNI(TextureData &,std::string const&);
		void _loadImageViaJNI(TextureData &,std::string const&);
		void buyGame(void);
		void buyGame(void);
		void checkLicense(void);
		void checkLicense(void);
		void convertOpenGlToAndroidPixels(int,int,uint *);
		void createAndroidLaunchIntent(void);
		void createAndroidLaunchIntent(void);
		void createHolographicPlatform(void);
		void createHolographicPlatform(void);
		void createUUID(void);
		void createUUID(void);
		void createUserInput(void);
		void createUserInput(void);
		void finish(void);
		void finish(void);
		void getApplicationId(void);
		void getApplicationId(void);
		void getAvailableMemory(void);
		void getAvailableMemory(void);
		void getBroadcastAddresses(void);
		void getBroadcastAddresses(void);
		void getDataUrl(void);
		void getDataUrl(void);
		void getDateString(int);
		void getDateString(int);
		void getDefaultInputMode(void);
		void getDefaultInputMode(void);
		void getDeviceId(void);
		void getDeviceId(void);
		void getExternalStoragePath(void);
		void getExternalStoragePath(void);
		void getGraphicsExtensions(void);
		void getGraphicsExtensions(void);
		void getGraphicsRenderer(void);
		void getGraphicsRenderer(void);
		void getGraphicsVendor(void);
		void getGraphicsVendor(void);
		void getGraphicsVersion(void);
		void getGraphicsVersion(void);
		void getIPAddresses(void);
		void getIPAddresses(void);
		void getInternalStoragePath(void);
		void getInternalStoragePath(void);
		void getKeyFromKeyCode(int,int,int);
		void getKeyFromKeyCode(int,int,int);
		void getKeyboardHeight(void);
		void getKeyboardHeight(void);
		void getModelName(void);
		void getModelName(void);
		void getPackagePath(void);
		void getPackagePath(void);
		void getPixelsPerMillimeter(void);
		void getPixelsPerMillimeter(void);
		void getPlatformStringVar(int);
		void getPlatformStringVar(int);
		void getPlatformTempPath(void);
		void getPlatformTempPath(void);
		void getPlatformUIScalingRules(void);
		void getPlatformUIScalingRules(void);
		void getScreenHeight(void);
		void getScreenHeight(void);
		void getScreenWidth(void);
		void getScreenWidth(void);
		void getSystemRegion(void);
		void getSystemRegion(void);
		void getUserInput(void);
		void getUserInput(void);
		void getUserInputStatus(void);
		void getUserInputStatus(void);
		void getUserdataPath(void);
		void getUserdataPath(void);
		void getUserdataPathForLevels(void);
		void getUserdataPathForLevels(void);
		void hasBuyButtonWhenInvalidLicense(void);
		void hasBuyButtonWhenInvalidLicense(void);
		void hasHardwareInformationChanged(void);
		void hasHardwareInformationChanged(void);
		void hideKeyboard(void);
		void hideKeyboard(void);
		void init(_JavaVM *);
		void init(_JavaVM *);
		void initConsts(MC_ENGINE *);
		void initConsts(MC_ENGINE *);
		void initWithActivity(ANativeActivity *);
		void initWithActivity(ANativeActivity *);
		void isFirstSnoopLaunch(void);
		void isFirstSnoopLaunch(void);
		void isFullScreenKeyboard(void);
		void isFullScreenKeyboard(void);
		void isNetworkEnabled(bool);
		void isNetworkEnabled(bool);
		void isPowerVR(void);
		void isPowerVR(void);
		void isTablet(void);
		void isTablet(void);
		void launchUri(std::string const&);
		void launchUri(std::string const&);
		void loadJPEG(TextureData &,std::string const&);
		void loadJPEG(TextureData &,std::string const&);
		void loadPNG(TextureData &,std::string const&);
		void loadPNG(TextureData &,std::string const&);
		void loadTGA(TextureData &,std::string const&);
		void loadTGA(TextureData &,std::string const&);
		void pickImage(ImagePickingCallback &);
		void pickImage(ImagePickingCallback &);
		void readAssetFile(std::string const&);
		void readAssetFile(std::string const&);
		void realmsBeta(void);
		void realmsBeta(void);
		void showDialog(int);
		void showDialog(int);
		void showKeyboard(std::string const&,int,bool,bool,Vec2 const&);
		void showKeyboard(std::string const&,int,bool,bool,Vec2 const&);
		void supportsVibration(void);
		void supportsVibration(void);
		void swapBuffers(void);
		void swapBuffers(void);
		void tick(void);
		void updateLocalization(std::string const&);
		void updateLocalization(std::string const&);
		void updateTextBoxText(std::string const&);
		void updateTextBoxText(std::string const&);
		void uploadPlatformDependentData(int,void *);
		void uploadPlatformDependentData(int,void *);
		void useMetadataDrivenScreens(void);
		void useMetadataDrivenScreens(void);
		void vibrate(int);
		void vibrate(int);
		void ~AppPlatform_android();
		void ~AppPlatform_android();
		void ~AppPlatform_android();
		void ~AppPlatform_android();
	}
};
