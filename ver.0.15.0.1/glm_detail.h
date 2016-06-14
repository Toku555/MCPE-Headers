#pragma once
namespace glm{
	class detail{
		public:
		void operator*<float>(glm::detail::tmat4x4<float> const&,glm::detail::tmat4x4<float> const&);
		void operator*<float>(glm::detail::tmat4x4<float> const&,glm::detail::tmat4x4<float> const&);
		void inverse<float>(glm::detail::tmat4x4<float> const&);
		void inverse<float>(glm::detail::tmat4x4<float> const&);
		void rotate<float>(glm::detail::tmat4x4<float> const&,float const&,glm::detail::tvec3<float> const&);
		void rotate<float>(glm::detail::tmat4x4<float> const&,float const&,glm::detail::tvec3<float> const&);
	}
};
