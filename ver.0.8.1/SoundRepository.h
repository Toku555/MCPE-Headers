#pragma once
class SoundRepository{
	public:
		void add(std::string const&,SoundDesc &);
		void add(std::string const&,SoundDesc const&);
		void get(std::string const&,SoundDesc &);
};
