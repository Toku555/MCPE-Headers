#pragma once
class InputMapping{
	public:
		InputMapping(InputMapping const&);
		InputMapping(InputMapping const&);
		InputMapping(KeyboardInputMapping &,MouseInputMapping &,TouchInputMapping &,GamePadInputMapping &,GGVInputMapping &,TestAutoInputMapping &,std::vector<ChordButtonMapping,std::allocator<ChordButtonMapping>> &,std::vector&<DeviceButtonMapping,std::allocator<std::vector&>>);
		InputMapping(KeyboardInputMapping &,MouseInputMapping &,TouchInputMapping &,GamePadInputMapping &,GGVInputMapping &,TestAutoInputMapping &,std::vector<ChordButtonMapping,std::allocator<ChordButtonMapping>> &,std::vector&<DeviceButtonMapping,std::allocator<std::vector&>>);
		InputMapping(void);
		InputMapping(void);
		void getButtonDifference(InputMapping const*);
		void getStickDifference(InputMapping const*);
		void getStickDifference(InputMapping const*);
		void registerNames(NameRegistry &);
		void registerNames(NameRegistry &);
		void ~InputMapping();
		void ~InputMapping();
};
