#pragma once
namespace glm{
	class detail{
		public:
		void operator*<float>(glm::detail::tmat4x4<float> const&,glm::detail::tmat4x4<float> const&);
		void operator*<float>(glm::detail::tmat4x4<float> const&,glm::detail::tmat4x4<float>::row_type const&);
		void tmat4x4(glm::detail::tmat4x4<float> const&);
		void tmat4x4(void);
		void inverse<float>(glm::detail::tmat4x4<float> const&);
		void rotate<float>(glm::detail::tmat4x4<float> const&,float const&,glm::detail::tvec3<float> const&);
		void unProject<float,float>(glm::detail::tvec3<float> const&,glm::detail::tmat4x4<float> const&,glm::detail::tmat4x4<float> const&,glm::detail::tvec4<float> const&);
	}
};
