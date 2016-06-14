#pragma once
namespace j{
	class SpriteComponent{
		public:
		void setClipRatio(float);
		void setColor(Color const&);
		void setUV(glm::detail::tvec2<float> const&);
	}
};
