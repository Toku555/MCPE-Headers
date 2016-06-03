#pragma once
namespace j{
	class LegacyClientNetworkHandler{
		public:
		void handleEntityLink(EntityLink const&);
		void ~LegacyClientNetworkHandler();
	}
};
