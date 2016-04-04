#pragma once
class UIRect{
	public:
		void getAnchorPosition(UI::AnchorPoint);
		void getOffset(UI::LayoutOffset const&);
		void getPosition(void);
		void getSize(void);
		void setPosition(glm::detail::tvec2<float> const&);
		void setPositionGivenAnchor(UI::AnchorPoint,glm::detail::tvec2<float>);
		void setSize(glm::detail::tvec2<float> const&);
};
