#define _ARMA_

class CfgPatches
{
	class DadaPlaceables
	{
		requiredAddons[] = {"DadaCore","DadaCore_BaseItems"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class DadaPlaceables
	{
		dir = "Source_Files\DadaPlaceables";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "DadaPlaceables";
		credits = "";
		author = "Dada";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"Source_Files\DadaPlaceables\scripts\3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"Source_Files\DadaPlaceables\scripts\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"Source_Files\DadaPlaceables\scripts\5_Mission"};
			};
		};
	};
};