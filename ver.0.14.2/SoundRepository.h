#pragma once
class SoundRepository{
	public:
		void add(std::string const&,SoundEvent const&);
		void get(std::string const&,SoundItem &);
};
