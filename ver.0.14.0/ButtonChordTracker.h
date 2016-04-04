#pragma once
class ButtonChordTracker{
	public:
		ButtonChordTracker(InputEventQueue &,ButtonRegistry const&);
		void raiseLongestChordSequences(void);
		void setMapping(std::vector<ChordButtonMapping,std::allocator<ChordButtonMapping>> const&);
		void trackButtonEvent(short,ButtonState);
};
