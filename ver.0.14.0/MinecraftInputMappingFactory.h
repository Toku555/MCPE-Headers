#pragma once
class MinecraftInputMappingFactory{
	public:
		void _activateMapping(std::string const&);
		void _addInvariantChordControls(std::vector<ChordButtonMapping,std::allocator<ChordButtonMapping>> &);
		void _addInvariantGamePlayGamePadControls(GamePadInputMapping &);
		void _addInvariantGamePlayTouchControls(TouchInputMapping &);
		void _addInvariantKeyboardControls(KeyboardInputMapping &);
		void _bindActionToInput(GamePadInputMapping &,std::string const&,int);
		void _configureGamepadMapping(GamePadInputMapping &);
		void _createBedKeyboardMapping(void);
		void _createBoatGamePadMapping(void);
		void _createBoatKeyboardMapping(void);
		void _createBoatTouchMapping(void);
		void _createFlyingGamePadMapping(void);
		void _createFlyingTouchMapping(void);
		void _createGGVMapping(void);
		void _createGamePadReadMapping(void);
		void _createGazeScreenGamePadMapping(void);
		void _createMinecartTouchMapping(void);
		void _createNormalGamePlayChordMapping(void);
		void _createNormalGamePlayDeviceButtonMapping(void);
		void _createNormalGamePlayGamePadMapping(void);
		void _createNormalGamePlayKeyboardMapping(void);
		void _createNormalGamePlayMouseMapping(void);
		void _createNormalGamePlayTouchMapping(void);
		void _createScreenChordMapping(void);
		void _createScreenDeviceButtonMapping(void);
		void _createScreenGamePadMapping(void);
		void _createScreenKeyboardMapping(void);
		void _createScreenMouseMapping(void);
		void _createScreenTouchMapping(void);
		void _updateGamepadControls(void);
		void _updateKeyboardControls(void);
		void getMapping(std::string const&);
		void onConfigChanged(Config const&);
		void ~MinecraftInputMappingFactory();
		void ~MinecraftInputMappingFactory();
};
