#pragma once
class SpriteComponent{
	public:
		SpriteComponent(std::shared_ptr<UIControl> &);
		void _drawClipped(UIRenderContext &,glm::detail::tvec2<float> const&,glm::detail::tvec2<float> const&);
		void _drawTiled(UIRenderContext &,glm::detail::tvec2<float> const&,glm::detail::tvec2<float> const&,glm::detail::tvec2<float> const&,glm::detail::tvec2<float> const&);
		void clone(std::shared_ptr<UIControl> &);
		void getAlpha(void);
		void getClipDirection(void);
		void getClipRatio(void);
		void getColor(void);
		void getNineSliceSize(void);
		void getTextureName(void);
		void getTiled(void);
		void getUV(void);
		void getUVSize(void);
		void render(UIRenderContext &);
		void setAlpha(float);
		void setClipDirection(UI::ClipDirection const&);
		void setClipRatio(float);
		void setColor(Color const&);
		void setNineSliceSize(UI::SliceSize const&);
		void setTextureName(std::string const&);
		void setTiled(bool);
		void setUV(glm::detail::tvec2<float> const&);
		void setUVSize(glm::detail::tvec2<float> const&);
		void ~SpriteComponent();
		void ~SpriteComponent();
};
