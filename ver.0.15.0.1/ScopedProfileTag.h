#pragma once
class ScopedProfileTag{
	public:
		ScopedProfileTag(char const*,char const*,int);
		void ~ScopedProfileTag();
};
