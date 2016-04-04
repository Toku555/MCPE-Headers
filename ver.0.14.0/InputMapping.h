#pragma once
class InputMapping{
	public:
		InputMapping(InputMapping const&);
		InputMapping(KeyboardInputMapping &,MouseInputMapping &,TouchInputMapping &,GamePadInputMapping &,GGVInputMapping &,std::vector<ChordButtonMapping,std::allocator<ChordButtonMapping>> &,std::vector&<DeviceButtonMapping,std::allocator<std::vector&>>);
		InputMapping(void);
		void getStickDifference(InputMapping const*);
		void ~InputMapping();
};
