#pragma once
class ButtonChordTracker{
	public:
		ButtonChordTracker(InputEventQueue &,NameRegistry &);
		ButtonChordTracker(InputEventQueue &,NameRegistry &);
		void raiseLongestChordSequences(void);
		void raiseLongestChordSequences(void);
		void setMapping(std::vector<ChordButtonMapping,std::allocator<ChordButtonMapping>> const&);
		void setMapping(std::vector<ChordButtonMapping,std::allocator<ChordButtonMapping>> const&);
		void trackButtonEvent(short,ButtonState);
		void trackButtonEvent(short,ButtonState);
		void ~ButtonChordTracker();
		void ~ButtonChordTracker();
};
