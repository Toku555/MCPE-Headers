#pragma once
namespace j{
	class SliderComponent{
		public:
		void _finalizeSliderBox(void);
		void _updateSliderFromDirection(ui::CardinalDirection);
		void setSliderValue(int);
	}
};
