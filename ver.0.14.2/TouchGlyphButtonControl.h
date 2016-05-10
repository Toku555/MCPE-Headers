#pragma once
class TouchGlyphButtonControl{
	public:
		void release(InputEventQueue &);
		void render(InputRenderContext &);
		void tick(InputEventQueue &,TouchPointResults &,int);
		void ~TouchGlyphButtonControl();
		void ~TouchGlyphButtonControl();
};
