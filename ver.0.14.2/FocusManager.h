#pragma once
class FocusManager{
	public:
		FocusManager(void);
		void _findFocusControlIndex(std::shared_ptr<UIControl> &);
		void _intersectAABB(glm::detail::tvec2<float> const&,glm::detail::tvec2<float> const&,glm::detail::tvec2<float> const&,glm::detail::tvec2<float> const&);
		void _setFocusControl(int,VisualTree &);
		void _sweepForControl(SweepDescription &,std::vector<std::shared_ptr<UIControl>,std::allocator<std::shared_ptr<UIControl>>> const&,bool);
		void _validateFocusControl(VisualTree &);
		void defaultFocus(VisualTree &);
		void getFocusedControl(void);
		void isActive(void);
		void moveFocus(CardinalDirection,VisualTree &);
		void setActive(bool);
		void setFocus(glm::detail::tvec2<float> const&,VisualTree &);
		void setSize(glm::detail::tvec2<float> const&);
		void ~FocusManager();
};
