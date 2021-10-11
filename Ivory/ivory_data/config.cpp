class CfgPatches
{
	class Ivory_Data
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.0;
		requiredAddons[]	= {};
		version = 2.1.3;
		versionStr = "2.1.3";
		versionAr[] = {2,1,3};
	};

};

#include "A3GPS\macros.h"
#include "A3GPS\localization.hpp"

#include "A3GPS\menu\common.hpp"
#include "A3GPS\menu\menu.hpp"

#include "A3GPS\misc\keyChoice\keyChoice.hpp"
#include "A3GPS\misc\EditDialog\text_dialog.hpp"
#include "A3GPS\misc\colorPicker\colorPicker.hpp"

class CfgGPS {
	//default user options
	default_marker_color[] = {0,1,1,1};
	default_lang = "en";
	default_metric = "km";

	class Keys {
		class quicknav_open_key {
			default = 15;
			name = "STR_quicknav_open_key";
		};
		class quicknav_switch_key {
			default = 54;
			name = "STR_quicknav_switch_key";
		};
		class quicknav_execute_key {
			default = 28;
			name = "STR_quicknav_execute_key";
		};
	};

};

class CfgSounds
{
	class ivory_beep
	{
		name = "ivory_beep";
		sound[] = {"ivory_data\sound\beep",0.75,1};
		titles[] = {};
		scope = 2;
	};
	class ivory_beep2
	{
		name = "ivory_beep2";
		sound[] = {"ivory_data\sound\beep2",2,1};
		titles[] = {};
		scope = 2;
	};
	class ivory_alert
	{
		name = "ivory_alert";
		sound[] = {"a3\sounds_f\air\Heli_Attack_02\alarm",1,1};
		titles[] = {};
		scope = 2;
	};
	class ivory_38164063
	{
		name = "ivory_38164063";
		sound[] = {"ivory_data\sound\38164063",25,1};
		titles[] = {};
		scope = 2;
	};
	class ivory_turbo
	{
		name = "ivory_turbo";
		sound[] = {"ivory_data\sound\turbo",2,1};
		titles[] = {};
		scope = 2;
	};
	class ivory_indicator
	{
		name = "ivory_indicator";
		sound[] = {"ivory_data\sound\indicator",5,1};
		titles[] = {};
		scope = 2;
	};
	class ivory_carhorn
	{
		name = "ivory_carhorn";
		sound[] = {"ivory_data\sound\carhorn",1,1};
		titles[] = {};
		scope = 2;
	};
	class ivory_ss2000_priority
	{
		name = "ivory_ss2000_priority";
		sound[] = {"ivory_data\sound\ss2000\priority",3.5,1};
		titles[] = {};
		scope = 2;
	};
	class ivory_ss2000_wail
	{
		name = "ivory_ss2000_wail";
		sound[] = {"ivory_data\sound\ss2000\wail",3,1};
		titles[] = {};
		scope = 2;
	};
	class ivory_ss2000_yelp
	{
		name = "ivory_ss2000_yelp";
		sound[] = {"ivory_data\sound\ss2000\yelp",3,1};
		titles[] = {};
		scope = 2;
	};
	class ivory_ss2000_hilo
	{
		name = "ivory_ss2000_hilo";
		sound[] = {"ivory_data\sound\ss2000\hilo",4,1};
		titles[] = {};
		scope = 2;
	};

	class ivory_ss2000_airhorn
	{
		name = "ivory_ss2000_airhorn";
		sound[] = {"ivory_data\sound\ss2000\airhorn",3,1};
		titles[] = {};
		scope = 2;
	};




	class ivory_pa300_airhorn
	{
		name = "ivory_pa300_airhorn";
		sound[] = {"ivory_data\sound\pa300\airhorn",6,1};
		titles[] = {};
		scope = 2;
	};
	class ivory_pa300_wail
	{
		name = "ivory_pa300_wail";
		sound[] = {"ivory_data\sound\pa300\wail",8,1};
		titles[] = {};
		scope = 2;
	};
	class ivory_pa300_yelp
	{
		name = "ivory_pa300_yelp";
		sound[] = {"ivory_data\sound\pa300\yelp",8,1};
		titles[] = {};
		scope = 2;
	};
	class ivory_pa300_hilo
	{
		name = "ivory_pa300_hilo";
		sound[] = {"ivory_data\sound\pa300\hilo",7,1};
		titles[] = {};
		scope = 2;
	};
	class ivory_pa300_priority
	{
		name = "ivory_pa300_priority";
		sound[] = {"ivory_data\sound\pa300\priority",7,1};
		titles[] = {};
		scope = 2;
	};
};
class CfgEditorSubcategories
{
	class Ivory {
		displayname = "Ivory";
	};
	class IvoryExtra {
		displayname = "Ivory (Extra)";
	};
	class IvoryPresidential {
		displayname = "Ivory (Presidential)";
	};
	class IvorySecurityMarked {
		displayname = "Ivory (Security/Marked)";
	};
	class IvorySecuritySlicktop {
		displayname = "Ivory (Security/Slicktop)";
	};
	class IvoryPoliceMarked {
		displayname = "Ivory (Police/Marked)";
	};
	class IvoryPoliceSlicktop {
		displayname = "Ivory (Police/Slicktop)";
	};
	class IvoryPoliceUnmarked {
		displayname = "Ivory (Police/Unmarked)";
	};
	class IvoryEMSMarked {
		displayname = "Ivory (EMS/Marked)";
	};
	class IvoryEMSSlicktop {
		displayname = "Ivory (EMS/Slicktop)";
	};
	class IvoryTaxi {
		displayname = "Ivory (Taxi)";
	};
};
class CfgVehicleClasses
{
	class Ivory
	{
		displayName = "Ivory";
	};
	class IvoryExtra
	{
		displayName = "Ivory (Extra)";
	};
};
class CfgFunctions
{
	class ivory
	{
		project = "ivory";
		tag = "ivory";
		class Init 
		{
			class Init
			{
				postInit=1;
				file = "ivory_data\scripts\init.sqf";
			};
		};
		class items
		{
			file = "ivory_data\functions\items";		

			class radarDetector {};
			class put {};
			class take {};
		};
		class radio
		{
			file = "ivory_data\functions\radio";		

			class processPlayerPositions {};
			class processSpeakerRadios {};
			class onMegaPhonePressed {};
			class onMegaPhoneReleased {};
		};
		class vehicle
		{
			file = "ivory_data\functions\vehicle";	
				
			class engine {};
			class epeContact {};
			class flags {};
			class getIn {};
			class getTimeStamp {};
			class getVehicleData {};
			class indicator {};
			class horn {};
			class takedown {};
			class initCar {};
			class initVehicle {};
			class listVehicleData {};
			class manual {};
			class nametags {};
			class lightbar {};
			class lights {};
			class radar {};
			class setLicense {};
			class setPoliceNum {};
			class showManual {};
			class showNotification {};
			class sirens {};
			class policeComputer {};
			class spoiler {};
			class turbo {};
			class vehicleData {};
			class yesorno {};

			
		};
	};
};
class CfgIvoryMaterials
{
	class Glossy { displayName = "Glossy"; material = "ivory_data\data\glossy.rvmat"; };
	class Metallic { displayName = "Metallic";  material = "ivory_data\data\metallic.rvmat"; };
	class Matte { displayName = "Matte";  material = "ivory_data\data\matte.rvmat"; };
	class Chrome { displayName = "Chrome";  material = "ivory_data\data\chrome.rvmat"; };
	class PearlescentRed { displayName = "Pearlescent Red";  material = "ivory_data\data\pearlescentred.rvmat"; };
	class PearlescentGreen { displayName = "Pearlescent Green";  material = "ivory_data\data\pearlescentgreen.rvmat"; };
	class PearlescentBlue { displayName = "Pearlescent Blue";  material = "ivory_data\data\pearlescentblue.rvmat"; };
};
class CfgIvoryTextures
{
	defaulttextures[]={"white","silver","dimgray","black","cobalt","darkcandyapplered","darkgreen","rust","harvestgold"};
	
	textures[]={"airforceblue","aliceblue","alizarincrimson","almond","amaranth","amber","americanrose","amethyst","androidgreen","antiflashwhite","antiquebrass","antiquefuchsia","antiquewhite","ao","applegreen","apricot","aqua","aquamarine","armygreen","arylideyellow","ashgrey","asparagus","atomictangerine","auburn","aureolin","aurometalsaurus","awesome","azure","azuremist","babyblue","babyblueeyes","babypink","ballblue","bananamania","bananayellow","battleshipgrey","bazaar","beaublue","beaver","beige","bisque","bistre","bittersweet","black","blanchedalmond","bleudefrance","blizzardblue","blond","blue","bluebell","bluegray","bluegreen","bluepurple","blueviolet","blush","bole","bondiblue","bone","bostonuniversityred","bottlegreen","boysenberry","brandeisblue","brass","brickred","brightcerulean","brightgreen","brightlavender","brightmaroon","brightpink","brightturquoise","brightube","brilliantlavender","brilliantrose","brinkpink","britishracinggreen","bronze","brown","bubblegum","bubbles","buff","bulgarianrose","burgundy","burlywood","burntorange","burntsienna","burntumber","byzantine","byzantium","cgblue","cgred","cadet","cadetblue","cadetgrey","cadmiumgreen","cadmiumorange","cadmiumred","cadmiumyellow","cafeaulait","cafenoir","calpolypomonagreen","cambridgeblue","camel","camouflagegreen","canary","canaryyellow","candyapplered","candypink","capri","caputmortuum","cardinal","caribbeangreen","carmine","carminepink","carminered","carnationpink","carnelian","carolinablue","carrotorange","celadon","celeste","celestialblue","cerise","cerisepink","cerulean","ceruleanblue","chamoisee","champagne","charcoal","chartreuse","cherry","cherryblossompink","chestnut","chocolate","chromeyellow","cinereous","cinnabar","cinnamon","citrine","classicrose","cobalt","cocoabrown","coffee","columbiablue","coolblack","coolgrey","copper","copperrose","coquelicot","coral","coralpink","coralred","cordovan","corn","cornellred","cornflower","cornflowerblue","cornsilk","cosmiclatte","cottoncandy","cream","crimson","crimsonred","crimsonglory","cyan","daffodil","dandelion","darkblue","darkbrown","darkbyzantium","darkcandyapplered","darkcerulean","darkchestnut","darkcoral","darkcyan","darkelectricblue","darkgoldenrod","darkgray","darkgreen","darkjunglegreen","darkkhaki","darklava","darklavender","darkmagenta","darkmidnightblue","darkolivegreen","darkorange","darkorchid","darkpastelblue","darkpastelgreen","darkpastelpurple","darkpastelred","darkpink","darkpowderblue","darkraspberry","darkred","darksalmon","darkscarlet","darkseagreen","darksienna","darkslateblue","darkslategray","darkspringgreen","darktan","darktangerine","darktaupe","darkterracotta","darkturquoise","darkviolet","dartmouthgreen","davygrey","debianred","deepcarmine","deepcarminepink","deepcarrotorange","deepcerise","deepchampagne","deepchestnut","deepcoffee","deepfuchsia","deepjunglegreen","deeplilac","deepmagenta","deeppeach","deeppink","deepsaffron","deepskyblue","denim","desert","desertsand","dimgray","dodgerblue","dogwoodrose","dollarbill","drab","dukeblue","earthyellow","ecru","eggplant","eggshell","egyptianblue","electricblue","electriccrimson","electriccyan","electricgreen","electricindigo","electriclavender","electriclime","electricpurple","electricultramarine","electricviolet","electricyellow","emerald","etonblue","fallow","falured","famous","fandango","fashionfuchsia","fawn","feldgrau","fern","ferngreen","ferrarired","fielddrab","fireenginered","firebrick","flame","flamingopink","flavescent","flax","floralwhite","fluorescentorange","fluorescentpink","fluorescentyellow","folly","forestgreen","frenchbeige","frenchblue","frenchlilac","frenchrose","fuchsia","fuchsiapink","fulvous","fuzzywuzzy","gainsboro","gamboge","ghostwhite","ginger","glaucous","glitter","gold","goldenbrown","goldenpoppy","goldenyellow","goldenrod","grannysmithapple","gray","grayasparagus","green","greenblue","greenyellow","grullo","guppiegreen","halayaube","hanblue","hanpurple","hansayellow","harlequin","harvardcrimson","harvestgold","heartgold","heliotrope","hollywoodcerise","honeydew","hookergreen","hotmagenta","hotpink","huntergreen","icterine","inchworm","indiagreen","indianred","indianyellow","indigo","internationalkleinblue","internationalorange","iris","isabelline","islamicgreen","ivory","jade","jasmine","jasper","jazzberryjam","jonquil","junebud","junglegreen","kucrimson","kellygreen","khaki","lasallegreen","languidlavender","lapislazuli","laserlemon","laurelgreen","lava","lavender","lavenderblue","lavenderblush","lavendergray","lavenderindigo","lavendermagenta","lavendermist","lavenderpink","lavenderpurple","lavenderrose","lawngreen","lemon","lemonyellow","lemonchiffon","lemonlime","lightcrimson","lightthulianpink","lightapricot","lightblue","lightbrown","lightcarminepink","lightcoral","lightcornflowerblue","lightcyan","lightfuchsiapink","lightgoldenrodyellow","lightgray","lightgreen","lightkhaki","lightpastelpurple","lightpink","lightsalmon","lightsalmonpink","lightseagreen","lightskyblue","lightslategray","lighttaupe","lightyellow","lilac","lime","limegreen","lincolngreen","linen","lion","liver","lust","msugreen","macaroniandcheese","magenta","magicmint","magnolia","mahogany","maize","majorelleblue","malachite","manatee","mangotango","mantis","maroon","mauve","mauvetaupe","mauvelous","mayablue","meatbrown","mediumpersianblue","mediumaquamarine","mediumblue","mediumcandyapplered","mediumcarmine","mediumchampagne","mediumelectricblue","mediumjunglegreen","mediumlavendermagenta","mediumorchid","mediumpurple","mediumredviolet","mediumseagreen","mediumslateblue","mediumspringbud","mediumspringgreen","mediumtaupe","mediumtealblue","mediumturquoise","mediumvioletred","melon","midnightblue","midnightgreen","mikadoyellow","mint","mintcream","mintgreen","mistyrose","moccasin","modebeige","moonstoneblue","mordantred19","mossgreen","mountainmeadow","mountbattenpink","mulberry","munsell","mustard","myrtle","nadeshikopink","napiergreen","naplesyellow","navajowhite","navyblue","neoncarrot","neonfuchsia","neongreen","non-photoblue","northtexasgreen","oceanboatblue","ochre","officegreen","oldgold","oldlace","oldlavender","oldmauve","oldrose","olive","olivedrab","olivegreen","olivine","onyx","operamauve","orange","orangeyellow","orangepeel","orangered","orchid","otterbrown","outerspace","outrageousorange","oxfordblue","pacificblue","pakistangreen","palatinateblue","palatinatepurple","paleaqua","paleblue","palebrown","palecarmine","palecerulean","palechestnut","palecopper","palecornflowerblue","palegold","palegoldenrod","palegreen","palelavender","palemagenta","palepink","paleplum","paleredviolet","palerobineggblue","palesilver","palespringbud","paletaupe","palevioletred","pansypurple","papayawhip","parisgreen","pastelblue","pastelbrown","pastelgray","pastelgreen","pastelmagenta","pastelorange","pastelpink","pastelpurple","pastelred","pastelviolet","pastelyellow","patriarch","paynegrey","peach","peachpuff","peachyellow","pear","pearl","pearlaqua","peridot","periwinkle","persianblue","persianindigo","persianorange","persianpink","persianplum","persianred","persianrose","phlox","phthaloblue","phthalogreen","piggypink","pinegreen","pink","pinkflamingo","pinksherbet","pinkpearl","pistachio","platinum","plum","portlandorange","powderblue","princetonorange","prussianblue","psychedelicpurple","puce","pumpkin","purple","purpleheart","purplemountainsmajesty","purplepizzazz","purpletaupe","rackley","radicalred","raspberry","raspberryglace","raspberrypink","raspberryrose","rawsienna","razzledazzlerose","razzmatazz","red","redorange","redbrown","redviolet","richblack","richcarmine","richelectricblue","richlilac","richmaroon","riflegreen","robinseggblue","rose","rosebonbon","roseebony","rosegold","rosemadder","rosepink","rosequartz","rosetaupe","rosevale","rosewood","rossocorsa","rosybrown","royalazure","royalblue","royalfuchsia","royalpurple","ruby","ruddy","ruddybrown","ruddypink","rufous","russet","rust","sacramentostategreen","saddlebrown","safetyorange","saffron","saintpatrickblue","salmon","salmonpink","sand","sanddune","sandstorm","sandybrown","sandytaupe","sapgreen","sapphire","satinsheengold","scarlet","schoolbusyellow","screamingreen","seablue","seagreen","sealbrown","seashell","selectiveyellow","sepia","shadow","shamrock","shamrockgreen","shockingpink","sienna","silver","sinopia","skobeloff","skyblue","skymagenta","slateblue","slategray","smalt","smokeytopaz","smokyblack","snow","spirodiscoball","springbud","springgreen","steelblue","stildegrainyellow","stizza","stormcloud","straw","sunglow","sunset","sunsetorange","tan","tangelo","tangerine","tangerineyellow","taupe","taupegray","tawny","teagreen","tearose","teal","tealblue","tealgreen","terracotta","thistle","thulianpink","ticklemepink","tiffanyblue","tigereye","timberwolf","titaniumyellow","tomato","toolbox","topaz","tractorred","trolleygrey","tropicalrainforest","trueblue","tuftsblue","tumbleweed","turkishrose","turquoise","turquoiseblue","turquoisegreen","tuscanred","twilightlavender","tyrianpurple","uablue","uared","uclablue","uclagold","ufogreen","upforestgreen","upmaroon","usccardinal","uscgold","ube","ultrapink","ultramarine","ultramarineblue","umber","unitednationsblue","universityofcaliforniagold","unmellowyellow","upsdellred","urobilin","utahcrimson","vanilla","vegasgold","venetianred","verdigris","vermilion","veronica","violet","violetblue","violetred","viridian","vividauburn","vividburgundy","vividcerise","vividtangerine","vividviolet","warmblack","waterspout","wenge","wheat","white","whitesmoke","wildstrawberry","wildwatermelon","wildblueyonder","wine","wisteria","xanadu","yaleblue","yellow","yelloworange","yellowgreen","zaffre","zinnwalditebrown"};
	
	class default { displayName = "Default"; texture = ""; }; 

	class airforceblue { displayName = "Air Force Blue"; texture = "#(argb,8,8,3)color(0.365,0.541,0.659,1,co)"; }; 
	class aliceblue { displayName = "Alice Blue"; texture = "#(argb,8,8,3)color(0.941,0.973,1,1,co)"; }; 
	class alizarincrimson { displayName = "Alizarin Crimson"; texture = "#(argb,8,8,3)color(0.89,0.149,0.212,1,co)"; }; 
	class almond { displayName = "Almond"; texture = "#(argb,8,8,3)color(0.937,0.871,0.804,1,co)"; }; 
	class amaranth { displayName = "Amaranth"; texture = "#(argb,8,8,3)color(0.898,0.169,0.314,1,co)"; }; 
	class amber { displayName = "Amber"; texture = "#(argb,8,8,3)color(1,0.749,0,1,co)"; }; 
	class americanrose { displayName = "American Rose"; texture = "#(argb,8,8,3)color(1,0.012,0.243,1,co)"; }; 
	class amethyst { displayName = "Amethyst"; texture = "#(argb,8,8,3)color(0.6,0.4,0.8,1,co)"; }; 
	class androidgreen { displayName = "Android Green"; texture = "#(argb,8,8,3)color(0.643,0.776,0.224,1,co)"; }; 
	class antiflashwhite { displayName = "Anti-flash White"; texture = "#(argb,8,8,3)color(0.949,0.953,0.957,1,co)"; }; 
	class antiquebrass { displayName = "Antique Brass"; texture = "#(argb,8,8,3)color(0.804,0.584,0.459,1,co)"; }; 
	class antiquefuchsia { displayName = "Antique Fuchsia"; texture = "#(argb,8,8,3)color(0.569,0.361,0.514,1,co)"; }; 
	class antiquewhite { displayName = "Antique White"; texture = "#(argb,8,8,3)color(0.98,0.922,0.843,1,co)"; }; 
	class ao { displayName = "Ao"; texture = "#(argb,8,8,3)color(0,0.502,0,1,co)"; }; 
	class applegreen { displayName = "Apple Green"; texture = "#(argb,8,8,3)color(0.553,0.714,0,1,co)"; }; 
	class apricot { displayName = "Apricot"; texture = "#(argb,8,8,3)color(0.984,0.808,0.694,1,co)"; }; 
	class aqua { displayName = "Aqua"; texture = "#(argb,8,8,3)color(0,1,1,1,co)"; }; 
	class aquamarine { displayName = "Aquamarine"; texture = "#(argb,8,8,3)color(0.498,1,0.831,1,co)"; }; 
	class armygreen { displayName = "Army Green"; texture = "#(argb,8,8,3)color(0.294,0.325,0.125,1,co)"; }; 
	class arylideyellow { displayName = "Arylide Yellow"; texture = "#(argb,8,8,3)color(0.914,0.839,0.42,1,co)"; }; 
	class ashgrey { displayName = "Ash Grey"; texture = "#(argb,8,8,3)color(0.698,0.745,0.71,1,co)"; }; 
	class asparagus { displayName = "Asparagus"; texture = "#(argb,8,8,3)color(0.529,0.663,0.42,1,co)"; }; 
	class atomictangerine { displayName = "Atomic Tangerine"; texture = "#(argb,8,8,3)color(1,0.6,0.4,1,co)"; }; 
	class auburn { displayName = "Auburn"; texture = "#(argb,8,8,3)color(0.647,0.165,0.165,1,co)"; }; 
	class aureolin { displayName = "Aureolin"; texture = "#(argb,8,8,3)color(0.992,0.933,0,1,co)"; }; 
	class aurometalsaurus { displayName = "AuroMetalSaurus"; texture = "#(argb,8,8,3)color(0.431,0.498,0.502,1,co)"; }; 
	class awesome { displayName = "Awesome"; texture = "#(argb,8,8,3)color(1,0.125,0.322,1,co)"; }; 
	class azure { displayName = "Azure"; texture = "#(argb,8,8,3)color(0,0.498,1,1,co)"; }; 
	class azuremist { displayName = "Azure Mist"; texture = "#(argb,8,8,3)color(0.941,1,1,1,co)"; }; 
	class babyblue { displayName = "Baby Blue"; texture = "#(argb,8,8,3)color(0.537,0.812,0.941,1,co)"; }; 
	class babyblueeyes { displayName = "Baby Blue Eyes"; texture = "#(argb,8,8,3)color(0.631,0.792,0.945,1,co)"; }; 
	class babypink { displayName = "Baby Pink"; texture = "#(argb,8,8,3)color(0.957,0.761,0.761,1,co)"; }; 
	class ballblue { displayName = "Ball Blue"; texture = "#(argb,8,8,3)color(0.129,0.671,0.804,1,co)"; }; 
	class bananamania { displayName = "Banana Mania"; texture = "#(argb,8,8,3)color(0.98,0.906,0.71,1,co)"; }; 
	class bananayellow { displayName = "Banana Yellow"; texture = "#(argb,8,8,3)color(1,0.882,0.208,1,co)"; }; 
	class battleshipgrey { displayName = "Battleship Grey"; texture = "#(argb,8,8,3)color(0.518,0.518,0.51,1,co)"; }; 
	class bazaar { displayName = "Bazaar"; texture = "#(argb,8,8,3)color(0.596,0.467,0.482,1,co)"; }; 
	class beaublue { displayName = "Beau Blue"; texture = "#(argb,8,8,3)color(0.737,0.831,0.902,1,co)"; }; 
	class beaver { displayName = "Beaver"; texture = "#(argb,8,8,3)color(0.624,0.506,0.439,1,co)"; }; 
	class beige { displayName = "Beige"; texture = "#(argb,8,8,3)color(0.961,0.961,0.863,1,co)"; }; 
	class bisque { displayName = "Bisque"; texture = "#(argb,8,8,3)color(1,0.894,0.769,1,co)"; }; 
	class bistre { displayName = "Bistre"; texture = "#(argb,8,8,3)color(0.239,0.169,0.122,1,co)"; }; 
	class bittersweet { displayName = "Bittersweet"; texture = "#(argb,8,8,3)color(0.996,0.435,0.369,1,co)"; }; 
	class black { displayName = "Black"; texture = "#(argb,8,8,3)color(0,0,0,1,co)"; }; 
	class blanchedalmond { displayName = "Blanched Almond"; texture = "#(argb,8,8,3)color(1,0.922,0.804,1,co)"; }; 
	class bleudefrance { displayName = "Bleu De France"; texture = "#(argb,8,8,3)color(0.192,0.549,0.906,1,co)"; }; 
	class blizzardblue { displayName = "Blizzard Blue"; texture = "#(argb,8,8,3)color(0.675,0.898,0.933,1,co)"; }; 
	class blond { displayName = "Blond"; texture = "#(argb,8,8,3)color(0.98,0.941,0.745,1,co)"; }; 
	class blue { displayName = "Blue"; texture = "#(argb,8,8,3)color(0,0,1,1,co)"; }; 
	class bluebell { displayName = "Blue Bell"; texture = "#(argb,8,8,3)color(0.635,0.635,0.816,1,co)"; }; 
	class bluegray { displayName = "Blue Gray"; texture = "#(argb,8,8,3)color(0.4,0.6,0.8,1,co)"; }; 
	class bluegreen { displayName = "Blue Green"; texture = "#(argb,8,8,3)color(0.051,0.596,0.729,1,co)"; }; 
	class bluepurple { displayName = "Blue Purple"; texture = "#(argb,8,8,3)color(0.541,0.169,0.886,1,co)"; }; 
	class blueviolet { displayName = "Blue Violet"; texture = "#(argb,8,8,3)color(0.541,0.169,0.886,1,co)"; }; 
	class blush { displayName = "Blush"; texture = "#(argb,8,8,3)color(0.871,0.365,0.514,1,co)"; }; 
	class bole { displayName = "Bole"; texture = "#(argb,8,8,3)color(0.475,0.267,0.231,1,co)"; }; 
	class bondiblue { displayName = "Bondi Blue"; texture = "#(argb,8,8,3)color(0,0.584,0.714,1,co)"; }; 
	class bone { displayName = "Bone"; texture = "#(argb,8,8,3)color(0.89,0.855,0.788,1,co)"; }; 
	class bostonuniversityred { displayName = "Boston University Red"; texture = "#(argb,8,8,3)color(0.8,0,0,1,co)"; }; 
	class bottlegreen { displayName = "Bottle Green"; texture = "#(argb,8,8,3)color(0,0.416,0.306,1,co)"; }; 
	class boysenberry { displayName = "Boysenberry"; texture = "#(argb,8,8,3)color(0.529,0.196,0.376,1,co)"; }; 
	class brandeisblue { displayName = "Brandeis Blue"; texture = "#(argb,8,8,3)color(0,0.439,1,1,co)"; }; 
	class brass { displayName = "Brass"; texture = "#(argb,8,8,3)color(0.71,0.651,0.259,1,co)"; }; 
	class brickred { displayName = "Brick Red"; texture = "#(argb,8,8,3)color(0.796,0.255,0.329,1,co)"; }; 
	class brightcerulean { displayName = "Bright Cerulean"; texture = "#(argb,8,8,3)color(0.114,0.675,0.839,1,co)"; }; 
	class brightgreen { displayName = "Bright Green"; texture = "#(argb,8,8,3)color(0.4,1,0,1,co)"; }; 
	class brightlavender { displayName = "Bright Lavender"; texture = "#(argb,8,8,3)color(0.749,0.58,0.894,1,co)"; }; 
	class brightmaroon { displayName = "Bright Maroon"; texture = "#(argb,8,8,3)color(0.765,0.129,0.282,1,co)"; }; 
	class brightpink { displayName = "Bright Pink"; texture = "#(argb,8,8,3)color(1,0,0.498,1,co)"; }; 
	class brightturquoise { displayName = "Bright Turquoise"; texture = "#(argb,8,8,3)color(0.031,0.91,0.871,1,co)"; }; 
	class brightube { displayName = "Bright Ube"; texture = "#(argb,8,8,3)color(0.82,0.624,0.91,1,co)"; }; 
	class brilliantlavender { displayName = "Brilliant Lavender"; texture = "#(argb,8,8,3)color(0.957,0.733,1,1,co)"; }; 
	class brilliantrose { displayName = "Brilliant Rose"; texture = "#(argb,8,8,3)color(1,0.333,0.639,1,co)"; }; 
	class brinkpink { displayName = "Brink Pink"; texture = "#(argb,8,8,3)color(0.984,0.376,0.498,1,co)"; }; 
	class britishracinggreen { displayName = "British Racing Green"; texture = "#(argb,8,8,3)color(0,0.259,0.145,1,co)"; }; 
	class bronze { displayName = "Bronze"; texture = "#(argb,8,8,3)color(0.804,0.498,0.196,1,co)"; }; 
	class brown { displayName = "Brown"; texture = "#(argb,8,8,3)color(0.647,0.165,0.165,1,co)"; }; 
	class bubblegum { displayName = "Bubble Gum"; texture = "#(argb,8,8,3)color(1,0.757,0.8,1,co)"; }; 
	class bubbles { displayName = "Bubbles"; texture = "#(argb,8,8,3)color(0.906,0.996,1,1,co)"; }; 
	class buff { displayName = "Buff"; texture = "#(argb,8,8,3)color(0.941,0.863,0.51,1,co)"; }; 
	class bulgarianrose { displayName = "Bulgarian Rose"; texture = "#(argb,8,8,3)color(0.282,0.024,0.027,1,co)"; }; 
	class burgundy { displayName = "Burgundy"; texture = "#(argb,8,8,3)color(0.502,0,0.125,1,co)"; }; 
	class burlywood { displayName = "Burlywood"; texture = "#(argb,8,8,3)color(0.871,0.722,0.529,1,co)"; }; 
	class burntorange { displayName = "Burnt Orange"; texture = "#(argb,8,8,3)color(0.8,0.333,0,1,co)"; }; 
	class burntsienna { displayName = "Burnt Sienna"; texture = "#(argb,8,8,3)color(0.914,0.455,0.318,1,co)"; }; 
	class burntumber { displayName = "Burnt Umber"; texture = "#(argb,8,8,3)color(0.541,0.2,0.141,1,co)"; }; 
	class byzantine { displayName = "Byzantine"; texture = "#(argb,8,8,3)color(0.741,0.2,0.643,1,co)"; }; 
	class byzantium { displayName = "Byzantium"; texture = "#(argb,8,8,3)color(0.439,0.161,0.388,1,co)"; }; 
	class cgblue { displayName = "CG Blue"; texture = "#(argb,8,8,3)color(0,0.478,0.647,1,co)"; }; 
	class cgred { displayName = "CG Red"; texture = "#(argb,8,8,3)color(0.878,0.235,0.192,1,co)"; }; 
	class cadet { displayName = "Cadet"; texture = "#(argb,8,8,3)color(0.325,0.408,0.447,1,co)"; }; 
	class cadetblue { displayName = "Cadet Blue"; texture = "#(argb,8,8,3)color(0.373,0.62,0.627,1,co)"; }; 
	class cadetgrey { displayName = "Cadet Grey"; texture = "#(argb,8,8,3)color(0.569,0.639,0.69,1,co)"; }; 
	class cadmiumgreen { displayName = "Cadmium Green"; texture = "#(argb,8,8,3)color(0,0.42,0.235,1,co)"; }; 
	class cadmiumorange { displayName = "Cadmium Orange"; texture = "#(argb,8,8,3)color(0.929,0.529,0.176,1,co)"; }; 
	class cadmiumred { displayName = "Cadmium Red"; texture = "#(argb,8,8,3)color(0.89,0,0.133,1,co)"; }; 
	class cadmiumyellow { displayName = "Cadmium Yellow"; texture = "#(argb,8,8,3)color(1,0.965,0,1,co)"; }; 
	class cafeaulait { displayName = "Cafe Au Lait"; texture = "#(argb,8,8,3)color(0.651,0.482,0.357,1,co)"; }; 
	class cafenoir { displayName = "Cafe Noir"; texture = "#(argb,8,8,3)color(0.294,0.212,0.129,1,co)"; }; 
	class calpolypomonagreen { displayName = "Cal Poly Pomona Green"; texture = "#(argb,8,8,3)color(0.118,0.302,0.169,1,co)"; }; 
	class cambridgeblue { displayName = "Cambridge Blue"; texture = "#(argb,8,8,3)color(0.639,0.757,0.678,1,co)"; }; 
	class camel { displayName = "Camel"; texture = "#(argb,8,8,3)color(0.757,0.604,0.42,1,co)"; }; 
	class camouflagegreen { displayName = "Camouflage Green"; texture = "#(argb,8,8,3)color(0.471,0.525,0.42,1,co)"; }; 
	class canary { displayName = "Canary"; texture = "#(argb,8,8,3)color(1,1,0.6,1,co)"; }; 
	class canaryyellow { displayName = "Canary Yellow"; texture = "#(argb,8,8,3)color(1,0.937,0,1,co)"; }; 
	class candyapplered { displayName = "Candy Apple Red"; texture = "#(argb,8,8,3)color(1,0.031,0,1,co)"; }; 
	class candypink { displayName = "Candy Pink"; texture = "#(argb,8,8,3)color(0.894,0.443,0.478,1,co)"; }; 
	class capri { displayName = "Capri"; texture = "#(argb,8,8,3)color(0,0.749,1,1,co)"; }; 
	class caputmortuum { displayName = "Caput Mortuum"; texture = "#(argb,8,8,3)color(0.349,0.153,0.125,1,co)"; }; 
	class cardinal { displayName = "Cardinal"; texture = "#(argb,8,8,3)color(0.769,0.118,0.227,1,co)"; }; 
	class caribbeangreen { displayName = "Caribbean Green"; texture = "#(argb,8,8,3)color(0,0.8,0.6,1,co)"; }; 
	class carmine { displayName = "Carmine"; texture = "#(argb,8,8,3)color(1,0,0.251,1,co)"; }; 
	class carminepink { displayName = "Carmine Pink"; texture = "#(argb,8,8,3)color(0.922,0.298,0.259,1,co)"; }; 
	class carminered { displayName = "Carmine Red"; texture = "#(argb,8,8,3)color(1,0,0.22,1,co)"; }; 
	class carnationpink { displayName = "Carnation Pink"; texture = "#(argb,8,8,3)color(1,0.651,0.788,1,co)"; }; 
	class carnelian { displayName = "Carnelian"; texture = "#(argb,8,8,3)color(0.702,0.106,0.106,1,co)"; }; 
	class carolinablue { displayName = "Carolina Blue"; texture = "#(argb,8,8,3)color(0.6,0.729,0.867,1,co)"; }; 
	class carrotorange { displayName = "Carrot Orange"; texture = "#(argb,8,8,3)color(0.929,0.569,0.129,1,co)"; }; 
	class celadon { displayName = "Celadon"; texture = "#(argb,8,8,3)color(0.675,0.882,0.686,1,co)"; }; 
	class celeste { displayName = "Celeste"; texture = "#(argb,8,8,3)color(0.698,1,1,1,co)"; }; 
	class celestialblue { displayName = "Celestial Blue"; texture = "#(argb,8,8,3)color(0.286,0.592,0.816,1,co)"; }; 
	class cerise { displayName = "Cerise"; texture = "#(argb,8,8,3)color(0.871,0.192,0.388,1,co)"; }; 
	class cerisepink { displayName = "Cerise Pink"; texture = "#(argb,8,8,3)color(0.925,0.231,0.514,1,co)"; }; 
	class cerulean { displayName = "Cerulean"; texture = "#(argb,8,8,3)color(0,0.482,0.655,1,co)"; }; 
	class ceruleanblue { displayName = "Cerulean Blue"; texture = "#(argb,8,8,3)color(0.165,0.322,0.745,1,co)"; }; 
	class chamoisee { displayName = "Chamoisee"; texture = "#(argb,8,8,3)color(0.627,0.471,0.353,1,co)"; }; 
	class champagne { displayName = "Champagne"; texture = "#(argb,8,8,3)color(0.98,0.839,0.647,1,co)"; }; 
	class charcoal { displayName = "Charcoal"; texture = "#(argb,8,8,3)color(0.212,0.271,0.31,1,co)"; }; 
	class chartreuse { displayName = "Chartreuse"; texture = "#(argb,8,8,3)color(0.498,1,0,1,co)"; }; 
	class cherry { displayName = "Cherry"; texture = "#(argb,8,8,3)color(0.871,0.192,0.388,1,co)"; }; 
	class cherryblossompink { displayName = "Cherry Blossom Pink"; texture = "#(argb,8,8,3)color(1,0.718,0.773,1,co)"; }; 
	class chestnut { displayName = "Chestnut"; texture = "#(argb,8,8,3)color(0.804,0.361,0.361,1,co)"; }; 
	class chocolate { displayName = "Chocolate"; texture = "#(argb,8,8,3)color(0.824,0.412,0.118,1,co)"; }; 
	class chromeyellow { displayName = "Chrome Yellow"; texture = "#(argb,8,8,3)color(1,0.655,0,1,co)"; }; 
	class cinereous { displayName = "Cinereous"; texture = "#(argb,8,8,3)color(0.596,0.506,0.482,1,co)"; }; 
	class cinnabar { displayName = "Cinnabar"; texture = "#(argb,8,8,3)color(0.89,0.259,0.204,1,co)"; }; 
	class cinnamon { displayName = "Cinnamon"; texture = "#(argb,8,8,3)color(0.824,0.412,0.118,1,co)"; }; 
	class citrine { displayName = "Citrine"; texture = "#(argb,8,8,3)color(0.894,0.816,0.039,1,co)"; }; 
	class classicrose { displayName = "Classic Rose"; texture = "#(argb,8,8,3)color(0.984,0.8,0.906,1,co)"; }; 
	class cobalt { displayName = "Cobalt"; texture = "#(argb,8,8,3)color(0,0.278,0.671,1,co)"; }; 
	class cocoabrown { displayName = "Cocoa Brown"; texture = "#(argb,8,8,3)color(0.824,0.412,0.118,1,co)"; }; 
	class coffee { displayName = "Coffee"; texture = "#(argb,8,8,3)color(0.435,0.306,0.216,1,co)"; }; 
	class columbiablue { displayName = "Columbia Blue"; texture = "#(argb,8,8,3)color(0.608,0.867,1,1,co)"; }; 
	class coolblack { displayName = "Cool Black"; texture = "#(argb,8,8,3)color(0,0.18,0.388,1,co)"; }; 
	class coolgrey { displayName = "Cool Grey"; texture = "#(argb,8,8,3)color(0.549,0.573,0.675,1,co)"; }; 
	class copper { displayName = "Copper"; texture = "#(argb,8,8,3)color(0.722,0.451,0.2,1,co)"; }; 
	class copperrose { displayName = "Copper Rose"; texture = "#(argb,8,8,3)color(0.6,0.4,0.4,1,co)"; }; 
	class coquelicot { displayName = "Coquelicot"; texture = "#(argb,8,8,3)color(1,0.22,0,1,co)"; }; 
	class coral { displayName = "Coral"; texture = "#(argb,8,8,3)color(1,0.498,0.314,1,co)"; }; 
	class coralpink { displayName = "Coral Pink"; texture = "#(argb,8,8,3)color(0.973,0.514,0.475,1,co)"; }; 
	class coralred { displayName = "Coral Red"; texture = "#(argb,8,8,3)color(1,0.251,0.251,1,co)"; }; 
	class cordovan { displayName = "Cordovan"; texture = "#(argb,8,8,3)color(0.537,0.247,0.271,1,co)"; }; 
	class corn { displayName = "Corn"; texture = "#(argb,8,8,3)color(0.984,0.925,0.365,1,co)"; }; 
	class cornellred { displayName = "Cornell Red"; texture = "#(argb,8,8,3)color(0.702,0.106,0.106,1,co)"; }; 
	class cornflower { displayName = "Cornflower"; texture = "#(argb,8,8,3)color(0.604,0.808,0.922,1,co)"; }; 
	class cornflowerblue { displayName = "Cornflower Blue"; texture = "#(argb,8,8,3)color(0.392,0.584,0.929,1,co)"; }; 
	class cornsilk { displayName = "Cornsilk"; texture = "#(argb,8,8,3)color(1,0.973,0.863,1,co)"; }; 
	class cosmiclatte { displayName = "Cosmic Latte"; texture = "#(argb,8,8,3)color(1,0.973,0.906,1,co)"; }; 
	class cottoncandy { displayName = "Cotton Candy"; texture = "#(argb,8,8,3)color(1,0.737,0.851,1,co)"; }; 
	class cream { displayName = "Cream"; texture = "#(argb,8,8,3)color(1,0.992,0.816,1,co)"; }; 
	class crimson { displayName = "Crimson"; texture = "#(argb,8,8,3)color(0.863,0.078,0.235,1,co)"; }; 
	class crimsonred { displayName = "Crimson Red"; texture = "#(argb,8,8,3)color(0.6,0,0,1,co)"; }; 
	class crimsonglory { displayName = "Crimson Glory"; texture = "#(argb,8,8,3)color(0.745,0,0.196,1,co)"; }; 
	class cyan { displayName = "Cyan"; texture = "#(argb,8,8,3)color(0,1,1,1,co)"; }; 
	class daffodil { displayName = "Daffodil"; texture = "#(argb,8,8,3)color(1,1,0.192,1,co)"; }; 
	class dandelion { displayName = "Dandelion"; texture = "#(argb,8,8,3)color(0.941,0.882,0.188,1,co)"; }; 
	class darkblue { displayName = "Dark Blue"; texture = "#(argb,8,8,3)color(0,0,0.545,1,co)"; }; 
	class darkbrown { displayName = "Dark Brown"; texture = "#(argb,8,8,3)color(0.396,0.263,0.129,1,co)"; }; 
	class darkbyzantium { displayName = "Dark Byzantium"; texture = "#(argb,8,8,3)color(0.365,0.224,0.329,1,co)"; }; 
	class darkcandyapplered { displayName = "Dark Candy Apple Red"; texture = "#(argb,8,8,3)color(0.643,0,0,1,co)"; }; 
	class darkcerulean { displayName = "Dark Cerulean"; texture = "#(argb,8,8,3)color(0.031,0.271,0.494,1,co)"; }; 
	class darkchestnut { displayName = "Dark Chestnut"; texture = "#(argb,8,8,3)color(0.596,0.412,0.376,1,co)"; }; 
	class darkcoral { displayName = "Dark Coral"; texture = "#(argb,8,8,3)color(0.804,0.357,0.271,1,co)"; }; 
	class darkcyan { displayName = "Dark Cyan"; texture = "#(argb,8,8,3)color(0,0.545,0.545,1,co)"; }; 
	class darkelectricblue { displayName = "Dark Electric Blue"; texture = "#(argb,8,8,3)color(0.325,0.408,0.471,1,co)"; }; 
	class darkgoldenrod { displayName = "Dark Goldenrod"; texture = "#(argb,8,8,3)color(0.722,0.525,0.043,1,co)"; }; 
	class darkgray { displayName = "Dark Gray"; texture = "#(argb,8,8,3)color(0.663,0.663,0.663,1,co)"; }; 
	class darkgreen { displayName = "Dark Green"; texture = "#(argb,8,8,3)color(0.004,0.196,0.125,1,co)"; }; 
	class darkjunglegreen { displayName = "Dark Jungle Green"; texture = "#(argb,8,8,3)color(0.102,0.141,0.129,1,co)"; }; 
	class darkkhaki { displayName = "Dark Khaki"; texture = "#(argb,8,8,3)color(0.741,0.718,0.42,1,co)"; }; 
	class darklava { displayName = "Dark Lava"; texture = "#(argb,8,8,3)color(0.282,0.235,0.196,1,co)"; }; 
	class darklavender { displayName = "Dark Lavender"; texture = "#(argb,8,8,3)color(0.451,0.31,0.588,1,co)"; }; 
	class darkmagenta { displayName = "Dark Magenta"; texture = "#(argb,8,8,3)color(0.545,0,0.545,1,co)"; }; 
	class darkmidnightblue { displayName = "Dark Midnight Blue"; texture = "#(argb,8,8,3)color(0,0.2,0.4,1,co)"; }; 
	class darkolivegreen { displayName = "Dark Olive Green"; texture = "#(argb,8,8,3)color(0.333,0.42,0.184,1,co)"; }; 
	class darkorange { displayName = "Dark Orange"; texture = "#(argb,8,8,3)color(1,0.549,0,1,co)"; }; 
	class darkorchid { displayName = "Dark Orchid"; texture = "#(argb,8,8,3)color(0.6,0.196,0.8,1,co)"; }; 
	class darkpastelblue { displayName = "Dark Pastel Blue"; texture = "#(argb,8,8,3)color(0.467,0.62,0.796,1,co)"; }; 
	class darkpastelgreen { displayName = "Dark Pastel Green"; texture = "#(argb,8,8,3)color(0.012,0.753,0.235,1,co)"; }; 
	class darkpastelpurple { displayName = "Dark Pastel Purple"; texture = "#(argb,8,8,3)color(0.588,0.435,0.839,1,co)"; }; 
	class darkpastelred { displayName = "Dark Pastel Red"; texture = "#(argb,8,8,3)color(0.761,0.231,0.133,1,co)"; }; 
	class darkpink { displayName = "Dark Pink"; texture = "#(argb,8,8,3)color(0.906,0.329,0.502,1,co)"; }; 
	class darkpowderblue { displayName = "Dark Powder Blue"; texture = "#(argb,8,8,3)color(0,0.2,0.6,1,co)"; }; 
	class darkraspberry { displayName = "Dark Raspberry"; texture = "#(argb,8,8,3)color(0.529,0.149,0.341,1,co)"; }; 
	class darkred { displayName = "Dark Red"; texture = "#(argb,8,8,3)color(0.545,0,0,1,co)"; }; 
	class darksalmon { displayName = "Dark Salmon"; texture = "#(argb,8,8,3)color(0.914,0.588,0.478,1,co)"; }; 
	class darkscarlet { displayName = "Dark Scarlet"; texture = "#(argb,8,8,3)color(0.337,0.012,0.098,1,co)"; }; 
	class darkseagreen { displayName = "Dark Sea Green"; texture = "#(argb,8,8,3)color(0.561,0.737,0.561,1,co)"; }; 
	class darksienna { displayName = "Dark Sienna"; texture = "#(argb,8,8,3)color(0.235,0.078,0.078,1,co)"; }; 
	class darkslateblue { displayName = "Dark Slate Blue"; texture = "#(argb,8,8,3)color(0.282,0.239,0.545,1,co)"; }; 
	class darkslategray { displayName = "Dark Slate Gray"; texture = "#(argb,8,8,3)color(0.184,0.31,0.31,1,co)"; }; 
	class darkspringgreen { displayName = "Dark Spring Green"; texture = "#(argb,8,8,3)color(0.09,0.447,0.271,1,co)"; }; 
	class darktan { displayName = "Dark Tan"; texture = "#(argb,8,8,3)color(0.569,0.506,0.318,1,co)"; }; 
	class darktangerine { displayName = "Dark Tangerine"; texture = "#(argb,8,8,3)color(1,0.659,0.071,1,co)"; }; 
	class darktaupe { displayName = "Dark Taupe"; texture = "#(argb,8,8,3)color(0.282,0.235,0.196,1,co)"; }; 
	class darkterracotta { displayName = "Dark Terra Cotta"; texture = "#(argb,8,8,3)color(0.8,0.306,0.361,1,co)"; }; 
	class darkturquoise { displayName = "Dark Turquoise"; texture = "#(argb,8,8,3)color(0,0.808,0.82,1,co)"; }; 
	class darkviolet { displayName = "Dark Violet"; texture = "#(argb,8,8,3)color(0.58,0,0.827,1,co)"; }; 
	class dartmouthgreen { displayName = "Dartmouth Green"; texture = "#(argb,8,8,3)color(0,0.412,0.243,1,co)"; }; 
	class davygrey { displayName = "Davy Grey"; texture = "#(argb,8,8,3)color(0.333,0.333,0.333,1,co)"; }; 
	class debianred { displayName = "Debian Red"; texture = "#(argb,8,8,3)color(0.843,0.039,0.325,1,co)"; }; 
	class deepcarmine { displayName = "Deep Carmine"; texture = "#(argb,8,8,3)color(0.663,0.125,0.243,1,co)"; }; 
	class deepcarminepink { displayName = "Deep Carmine Pink"; texture = "#(argb,8,8,3)color(0.937,0.188,0.22,1,co)"; }; 
	class deepcarrotorange { displayName = "Deep Carrot Orange"; texture = "#(argb,8,8,3)color(0.914,0.412,0.173,1,co)"; }; 
	class deepcerise { displayName = "Deep Cerise"; texture = "#(argb,8,8,3)color(0.855,0.196,0.529,1,co)"; }; 
	class deepchampagne { displayName = "Deep Champagne"; texture = "#(argb,8,8,3)color(0.98,0.839,0.647,1,co)"; }; 
	class deepchestnut { displayName = "Deep Chestnut"; texture = "#(argb,8,8,3)color(0.725,0.306,0.282,1,co)"; }; 
	class deepcoffee { displayName = "Deep Coffee"; texture = "#(argb,8,8,3)color(0.439,0.259,0.255,1,co)"; }; 
	class deepfuchsia { displayName = "Deep Fuchsia"; texture = "#(argb,8,8,3)color(0.757,0.329,0.757,1,co)"; }; 
	class deepjunglegreen { displayName = "Deep Jungle Green"; texture = "#(argb,8,8,3)color(0,0.294,0.286,1,co)"; }; 
	class deeplilac { displayName = "Deep Lilac"; texture = "#(argb,8,8,3)color(0.6,0.333,0.733,1,co)"; }; 
	class deepmagenta { displayName = "Deep Magenta"; texture = "#(argb,8,8,3)color(0.8,0,0.8,1,co)"; }; 
	class deeppeach { displayName = "Deep Peach"; texture = "#(argb,8,8,3)color(1,0.796,0.643,1,co)"; }; 
	class deeppink { displayName = "Deep Pink"; texture = "#(argb,8,8,3)color(1,0.078,0.576,1,co)"; }; 
	class deepsaffron { displayName = "Deep Saffron"; texture = "#(argb,8,8,3)color(1,0.6,0.2,1,co)"; }; 
	class deepskyblue { displayName = "Deep Sky Blue"; texture = "#(argb,8,8,3)color(0,0.749,1,1,co)"; }; 
	class denim { displayName = "Denim"; texture = "#(argb,8,8,3)color(0.082,0.376,0.741,1,co)"; }; 
	class desert { displayName = "Desert"; texture = "#(argb,8,8,3)color(0.757,0.604,0.42,1,co)"; }; 
	class desertsand { displayName = "Desert Sand"; texture = "#(argb,8,8,3)color(0.929,0.788,0.686,1,co)"; }; 
	class dimgray { displayName = "Dim Gray"; texture = "#(argb,8,8,3)color(0.412,0.412,0.412,1,co)"; }; 
	class dodgerblue { displayName = "Dodger Blue"; texture = "#(argb,8,8,3)color(0.118,0.565,1,1,co)"; }; 
	class dogwoodrose { displayName = "Dogwood Rose"; texture = "#(argb,8,8,3)color(0.843,0.094,0.408,1,co)"; }; 
	class dollarbill { displayName = "Dollar Bill"; texture = "#(argb,8,8,3)color(0.522,0.733,0.396,1,co)"; }; 
	class drab { displayName = "Drab"; texture = "#(argb,8,8,3)color(0.588,0.443,0.09,1,co)"; }; 
	class dukeblue { displayName = "Duke Blue"; texture = "#(argb,8,8,3)color(0,0,0.612,1,co)"; }; 
	class earthyellow { displayName = "Earth Yellow"; texture = "#(argb,8,8,3)color(0.882,0.663,0.373,1,co)"; }; 
	class ecru { displayName = "Ecru"; texture = "#(argb,8,8,3)color(0.761,0.698,0.502,1,co)"; }; 
	class eggplant { displayName = "Eggplant"; texture = "#(argb,8,8,3)color(0.38,0.251,0.318,1,co)"; }; 
	class eggshell { displayName = "Eggshell"; texture = "#(argb,8,8,3)color(0.941,0.918,0.839,1,co)"; }; 
	class egyptianblue { displayName = "Egyptian Blue"; texture = "#(argb,8,8,3)color(0.063,0.204,0.651,1,co)"; }; 
	class electricblue { displayName = "Electric Blue"; texture = "#(argb,8,8,3)color(0.49,0.976,1,1,co)"; }; 
	class electriccrimson { displayName = "Electric Crimson"; texture = "#(argb,8,8,3)color(1,0,0.247,1,co)"; }; 
	class electriccyan { displayName = "Electric Cyan"; texture = "#(argb,8,8,3)color(0,1,1,1,co)"; }; 
	class electricgreen { displayName = "Electric Green"; texture = "#(argb,8,8,3)color(0,1,0,1,co)"; }; 
	class electricindigo { displayName = "Electric Indigo"; texture = "#(argb,8,8,3)color(0.435,0,1,1,co)"; }; 
	class electriclavender { displayName = "Electric Lavender"; texture = "#(argb,8,8,3)color(0.957,0.733,1,1,co)"; }; 
	class electriclime { displayName = "Electric Lime"; texture = "#(argb,8,8,3)color(0.8,1,0,1,co)"; }; 
	class electricpurple { displayName = "Electric Purple"; texture = "#(argb,8,8,3)color(0.749,0,1,1,co)"; }; 
	class electricultramarine { displayName = "Electric Ultramarine"; texture = "#(argb,8,8,3)color(0.247,0,1,1,co)"; }; 
	class electricviolet { displayName = "Electric Violet"; texture = "#(argb,8,8,3)color(0.561,0,1,1,co)"; }; 
	class electricyellow { displayName = "Electric Yellow"; texture = "#(argb,8,8,3)color(1,1,0,1,co)"; }; 
	class emerald { displayName = "Emerald"; texture = "#(argb,8,8,3)color(0.314,0.784,0.471,1,co)"; }; 
	class etonblue { displayName = "Eton Blue"; texture = "#(argb,8,8,3)color(0.588,0.784,0.635,1,co)"; }; 
	class fallow { displayName = "Fallow"; texture = "#(argb,8,8,3)color(0.757,0.604,0.42,1,co)"; }; 
	class falured { displayName = "Falu Red"; texture = "#(argb,8,8,3)color(0.502,0.094,0.094,1,co)"; }; 
	class famous { displayName = "Famous"; texture = "#(argb,8,8,3)color(1,0,1,1,co)"; }; 
	class fandango { displayName = "Fandango"; texture = "#(argb,8,8,3)color(0.71,0.2,0.537,1,co)"; }; 
	class fashionfuchsia { displayName = "Fashion Fuchsia"; texture = "#(argb,8,8,3)color(0.957,0,0.631,1,co)"; }; 
	class fawn { displayName = "Fawn"; texture = "#(argb,8,8,3)color(0.898,0.667,0.439,1,co)"; }; 
	class feldgrau { displayName = "Feldgrau"; texture = "#(argb,8,8,3)color(0.302,0.365,0.325,1,co)"; }; 
	class fern { displayName = "Fern"; texture = "#(argb,8,8,3)color(0.443,0.737,0.471,1,co)"; }; 
	class ferngreen { displayName = "Fern Green"; texture = "#(argb,8,8,3)color(0.31,0.475,0.259,1,co)"; }; 
	class ferrarired { displayName = "Ferrari Red"; texture = "#(argb,8,8,3)color(1,0.157,0,1,co)"; }; 
	class fielddrab { displayName = "Field Drab"; texture = "#(argb,8,8,3)color(0.424,0.329,0.118,1,co)"; }; 
	class fireenginered { displayName = "Fire Engine Red"; texture = "#(argb,8,8,3)color(0.808,0.125,0.161,1,co)"; }; 
	class firebrick { displayName = "Firebrick"; texture = "#(argb,8,8,3)color(0.698,0.133,0.133,1,co)"; }; 
	class flame { displayName = "Flame"; texture = "#(argb,8,8,3)color(0.886,0.345,0.133,1,co)"; }; 
	class flamingopink { displayName = "Flamingo Pink"; texture = "#(argb,8,8,3)color(0.988,0.557,0.675,1,co)"; }; 
	class flavescent { displayName = "Flavescent"; texture = "#(argb,8,8,3)color(0.969,0.914,0.557,1,co)"; }; 
	class flax { displayName = "Flax"; texture = "#(argb,8,8,3)color(0.933,0.863,0.51,1,co)"; }; 
	class floralwhite { displayName = "Floral White"; texture = "#(argb,8,8,3)color(1,0.98,0.941,1,co)"; }; 
	class fluorescentorange { displayName = "Fluorescent Orange"; texture = "#(argb,8,8,3)color(1,0.749,0,1,co)"; }; 
	class fluorescentpink { displayName = "Fluorescent Pink"; texture = "#(argb,8,8,3)color(1,0.078,0.576,1,co)"; }; 
	class fluorescentyellow { displayName = "Fluorescent Yellow"; texture = "#(argb,8,8,3)color(0.8,1,0,1,co)"; }; 
	class folly { displayName = "Folly"; texture = "#(argb,8,8,3)color(1,0,0.31,1,co)"; }; 
	class forestgreen { displayName = "Forest Green"; texture = "#(argb,8,8,3)color(0.133,0.545,0.133,1,co)"; }; 
	class frenchbeige { displayName = "French Beige"; texture = "#(argb,8,8,3)color(0.651,0.482,0.357,1,co)"; }; 
	class frenchblue { displayName = "French Blue"; texture = "#(argb,8,8,3)color(0,0.447,0.733,1,co)"; }; 
	class frenchlilac { displayName = "French Lilac"; texture = "#(argb,8,8,3)color(0.525,0.376,0.557,1,co)"; }; 
	class frenchrose { displayName = "French Rose"; texture = "#(argb,8,8,3)color(0.965,0.29,0.541,1,co)"; }; 
	class fuchsia { displayName = "Fuchsia"; texture = "#(argb,8,8,3)color(1,0,1,1,co)"; }; 
	class fuchsiapink { displayName = "Fuchsia Pink"; texture = "#(argb,8,8,3)color(1,0.467,1,1,co)"; }; 
	class fulvous { displayName = "Fulvous"; texture = "#(argb,8,8,3)color(0.894,0.518,0,1,co)"; }; 
	class fuzzywuzzy { displayName = "Fuzzy Wuzzy"; texture = "#(argb,8,8,3)color(0.8,0.4,0.4,1,co)"; }; 
	class gainsboro { displayName = "Gainsboro"; texture = "#(argb,8,8,3)color(0.863,0.863,0.863,1,co)"; }; 
	class gamboge { displayName = "Gamboge"; texture = "#(argb,8,8,3)color(0.894,0.608,0.059,1,co)"; }; 
	class ghostwhite { displayName = "Ghost White"; texture = "#(argb,8,8,3)color(0.973,0.973,1,1,co)"; }; 
	class ginger { displayName = "Ginger"; texture = "#(argb,8,8,3)color(0.69,0.396,0,1,co)"; }; 
	class glaucous { displayName = "Glaucous"; texture = "#(argb,8,8,3)color(0.376,0.51,0.714,1,co)"; }; 
	class glitter { displayName = "Glitter"; texture = "#(argb,8,8,3)color(0.902,0.91,0.98,1,co)"; }; 
	class gold { displayName = "Gold"; texture = "#(argb,8,8,3)color(1,0.843,0,1,co)"; }; 
	class goldenbrown { displayName = "Golden Brown"; texture = "#(argb,8,8,3)color(0.6,0.396,0.082,1,co)"; }; 
	class goldenpoppy { displayName = "Golden Poppy"; texture = "#(argb,8,8,3)color(0.988,0.761,0,1,co)"; }; 
	class goldenyellow { displayName = "Golden Yellow"; texture = "#(argb,8,8,3)color(1,0.875,0,1,co)"; }; 
	class goldenrod { displayName = "Goldenrod"; texture = "#(argb,8,8,3)color(0.855,0.647,0.125,1,co)"; }; 
	class grannysmithapple { displayName = "Granny Smith Apple"; texture = "#(argb,8,8,3)color(0.659,0.894,0.627,1,co)"; }; 
	class gray { displayName = "Gray"; texture = "#(argb,8,8,3)color(0.502,0.502,0.502,1,co)"; }; 
	class grayasparagus { displayName = "Gray Asparagus"; texture = "#(argb,8,8,3)color(0.275,0.349,0.271,1,co)"; }; 
	class green { displayName = "Green"; texture = "#(argb,8,8,3)color(0,1,0,1,co)"; }; 
	class greenblue { displayName = "Green Blue"; texture = "#(argb,8,8,3)color(0.067,0.392,0.706,1,co)"; }; 
	class greenyellow { displayName = "Green Yellow"; texture = "#(argb,8,8,3)color(0.678,1,0.184,1,co)"; }; 
	class grullo { displayName = "Grullo"; texture = "#(argb,8,8,3)color(0.663,0.604,0.525,1,co)"; }; 
	class guppiegreen { displayName = "Guppie Green"; texture = "#(argb,8,8,3)color(0,1,0.498,1,co)"; }; 
	class halayauube { displayName = "Halaya Ube"; texture = "#(argb,8,8,3)color(0.4,0.22,0.329,1,co)"; }; 
	class hanblue { displayName = "Han Blue"; texture = "#(argb,8,8,3)color(0.267,0.424,0.812,1,co)"; }; 
	class hanpurple { displayName = "Han Purple"; texture = "#(argb,8,8,3)color(0.322,0.094,0.98,1,co)"; }; 
	class hansayellow { displayName = "Hansa Yellow"; texture = "#(argb,8,8,3)color(0.914,0.839,0.42,1,co)"; }; 
	class harlequin { displayName = "Harlequin"; texture = "#(argb,8,8,3)color(0.247,1,0,1,co)"; }; 
	class harvardcrimson { displayName = "Harvard Crimson"; texture = "#(argb,8,8,3)color(0.788,0,0.086,1,co)"; }; 
	class harvestgold { displayName = "Harvest Gold"; texture = "#(argb,8,8,3)color(0.855,0.569,0,1,co)"; }; 
	class heartgold { displayName = "Heart Gold"; texture = "#(argb,8,8,3)color(0.502,0.502,0,1,co)"; }; 
	class heliotrope { displayName = "Heliotrope"; texture = "#(argb,8,8,3)color(0.875,0.451,1,1,co)"; }; 
	class hollywoodcerise { displayName = "Hollywood Cerise"; texture = "#(argb,8,8,3)color(0.957,0,0.631,1,co)"; }; 
	class honeydew { displayName = "Honeydew"; texture = "#(argb,8,8,3)color(0.941,1,0.941,1,co)"; }; 
	class hookergreen { displayName = "Hooker Green"; texture = "#(argb,8,8,3)color(0.286,0.475,0.42,1,co)"; }; 
	class hotmagenta { displayName = "Hot Magenta"; texture = "#(argb,8,8,3)color(1,0.114,0.808,1,co)"; }; 
	class hotpink { displayName = "Hot Pink"; texture = "#(argb,8,8,3)color(1,0.412,0.706,1,co)"; }; 
	class huntergreen { displayName = "Hunter Green"; texture = "#(argb,8,8,3)color(0.208,0.369,0.231,1,co)"; }; 
	class icterine { displayName = "Icterine"; texture = "#(argb,8,8,3)color(0.988,0.969,0.369,1,co)"; }; 
	class inchworm { displayName = "Inchworm"; texture = "#(argb,8,8,3)color(0.698,0.925,0.365,1,co)"; }; 
	class indiagreen { displayName = "India Green"; texture = "#(argb,8,8,3)color(0.075,0.533,0.031,1,co)"; }; 
	class indianred { displayName = "Indian Red"; texture = "#(argb,8,8,3)color(0.804,0.361,0.361,1,co)"; }; 
	class indianyellow { displayName = "Indian Yellow"; texture = "#(argb,8,8,3)color(0.89,0.659,0.341,1,co)"; }; 
	class indigo { displayName = "Indigo"; texture = "#(argb,8,8,3)color(0.294,0,0.51,1,co)"; }; 
	class internationalkleinblue { displayName = "International Klein Blue"; texture = "#(argb,8,8,3)color(0,0.184,0.655,1,co)"; }; 
	class internationalorange { displayName = "International Orange"; texture = "#(argb,8,8,3)color(1,0.31,0,1,co)"; }; 
	class iris { displayName = "Iris"; texture = "#(argb,8,8,3)color(0.353,0.31,0.812,1,co)"; }; 
	class isabelline { displayName = "Isabelline"; texture = "#(argb,8,8,3)color(0.957,0.941,0.925,1,co)"; }; 
	class islamicgreen { displayName = "Islamic Green"; texture = "#(argb,8,8,3)color(0,0.565,0,1,co)"; }; 
	class ivory { displayName = "Ivory"; texture = "#(argb,8,8,3)color(1,1,0.941,1,co)"; }; 
	class jade { displayName = "Jade"; texture = "#(argb,8,8,3)color(0,0.659,0.42,1,co)"; }; 
	class jasmine { displayName = "Jasmine"; texture = "#(argb,8,8,3)color(0.973,0.871,0.494,1,co)"; }; 
	class jasper { displayName = "Jasper"; texture = "#(argb,8,8,3)color(0.843,0.231,0.243,1,co)"; }; 
	class jazzberryjam { displayName = "Jazzberry Jam"; texture = "#(argb,8,8,3)color(0.647,0.043,0.369,1,co)"; }; 
	class jonquil { displayName = "Jonquil"; texture = "#(argb,8,8,3)color(0.98,0.855,0.369,1,co)"; }; 
	class junebud { displayName = "June Bud"; texture = "#(argb,8,8,3)color(0.741,0.855,0.341,1,co)"; }; 
	class junglegreen { displayName = "Jungle Green"; texture = "#(argb,8,8,3)color(0.161,0.671,0.529,1,co)"; }; 
	class kucrimson { displayName = "KU Crimson"; texture = "#(argb,8,8,3)color(0.91,0,0.051,1,co)"; }; 
	class kellygreen { displayName = "Kelly Green"; texture = "#(argb,8,8,3)color(0.298,0.733,0.09,1,co)"; }; 
	class khaki { displayName = "Khaki"; texture = "#(argb,8,8,3)color(0.765,0.69,0.569,1,co)"; }; 
	class lasallegreen { displayName = "La Salle Green"; texture = "#(argb,8,8,3)color(0.031,0.471,0.188,1,co)"; }; 
	class languidlavender { displayName = "Languid Lavender"; texture = "#(argb,8,8,3)color(0.839,0.792,0.867,1,co)"; }; 
	class lapislazuli { displayName = "Lapis Lazuli"; texture = "#(argb,8,8,3)color(0.149,0.38,0.612,1,co)"; }; 
	class laserlemon { displayName = "Laser Lemon"; texture = "#(argb,8,8,3)color(0.996,0.996,0.133,1,co)"; }; 
	class laurelgreen { displayName = "Laurel Green"; texture = "#(argb,8,8,3)color(0.663,0.729,0.616,1,co)"; }; 
	class lava { displayName = "Lava"; texture = "#(argb,8,8,3)color(0.812,0.063,0.125,1,co)"; }; 
	class lavender { displayName = "Lavender"; texture = "#(argb,8,8,3)color(0.902,0.902,0.98,1,co)"; }; 
	class lavenderblue { displayName = "Lavender Blue"; texture = "#(argb,8,8,3)color(0.8,0.8,1,1,co)"; }; 
	class lavenderblush { displayName = "Lavender Blush"; texture = "#(argb,8,8,3)color(1,0.941,0.961,1,co)"; }; 
	class lavendergray { displayName = "Lavender Gray"; texture = "#(argb,8,8,3)color(0.769,0.765,0.816,1,co)"; }; 
	class lavenderindigo { displayName = "Lavender Indigo"; texture = "#(argb,8,8,3)color(0.58,0.341,0.922,1,co)"; }; 
	class lavendermagenta { displayName = "Lavender Magenta"; texture = "#(argb,8,8,3)color(0.933,0.51,0.933,1,co)"; }; 
	class lavendermist { displayName = "Lavender Mist"; texture = "#(argb,8,8,3)color(0.902,0.902,0.98,1,co)"; }; 
	class lavenderpink { displayName = "Lavender Pink"; texture = "#(argb,8,8,3)color(0.984,0.682,0.824,1,co)"; }; 
	class lavenderpurple { displayName = "Lavender Purple"; texture = "#(argb,8,8,3)color(0.588,0.482,0.714,1,co)"; }; 
	class lavenderrose { displayName = "Lavender Rose"; texture = "#(argb,8,8,3)color(0.984,0.627,0.89,1,co)"; }; 
	class lawngreen { displayName = "Lawn Green"; texture = "#(argb,8,8,3)color(0.486,0.988,0,1,co)"; }; 
	class lemon { displayName = "Lemon"; texture = "#(argb,8,8,3)color(1,0.969,0,1,co)"; }; 
	class lemonyellow { displayName = "Lemon Yellow"; texture = "#(argb,8,8,3)color(1,0.957,0.31,1,co)"; }; 
	class lemonchiffon { displayName = "Lemon Chiffon"; texture = "#(argb,8,8,3)color(1,0.98,0.804,1,co)"; }; 
	class lemonlime { displayName = "Lemon Lime"; texture = "#(argb,8,8,3)color(0.749,1,0,1,co)"; }; 
	class lightcrimson { displayName = "Light Crimson"; texture = "#(argb,8,8,3)color(0.961,0.412,0.569,1,co)"; }; 
	class lightthulianpink { displayName = "Light Thulian Pink"; texture = "#(argb,8,8,3)color(0.902,0.561,0.675,1,co)"; }; 
	class lightapricot { displayName = "Light Apricot"; texture = "#(argb,8,8,3)color(0.992,0.835,0.694,1,co)"; }; 
	class lightblue { displayName = "Light Blue"; texture = "#(argb,8,8,3)color(0.678,0.847,0.902,1,co)"; }; 
	class lightbrown { displayName = "Light Brown"; texture = "#(argb,8,8,3)color(0.71,0.396,0.114,1,co)"; }; 
	class lightcarminepink { displayName = "Light Carmine Pink"; texture = "#(argb,8,8,3)color(0.902,0.404,0.443,1,co)"; }; 
	class lightcoral { displayName = "Light Coral"; texture = "#(argb,8,8,3)color(0.941,0.502,0.502,1,co)"; }; 
	class lightcornflowerblue { displayName = "Light Cornflower Blue"; texture = "#(argb,8,8,3)color(0.576,0.8,0.918,1,co)"; }; 
	class lightcyan { displayName = "Light Cyan"; texture = "#(argb,8,8,3)color(0.878,1,1,1,co)"; }; 
	class lightfuchsiapink { displayName = "Light Fuchsia Pink"; texture = "#(argb,8,8,3)color(0.976,0.518,0.937,1,co)"; }; 
	class lightgoldenrodyellow { displayName = "Light Goldenrod Yellow"; texture = "#(argb,8,8,3)color(0.98,0.98,0.824,1,co)"; }; 
	class lightgray { displayName = "Light Gray"; texture = "#(argb,8,8,3)color(0.827,0.827,0.827,1,co)"; }; 
	class lightgreen { displayName = "Light Green"; texture = "#(argb,8,8,3)color(0.565,0.933,0.565,1,co)"; }; 
	class lightkhaki { displayName = "Light Khaki"; texture = "#(argb,8,8,3)color(0.941,0.902,0.549,1,co)"; }; 
	class lightpastelpurple { displayName = "Light Pastel Purple"; texture = "#(argb,8,8,3)color(0.694,0.612,0.851,1,co)"; }; 
	class lightpink { displayName = "Light Pink"; texture = "#(argb,8,8,3)color(1,0.714,0.757,1,co)"; }; 
	class lightsalmon { displayName = "Light Salmon"; texture = "#(argb,8,8,3)color(1,0.627,0.478,1,co)"; }; 
	class lightsalmonpink { displayName = "Light Salmon Pink"; texture = "#(argb,8,8,3)color(1,0.6,0.6,1,co)"; }; 
	class lightseagreen { displayName = "Light Sea Green"; texture = "#(argb,8,8,3)color(0.125,0.698,0.667,1,co)"; }; 
	class lightskyblue { displayName = "Light Sky Blue"; texture = "#(argb,8,8,3)color(0.529,0.808,0.98,1,co)"; }; 
	class lightslategray { displayName = "Light Slate Gray"; texture = "#(argb,8,8,3)color(0.467,0.533,0.6,1,co)"; }; 
	class lighttaupe { displayName = "Light Taupe"; texture = "#(argb,8,8,3)color(0.702,0.545,0.427,1,co)"; }; 
	class lightyellow { displayName = "Light Yellow"; texture = "#(argb,8,8,3)color(1,1,0.929,1,co)"; }; 
	class lilac { displayName = "Lilac"; texture = "#(argb,8,8,3)color(0.784,0.635,0.784,1,co)"; }; 
	class lime { displayName = "Lime"; texture = "#(argb,8,8,3)color(0.749,1,0,1,co)"; }; 
	class limegreen { displayName = "Lime Green"; texture = "#(argb,8,8,3)color(0.196,0.804,0.196,1,co)"; }; 
	class lincolngreen { displayName = "Lincoln Green"; texture = "#(argb,8,8,3)color(0.098,0.349,0.02,1,co)"; }; 
	class linen { displayName = "Linen"; texture = "#(argb,8,8,3)color(0.98,0.941,0.902,1,co)"; }; 
	class lion { displayName = "Lion"; texture = "#(argb,8,8,3)color(0.757,0.604,0.42,1,co)"; }; 
	class liver { displayName = "Liver"; texture = "#(argb,8,8,3)color(0.325,0.294,0.31,1,co)"; }; 
	class lust { displayName = "Lust"; texture = "#(argb,8,8,3)color(0.902,0.125,0.125,1,co)"; }; 
	class msugreen { displayName = "MSU Green"; texture = "#(argb,8,8,3)color(0.094,0.271,0.231,1,co)"; }; 
	class macaroniandcheese { displayName = "Macaroni And Cheese"; texture = "#(argb,8,8,3)color(1,0.741,0.533,1,co)"; }; 
	class magenta { displayName = "Magenta"; texture = "#(argb,8,8,3)color(1,0,1,1,co)"; }; 
	class magicmint { displayName = "Magic Mint"; texture = "#(argb,8,8,3)color(0.667,0.941,0.82,1,co)"; }; 
	class magnolia { displayName = "Magnolia"; texture = "#(argb,8,8,3)color(0.973,0.957,1,1,co)"; }; 
	class mahogany { displayName = "Mahogany"; texture = "#(argb,8,8,3)color(0.753,0.251,0,1,co)"; }; 
	class maize { displayName = "Maize"; texture = "#(argb,8,8,3)color(0.984,0.925,0.365,1,co)"; }; 
	class majorelleblue { displayName = "Majorelle Blue"; texture = "#(argb,8,8,3)color(0.376,0.314,0.863,1,co)"; }; 
	class malachite { displayName = "Malachite"; texture = "#(argb,8,8,3)color(0.043,0.855,0.318,1,co)"; }; 
	class manatee { displayName = "Manatee"; texture = "#(argb,8,8,3)color(0.592,0.604,0.667,1,co)"; }; 
	class mangotango { displayName = "Mango Tango"; texture = "#(argb,8,8,3)color(1,0.51,0.263,1,co)"; }; 
	class mantis { displayName = "Mantis"; texture = "#(argb,8,8,3)color(0.455,0.765,0.396,1,co)"; }; 
	class maroon { displayName = "Maroon"; texture = "#(argb,8,8,3)color(0.502,0,0,1,co)"; }; 
	class mauve { displayName = "Mauve"; texture = "#(argb,8,8,3)color(0.878,0.69,1,1,co)"; }; 
	class mauvetaupe { displayName = "Mauve Taupe"; texture = "#(argb,8,8,3)color(0.569,0.373,0.427,1,co)"; }; 
	class mauvelous { displayName = "Mauvelous"; texture = "#(argb,8,8,3)color(0.937,0.596,0.667,1,co)"; }; 
	class mayablue { displayName = "Maya Blue"; texture = "#(argb,8,8,3)color(0.451,0.761,0.984,1,co)"; }; 
	class meatbrown { displayName = "Meat Brown"; texture = "#(argb,8,8,3)color(0.898,0.718,0.231,1,co)"; }; 
	class mediumpersianblue { displayName = "Medium Persian Blue"; texture = "#(argb,8,8,3)color(0,0.404,0.647,1,co)"; }; 
	class mediumaquamarine { displayName = "Medium Aquamarine"; texture = "#(argb,8,8,3)color(0.4,0.867,0.667,1,co)"; }; 
	class mediumblue { displayName = "Medium Blue"; texture = "#(argb,8,8,3)color(0,0,0.804,1,co)"; }; 
	class mediumcandyapplered { displayName = "Medium Candy Apple Red"; texture = "#(argb,8,8,3)color(0.886,0.024,0.173,1,co)"; }; 
	class mediumcarmine { displayName = "Medium Carmine"; texture = "#(argb,8,8,3)color(0.686,0.251,0.208,1,co)"; }; 
	class mediumchampagne { displayName = "Medium Champagne"; texture = "#(argb,8,8,3)color(0.953,0.898,0.671,1,co)"; }; 
	class mediumelectricblue { displayName = "Medium Electric Blue"; texture = "#(argb,8,8,3)color(0.012,0.314,0.588,1,co)"; }; 
	class mediumjunglegreen { displayName = "Medium Jungle Green"; texture = "#(argb,8,8,3)color(0.11,0.208,0.176,1,co)"; }; 
	class mediumlavendermagenta { displayName = "Medium Lavender Magenta"; texture = "#(argb,8,8,3)color(0.867,0.627,0.867,1,co)"; }; 
	class mediumorchid { displayName = "Medium Orchid"; texture = "#(argb,8,8,3)color(0.729,0.333,0.827,1,co)"; }; 
	class mediumpurple { displayName = "Medium Purple"; texture = "#(argb,8,8,3)color(0.576,0.439,0.859,1,co)"; }; 
	class mediumredviolet { displayName = "Medium Red Violet"; texture = "#(argb,8,8,3)color(0.733,0.2,0.522,1,co)"; }; 
	class mediumseagreen { displayName = "Medium Sea Green"; texture = "#(argb,8,8,3)color(0.235,0.702,0.443,1,co)"; }; 
	class mediumslateblue { displayName = "Medium Slate Blue"; texture = "#(argb,8,8,3)color(0.482,0.408,0.933,1,co)"; }; 
	class mediumspringbud { displayName = "Medium Spring Bud"; texture = "#(argb,8,8,3)color(0.788,0.863,0.529,1,co)"; }; 
	class mediumspringgreen { displayName = "Medium Spring Green"; texture = "#(argb,8,8,3)color(0,0.98,0.604,1,co)"; }; 
	class mediumtaupe { displayName = "Medium Taupe"; texture = "#(argb,8,8,3)color(0.404,0.298,0.278,1,co)"; }; 
	class mediumtealblue { displayName = "Medium Teal Blue"; texture = "#(argb,8,8,3)color(0,0.329,0.706,1,co)"; }; 
	class mediumturquoise { displayName = "Medium Turquoise"; texture = "#(argb,8,8,3)color(0.282,0.82,0.8,1,co)"; }; 
	class mediumvioletred { displayName = "Medium Violet Red"; texture = "#(argb,8,8,3)color(0.78,0.082,0.522,1,co)"; }; 
	class melon { displayName = "Melon"; texture = "#(argb,8,8,3)color(0.992,0.737,0.706,1,co)"; }; 
	class midnightblue { displayName = "Midnight Blue"; texture = "#(argb,8,8,3)color(0.098,0.098,0.439,1,co)"; }; 
	class midnightgreen { displayName = "Midnight Green"; texture = "#(argb,8,8,3)color(0,0.286,0.325,1,co)"; }; 
	class mikadoyellow { displayName = "Mikado Yellow"; texture = "#(argb,8,8,3)color(1,0.769,0.047,1,co)"; }; 
	class mint { displayName = "Mint"; texture = "#(argb,8,8,3)color(0.243,0.706,0.537,1,co)"; }; 
	class mintcream { displayName = "Mint Cream"; texture = "#(argb,8,8,3)color(0.961,1,0.98,1,co)"; }; 
	class mintgreen { displayName = "Mint Green"; texture = "#(argb,8,8,3)color(0.596,1,0.596,1,co)"; }; 
	class mistyrose { displayName = "Misty Rose"; texture = "#(argb,8,8,3)color(1,0.894,0.882,1,co)"; }; 
	class moccasin { displayName = "Moccasin"; texture = "#(argb,8,8,3)color(0.98,0.922,0.843,1,co)"; }; 
	class modebeige { displayName = "Mode Beige"; texture = "#(argb,8,8,3)color(0.588,0.443,0.09,1,co)"; }; 
	class moonstoneblue { displayName = "Moonstone Blue"; texture = "#(argb,8,8,3)color(0.451,0.663,0.761,1,co)"; }; 
	class mordantred19 { displayName = "Mordant Red 19"; texture = "#(argb,8,8,3)color(0.682,0.047,0,1,co)"; }; 
	class mossgreen { displayName = "Moss Green"; texture = "#(argb,8,8,3)color(0.678,0.875,0.678,1,co)"; }; 
	class mountainmeadow { displayName = "Mountain Meadow"; texture = "#(argb,8,8,3)color(0.188,0.729,0.561,1,co)"; }; 
	class mountbattenpink { displayName = "Mountbatten Pink"; texture = "#(argb,8,8,3)color(0.6,0.478,0.553,1,co)"; }; 
	class mulberry { displayName = "Mulberry"; texture = "#(argb,8,8,3)color(0.773,0.294,0.549,1,co)"; }; 
	class munsell { displayName = "Munsell"; texture = "#(argb,8,8,3)color(0.949,0.953,0.957,1,co)"; }; 
	class mustard { displayName = "Mustard"; texture = "#(argb,8,8,3)color(1,0.859,0.345,1,co)"; }; 
	class myrtle { displayName = "Myrtle"; texture = "#(argb,8,8,3)color(0.129,0.259,0.118,1,co)"; }; 
	class nadeshikopink { displayName = "Nadeshiko Pink"; texture = "#(argb,8,8,3)color(0.965,0.678,0.776,1,co)"; }; 
	class napiergreen { displayName = "Napier Green"; texture = "#(argb,8,8,3)color(0.165,0.502,0,1,co)"; }; 
	class naplesyellow { displayName = "Naples Yellow"; texture = "#(argb,8,8,3)color(0.98,0.855,0.369,1,co)"; }; 
	class navajowhite { displayName = "Navajo White"; texture = "#(argb,8,8,3)color(1,0.871,0.678,1,co)"; }; 
	class navyblue { displayName = "Navy Blue"; texture = "#(argb,8,8,3)color(0,0,0.502,1,co)"; }; 
	class neoncarrot { displayName = "Neon Carrot"; texture = "#(argb,8,8,3)color(1,0.639,0.263,1,co)"; }; 
	class neonfuchsia { displayName = "Neon Fuchsia"; texture = "#(argb,8,8,3)color(0.996,0.349,0.761,1,co)"; }; 
	class neongreen { displayName = "Neon Green"; texture = "#(argb,8,8,3)color(0.224,1,0.078,1,co)"; }; 
	class nonphotoblue { displayName = "Non-photo Blue"; texture = "#(argb,8,8,3)color(0.643,0.867,0.929,1,co)"; }; 
	class northtexasgreen { displayName = "North Texas Green"; texture = "#(argb,8,8,3)color(0.02,0.565,0.2,1,co)"; }; 
	class oceanboatblue { displayName = "Ocean Boat Blue"; texture = "#(argb,8,8,3)color(0,0.467,0.745,1,co)"; }; 
	class ochre { displayName = "Ochre"; texture = "#(argb,8,8,3)color(0.8,0.467,0.133,1,co)"; }; 
	class officegreen { displayName = "Office Green"; texture = "#(argb,8,8,3)color(0,0.502,0,1,co)"; }; 
	class oldgold { displayName = "Old Gold"; texture = "#(argb,8,8,3)color(0.812,0.71,0.231,1,co)"; }; 
	class oldlace { displayName = "Old Lace"; texture = "#(argb,8,8,3)color(0.992,0.961,0.902,1,co)"; }; 
	class oldlavender { displayName = "Old Lavender"; texture = "#(argb,8,8,3)color(0.475,0.408,0.471,1,co)"; }; 
	class oldmauve { displayName = "Old Mauve"; texture = "#(argb,8,8,3)color(0.404,0.192,0.278,1,co)"; }; 
	class oldrose { displayName = "Old Rose"; texture = "#(argb,8,8,3)color(0.753,0.502,0.506,1,co)"; }; 
	class olive { displayName = "Olive"; texture = "#(argb,8,8,3)color(0.502,0.502,0,1,co)"; }; 
	class olivedrab { displayName = "Olive Drab"; texture = "#(argb,8,8,3)color(0.42,0.557,0.137,1,co)"; }; 
	class olivegreen { displayName = "Olive Green"; texture = "#(argb,8,8,3)color(0.729,0.722,0.424,1,co)"; }; 
	class olivine { displayName = "Olivine"; texture = "#(argb,8,8,3)color(0.604,0.725,0.451,1,co)"; }; 
	class onyx { displayName = "Onyx"; texture = "#(argb,8,8,3)color(0.059,0.059,0.059,1,co)"; }; 
	class operamauve { displayName = "Opera Mauve"; texture = "#(argb,8,8,3)color(0.718,0.518,0.655,1,co)"; }; 
	class orange { displayName = "Orange"; texture = "#(argb,8,8,3)color(1,0.647,0,1,co)"; }; 
	class orangeyellow { displayName = "Orange Yellow"; texture = "#(argb,8,8,3)color(0.973,0.835,0.408,1,co)"; }; 
	class orangepeel { displayName = "Orange Peel"; texture = "#(argb,8,8,3)color(1,0.624,0,1,co)"; }; 
	class orangered { displayName = "Orange Red"; texture = "#(argb,8,8,3)color(1,0.271,0,1,co)"; }; 
	class orchid { displayName = "Orchid"; texture = "#(argb,8,8,3)color(0.855,0.439,0.839,1,co)"; }; 
	class otterbrown { displayName = "Otter Brown"; texture = "#(argb,8,8,3)color(0.396,0.263,0.129,1,co)"; }; 
	class outerspace { displayName = "Outer Space"; texture = "#(argb,8,8,3)color(0.255,0.29,0.298,1,co)"; }; 
	class outrageousorange { displayName = "Outrageous Orange"; texture = "#(argb,8,8,3)color(1,0.431,0.29,1,co)"; }; 
	class oxfordblue { displayName = "Oxford Blue"; texture = "#(argb,8,8,3)color(0,0.129,0.278,1,co)"; }; 
	class pacificblue { displayName = "Pacific Blue"; texture = "#(argb,8,8,3)color(0.11,0.663,0.788,1,co)"; }; 
	class pakistangreen { displayName = "Pakistan Green"; texture = "#(argb,8,8,3)color(0,0.4,0,1,co)"; }; 
	class palatinateblue { displayName = "Palatinate Blue"; texture = "#(argb,8,8,3)color(0.153,0.231,0.886,1,co)"; }; 
	class palatinatepurple { displayName = "Palatinate Purple"; texture = "#(argb,8,8,3)color(0.408,0.157,0.376,1,co)"; }; 
	class paleaqua { displayName = "Pale Aqua"; texture = "#(argb,8,8,3)color(0.737,0.831,0.902,1,co)"; }; 
	class paleblue { displayName = "Pale Blue"; texture = "#(argb,8,8,3)color(0.686,0.933,0.933,1,co)"; }; 
	class palebrown { displayName = "Pale Brown"; texture = "#(argb,8,8,3)color(0.596,0.463,0.329,1,co)"; }; 
	class palecarmine { displayName = "Pale Carmine"; texture = "#(argb,8,8,3)color(0.686,0.251,0.208,1,co)"; }; 
	class palecerulean { displayName = "Pale Cerulean"; texture = "#(argb,8,8,3)color(0.608,0.769,0.886,1,co)"; }; 
	class palechestnut { displayName = "Pale Chestnut"; texture = "#(argb,8,8,3)color(0.867,0.678,0.686,1,co)"; }; 
	class palecopper { displayName = "Pale Copper"; texture = "#(argb,8,8,3)color(0.855,0.541,0.404,1,co)"; }; 
	class palecornflowerblue { displayName = "Pale Cornflower Blue"; texture = "#(argb,8,8,3)color(0.671,0.804,0.937,1,co)"; }; 
	class palegold { displayName = "Pale Gold"; texture = "#(argb,8,8,3)color(0.902,0.745,0.541,1,co)"; }; 
	class palegoldenrod { displayName = "Pale Goldenrod"; texture = "#(argb,8,8,3)color(0.933,0.91,0.667,1,co)"; }; 
	class palegreen { displayName = "Pale Green"; texture = "#(argb,8,8,3)color(0.596,0.984,0.596,1,co)"; }; 
	class palelavender { displayName = "Pale Lavender"; texture = "#(argb,8,8,3)color(0.863,0.816,1,1,co)"; }; 
	class palemagenta { displayName = "Pale Magenta"; texture = "#(argb,8,8,3)color(0.976,0.518,0.898,1,co)"; }; 
	class palepink { displayName = "Pale Pink"; texture = "#(argb,8,8,3)color(0.98,0.855,0.867,1,co)"; }; 
	class paleplum { displayName = "Pale Plum"; texture = "#(argb,8,8,3)color(0.867,0.627,0.867,1,co)"; }; 
	class paleredviolet { displayName = "Pale Red Violet"; texture = "#(argb,8,8,3)color(0.859,0.439,0.576,1,co)"; }; 
	class palerobineggblue { displayName = "Pale Robin Egg Blue"; texture = "#(argb,8,8,3)color(0.588,0.871,0.82,1,co)"; }; 
	class palesilver { displayName = "Pale Silver"; texture = "#(argb,8,8,3)color(0.788,0.753,0.733,1,co)"; }; 
	class palespringbud { displayName = "Pale Spring Bud"; texture = "#(argb,8,8,3)color(0.925,0.922,0.741,1,co)"; }; 
	class paletaupe { displayName = "Pale Taupe"; texture = "#(argb,8,8,3)color(0.737,0.596,0.494,1,co)"; }; 
	class palevioletred { displayName = "Pale Violet Red"; texture = "#(argb,8,8,3)color(0.859,0.439,0.576,1,co)"; }; 
	class pansypurple { displayName = "Pansy Purple"; texture = "#(argb,8,8,3)color(0.471,0.094,0.29,1,co)"; }; 
	class papayawhip { displayName = "Papaya Whip"; texture = "#(argb,8,8,3)color(1,0.937,0.835,1,co)"; }; 
	class parisgreen { displayName = "Paris Green"; texture = "#(argb,8,8,3)color(0.314,0.784,0.471,1,co)"; }; 
	class pastelblue { displayName = "Pastel Blue"; texture = "#(argb,8,8,3)color(0.682,0.776,0.812,1,co)"; }; 
	class pastelbrown { displayName = "Pastel Brown"; texture = "#(argb,8,8,3)color(0.514,0.412,0.325,1,co)"; }; 
	class pastelgray { displayName = "Pastel Gray"; texture = "#(argb,8,8,3)color(0.812,0.812,0.769,1,co)"; }; 
	class pastelgreen { displayName = "Pastel Green"; texture = "#(argb,8,8,3)color(0.467,0.867,0.467,1,co)"; }; 
	class pastelmagenta { displayName = "Pastel Magenta"; texture = "#(argb,8,8,3)color(0.957,0.604,0.761,1,co)"; }; 
	class pastelorange { displayName = "Pastel Orange"; texture = "#(argb,8,8,3)color(1,0.702,0.278,1,co)"; }; 
	class pastelpink { displayName = "Pastel Pink"; texture = "#(argb,8,8,3)color(1,0.82,0.863,1,co)"; }; 
	class pastelpurple { displayName = "Pastel Purple"; texture = "#(argb,8,8,3)color(0.702,0.62,0.71,1,co)"; }; 
	class pastelred { displayName = "Pastel Red"; texture = "#(argb,8,8,3)color(1,0.412,0.38,1,co)"; }; 
	class pastelviolet { displayName = "Pastel Violet"; texture = "#(argb,8,8,3)color(0.796,0.6,0.788,1,co)"; }; 
	class pastelyellow { displayName = "Pastel Yellow"; texture = "#(argb,8,8,3)color(0.992,0.992,0.588,1,co)"; }; 
	class patriarch { displayName = "Patriarch"; texture = "#(argb,8,8,3)color(0.502,0,0.502,1,co)"; }; 
	class paynegrey { displayName = "Payne Grey"; texture = "#(argb,8,8,3)color(0.325,0.408,0.471,1,co)"; }; 
	class peach { displayName = "Peach"; texture = "#(argb,8,8,3)color(1,0.898,0.706,1,co)"; }; 
	class peachpuff { displayName = "Peach Puff"; texture = "#(argb,8,8,3)color(1,0.855,0.725,1,co)"; }; 
	class peachyellow { displayName = "Peach Yellow"; texture = "#(argb,8,8,3)color(0.98,0.875,0.678,1,co)"; }; 
	class pear { displayName = "Pear"; texture = "#(argb,8,8,3)color(0.82,0.886,0.192,1,co)"; }; 
	class pearl { displayName = "Pearl"; texture = "#(argb,8,8,3)color(0.918,0.878,0.784,1,co)"; }; 
	class pearlaqua { displayName = "Pearl Aqua"; texture = "#(argb,8,8,3)color(0.533,0.847,0.753,1,co)"; }; 
	class peridot { displayName = "Peridot"; texture = "#(argb,8,8,3)color(0.902,0.886,0,1,co)"; }; 
	class periwinkle { displayName = "Periwinkle"; texture = "#(argb,8,8,3)color(0.8,0.8,1,1,co)"; }; 
	class persianblue { displayName = "Persian Blue"; texture = "#(argb,8,8,3)color(0.11,0.224,0.733,1,co)"; }; 
	class persianindigo { displayName = "Persian Indigo"; texture = "#(argb,8,8,3)color(0.196,0.071,0.478,1,co)"; }; 
	class persianorange { displayName = "Persian Orange"; texture = "#(argb,8,8,3)color(0.851,0.565,0.345,1,co)"; }; 
	class persianpink { displayName = "Persian Pink"; texture = "#(argb,8,8,3)color(0.969,0.498,0.745,1,co)"; }; 
	class persianplum { displayName = "Persian Plum"; texture = "#(argb,8,8,3)color(0.439,0.11,0.11,1,co)"; }; 
	class persianred { displayName = "Persian Red"; texture = "#(argb,8,8,3)color(0.8,0.2,0.2,1,co)"; }; 
	class persianrose { displayName = "Persian Rose"; texture = "#(argb,8,8,3)color(0.996,0.157,0.635,1,co)"; }; 
	class phlox { displayName = "Phlox"; texture = "#(argb,8,8,3)color(0.875,0,1,1,co)"; }; 
	class phthaloblue { displayName = "Phthalo Blue"; texture = "#(argb,8,8,3)color(0,0.059,0.537,1,co)"; }; 
	class phthalogreen { displayName = "Phthalo Green"; texture = "#(argb,8,8,3)color(0.071,0.208,0.141,1,co)"; }; 
	class piggypink { displayName = "Piggy Pink"; texture = "#(argb,8,8,3)color(0.992,0.867,0.902,1,co)"; }; 
	class pinegreen { displayName = "Pine Green"; texture = "#(argb,8,8,3)color(0.004,0.475,0.435,1,co)"; }; 
	class pink { displayName = "Pink"; texture = "#(argb,8,8,3)color(1,0.753,0.796,1,co)"; }; 
	class pinkflamingo { displayName = "Pink Flamingo"; texture = "#(argb,8,8,3)color(0.988,0.455,0.992,1,co)"; }; 
	class pinksherbet { displayName = "Pink Sherbet"; texture = "#(argb,8,8,3)color(0.969,0.561,0.655,1,co)"; }; 
	class pinkpearl { displayName = "Pink Pearl"; texture = "#(argb,8,8,3)color(0.906,0.675,0.812,1,co)"; }; 
	class pistachio { displayName = "Pistachio"; texture = "#(argb,8,8,3)color(0.576,0.773,0.447,1,co)"; }; 
	class platinum { displayName = "Platinum"; texture = "#(argb,8,8,3)color(0.898,0.894,0.886,1,co)"; }; 
	class plum { displayName = "Plum"; texture = "#(argb,8,8,3)color(0.867,0.627,0.867,1,co)"; }; 
	class portlandorange { displayName = "Portland Orange"; texture = "#(argb,8,8,3)color(1,0.353,0.212,1,co)"; }; 
	class powderblue { displayName = "Powder Blue"; texture = "#(argb,8,8,3)color(0.69,0.878,0.902,1,co)"; }; 
	class princetonorange { displayName = "Princeton Orange"; texture = "#(argb,8,8,3)color(1,0.561,0,1,co)"; }; 
	class prussianblue { displayName = "Prussian Blue"; texture = "#(argb,8,8,3)color(0,0.192,0.325,1,co)"; }; 
	class psychedelicpurple { displayName = "Psychedelic Purple"; texture = "#(argb,8,8,3)color(0.875,0,1,1,co)"; }; 
	class puce { displayName = "Puce"; texture = "#(argb,8,8,3)color(0.8,0.533,0.6,1,co)"; }; 
	class pumpkin { displayName = "Pumpkin"; texture = "#(argb,8,8,3)color(1,0.459,0.094,1,co)"; }; 
	class purple { displayName = "Purple"; texture = "#(argb,8,8,3)color(0.502,0,0.502,1,co)"; }; 
	class purpleheart { displayName = "Purple Heart"; texture = "#(argb,8,8,3)color(0.412,0.208,0.612,1,co)"; }; 
	class purplemountainsmajesty { displayName = "Purple Mountain's Majesty"; texture = "#(argb,8,8,3)color(0.616,0.506,0.729,1,co)"; }; 
	class purplepizzazz { displayName = "Purple Pizzazz"; texture = "#(argb,8,8,3)color(0.996,0.306,0.855,1,co)"; }; 
	class purpletaupe { displayName = "Purple Taupe"; texture = "#(argb,8,8,3)color(0.314,0.251,0.302,1,co)"; }; 
	class rackley { displayName = "Rackley"; texture = "#(argb,8,8,3)color(0.365,0.541,0.659,1,co)"; }; 
	class radicalred { displayName = "Radical Red"; texture = "#(argb,8,8,3)color(1,0.208,0.369,1,co)"; }; 
	class raspberry { displayName = "Raspberry"; texture = "#(argb,8,8,3)color(0.89,0.043,0.365,1,co)"; }; 
	class raspberryglace { displayName = "Raspberry Glace"; texture = "#(argb,8,8,3)color(0.569,0.373,0.427,1,co)"; }; 
	class raspberrypink { displayName = "Raspberry Pink"; texture = "#(argb,8,8,3)color(0.886,0.314,0.596,1,co)"; }; 
	class raspberryrose { displayName = "Raspberry Rose"; texture = "#(argb,8,8,3)color(0.702,0.267,0.424,1,co)"; }; 
	class rawsienna { displayName = "Raw Sienna"; texture = "#(argb,8,8,3)color(0.839,0.541,0.349,1,co)"; }; 
	class razzledazzlerose { displayName = "Razzle Dazzle Rose"; texture = "#(argb,8,8,3)color(1,0.2,0.8,1,co)"; }; 
	class razzmatazz { displayName = "Razzmatazz"; texture = "#(argb,8,8,3)color(0.89,0.145,0.42,1,co)"; }; 
	class red { displayName = "Red"; texture = "#(argb,8,8,3)color(1,0,0,1,co)"; }; 
	class redorange { displayName = "Red Orange"; texture = "#(argb,8,8,3)color(1,0.325,0.286,1,co)"; }; 
	class redbrown { displayName = "Red Brown"; texture = "#(argb,8,8,3)color(0.647,0.165,0.165,1,co)"; }; 
	class redviolet { displayName = "Red Violet"; texture = "#(argb,8,8,3)color(0.78,0.082,0.522,1,co)"; }; 
	class richblack { displayName = "Rich Black"; texture = "#(argb,8,8,3)color(0,0.251,0.251,1,co)"; }; 
	class richcarmine { displayName = "Rich Carmine"; texture = "#(argb,8,8,3)color(0.843,0,0.251,1,co)"; }; 
	class richelectricblue { displayName = "Rich Electric Blue"; texture = "#(argb,8,8,3)color(0.031,0.573,0.816,1,co)"; }; 
	class richlilac { displayName = "Rich Lilac"; texture = "#(argb,8,8,3)color(0.714,0.4,0.824,1,co)"; }; 
	class richmaroon { displayName = "Rich Maroon"; texture = "#(argb,8,8,3)color(0.69,0.188,0.376,1,co)"; }; 
	class riflegreen { displayName = "Rifle Green"; texture = "#(argb,8,8,3)color(0.255,0.282,0.2,1,co)"; }; 
	class robinseggblue { displayName = "Robins Egg Blue"; texture = "#(argb,8,8,3)color(0.122,0.808,0.796,1,co)"; }; 
	class rose { displayName = "Rose"; texture = "#(argb,8,8,3)color(1,0,0.498,1,co)"; }; 
	class rosebonbon { displayName = "Rose Bonbon"; texture = "#(argb,8,8,3)color(0.976,0.259,0.62,1,co)"; }; 
	class roseebony { displayName = "Rose Ebony"; texture = "#(argb,8,8,3)color(0.404,0.282,0.275,1,co)"; }; 
	class rosegold { displayName = "Rose Gold"; texture = "#(argb,8,8,3)color(0.718,0.431,0.475,1,co)"; }; 
	class rosemadder { displayName = "Rose Madder"; texture = "#(argb,8,8,3)color(0.89,0.149,0.212,1,co)"; }; 
	class rosepink { displayName = "Rose Pink"; texture = "#(argb,8,8,3)color(1,0.4,0.8,1,co)"; }; 
	class rosequartz { displayName = "Rose Quartz"; texture = "#(argb,8,8,3)color(0.667,0.596,0.663,1,co)"; }; 
	class rosetaupe { displayName = "Rose Taupe"; texture = "#(argb,8,8,3)color(0.565,0.365,0.365,1,co)"; }; 
	class rosevale { displayName = "Rose Vale"; texture = "#(argb,8,8,3)color(0.671,0.306,0.322,1,co)"; }; 
	class rosewood { displayName = "Rosewood"; texture = "#(argb,8,8,3)color(0.396,0,0.043,1,co)"; }; 
	class rossocorsa { displayName = "Rosso Corsa"; texture = "#(argb,8,8,3)color(0.831,0,0,1,co)"; }; 
	class rosybrown { displayName = "Rosy Brown"; texture = "#(argb,8,8,3)color(0.737,0.561,0.561,1,co)"; }; 
	class royalazure { displayName = "Royal Azure"; texture = "#(argb,8,8,3)color(0,0.22,0.659,1,co)"; }; 
	class royalblue { displayName = "Royal Blue"; texture = "#(argb,8,8,3)color(0.255,0.412,0.882,1,co)"; }; 
	class royalfuchsia { displayName = "Royal Fuchsia"; texture = "#(argb,8,8,3)color(0.792,0.173,0.573,1,co)"; }; 
	class royalpurple { displayName = "Royal Purple"; texture = "#(argb,8,8,3)color(0.471,0.318,0.663,1,co)"; }; 
	class ruby { displayName = "Ruby"; texture = "#(argb,8,8,3)color(0.878,0.067,0.373,1,co)"; }; 
	class ruddy { displayName = "Ruddy"; texture = "#(argb,8,8,3)color(1,0,0.157,1,co)"; }; 
	class ruddybrown { displayName = "Ruddy Brown"; texture = "#(argb,8,8,3)color(0.733,0.396,0.157,1,co)"; }; 
	class ruddypink { displayName = "Ruddy Pink"; texture = "#(argb,8,8,3)color(0.882,0.557,0.588,1,co)"; }; 
	class rufous { displayName = "Rufous"; texture = "#(argb,8,8,3)color(0.659,0.11,0.027,1,co)"; }; 
	class russet { displayName = "Russet"; texture = "#(argb,8,8,3)color(0.502,0.275,0.106,1,co)"; }; 
	class rust { displayName = "Rust"; texture = "#(argb,8,8,3)color(0.718,0.255,0.055,1,co)"; }; 
	class sacramentostategreen { displayName = "Sacramento State Green"; texture = "#(argb,8,8,3)color(0,0.337,0.247,1,co)"; }; 
	class saddlebrown { displayName = "Saddle Brown"; texture = "#(argb,8,8,3)color(0.545,0.271,0.075,1,co)"; }; 
	class safetyorange { displayName = "Safety Orange"; texture = "#(argb,8,8,3)color(1,0.404,0,1,co)"; }; 
	class saffron { displayName = "Saffron"; texture = "#(argb,8,8,3)color(0.957,0.769,0.188,1,co)"; }; 
	class saintpatrickblue { displayName = "Saint Patrick Blue"; texture = "#(argb,8,8,3)color(0.137,0.161,0.478,1,co)"; }; 
	class salmon { displayName = "Salmon"; texture = "#(argb,8,8,3)color(1,0.549,0.412,1,co)"; }; 
	class salmonpink { displayName = "Salmon Pink"; texture = "#(argb,8,8,3)color(1,0.569,0.643,1,co)"; }; 
	class sand { displayName = "Sand"; texture = "#(argb,8,8,3)color(0.761,0.698,0.502,1,co)"; }; 
	class sanddune { displayName = "Sand Dune"; texture = "#(argb,8,8,3)color(0.588,0.443,0.09,1,co)"; }; 
	class sandstorm { displayName = "Sandstorm"; texture = "#(argb,8,8,3)color(0.925,0.835,0.251,1,co)"; }; 
	class sandybrown { displayName = "Sandy Brown"; texture = "#(argb,8,8,3)color(0.957,0.643,0.376,1,co)"; }; 
	class sandytaupe { displayName = "Sandy Taupe"; texture = "#(argb,8,8,3)color(0.588,0.443,0.09,1,co)"; }; 
	class sapgreen { displayName = "Sap Green"; texture = "#(argb,8,8,3)color(0.314,0.49,0.165,1,co)"; }; 
	class sapphire { displayName = "Sapphire"; texture = "#(argb,8,8,3)color(0.059,0.322,0.729,1,co)"; }; 
	class satinsheengold { displayName = "Satin Sheen Gold"; texture = "#(argb,8,8,3)color(0.796,0.631,0.208,1,co)"; }; 
	class scarlet { displayName = "Scarlet"; texture = "#(argb,8,8,3)color(1,0.141,0,1,co)"; }; 
	class schoolbusyellow { displayName = "School Bus Yellow"; texture = "#(argb,8,8,3)color(1,0.847,0,1,co)"; }; 
	class screamingreen { displayName = "Screamin Green"; texture = "#(argb,8,8,3)color(0.463,1,0.478,1,co)"; }; 
	class seablue { displayName = "Sea Blue"; texture = "#(argb,8,8,3)color(0,0.412,0.58,1,co)"; }; 
	class seagreen { displayName = "Sea Green"; texture = "#(argb,8,8,3)color(0.18,0.545,0.341,1,co)"; }; 
	class sealbrown { displayName = "Seal Brown"; texture = "#(argb,8,8,3)color(0.196,0.078,0.078,1,co)"; }; 
	class seashell { displayName = "Seashell"; texture = "#(argb,8,8,3)color(1,0.961,0.933,1,co)"; }; 
	class selectiveyellow { displayName = "Selective Yellow"; texture = "#(argb,8,8,3)color(1,0.729,0,1,co)"; }; 
	class sepia { displayName = "Sepia"; texture = "#(argb,8,8,3)color(0.439,0.259,0.078,1,co)"; }; 
	class shadow { displayName = "Shadow"; texture = "#(argb,8,8,3)color(0.541,0.475,0.365,1,co)"; }; 
	class shamrock { displayName = "Shamrock"; texture = "#(argb,8,8,3)color(0.271,0.808,0.635,1,co)"; }; 
	class shamrockgreen { displayName = "Shamrock Green"; texture = "#(argb,8,8,3)color(0,0.62,0.376,1,co)"; }; 
	class shockingpink { displayName = "Shocking Pink"; texture = "#(argb,8,8,3)color(0.988,0.059,0.753,1,co)"; }; 
	class sienna { displayName = "Sienna"; texture = "#(argb,8,8,3)color(0.533,0.176,0.09,1,co)"; }; 
	class silver { displayName = "Silver"; texture = "#(argb,8,8,3)color(0.753,0.753,0.753,1,co)"; }; 
	class sinopia { displayName = "Sinopia"; texture = "#(argb,8,8,3)color(0.796,0.255,0.043,1,co)"; }; 
	class skobeloff { displayName = "Skobeloff"; texture = "#(argb,8,8,3)color(0,0.455,0.455,1,co)"; }; 
	class skyblue { displayName = "Sky Blue"; texture = "#(argb,8,8,3)color(0.529,0.808,0.922,1,co)"; }; 
	class skymagenta { displayName = "Sky Magenta"; texture = "#(argb,8,8,3)color(0.812,0.443,0.686,1,co)"; }; 
	class slateblue { displayName = "Slate Blue"; texture = "#(argb,8,8,3)color(0.416,0.353,0.804,1,co)"; }; 
	class slategray { displayName = "Slate Gray"; texture = "#(argb,8,8,3)color(0.439,0.502,0.565,1,co)"; }; 
	class smalt { displayName = "Smalt"; texture = "#(argb,8,8,3)color(0,0.2,0.6,1,co)"; }; 
	class smokeytopaz { displayName = "Smokey Topaz"; texture = "#(argb,8,8,3)color(0.576,0.239,0.255,1,co)"; }; 
	class smokyblack { displayName = "Smoky Black"; texture = "#(argb,8,8,3)color(0.063,0.047,0.031,1,co)"; }; 
	class snow { displayName = "Snow"; texture = "#(argb,8,8,3)color(1,0.98,0.98,1,co)"; }; 
	class spirodiscoball { displayName = "Spiro Disco Ball"; texture = "#(argb,8,8,3)color(0.059,0.753,0.988,1,co)"; }; 
	class springbud { displayName = "Spring Bud"; texture = "#(argb,8,8,3)color(0.655,0.988,0,1,co)"; }; 
	class springgreen { displayName = "Spring Green"; texture = "#(argb,8,8,3)color(0,1,0.498,1,co)"; }; 
	class steelblue { displayName = "Steel Blue"; texture = "#(argb,8,8,3)color(0.275,0.51,0.706,1,co)"; }; 
	class stildegrainyellow { displayName = "Stil De Grain Yellow"; texture = "#(argb,8,8,3)color(0.98,0.855,0.369,1,co)"; }; 
	class stizza { displayName = "Stizza"; texture = "#(argb,8,8,3)color(0.6,0,0,1,co)"; }; 
	class stormcloud { displayName = "Stormcloud"; texture = "#(argb,8,8,3)color(0,0.502,0.502,1,co)"; }; 
	class straw { displayName = "Straw"; texture = "#(argb,8,8,3)color(0.894,0.851,0.435,1,co)"; }; 
	class sunglow { displayName = "Sunglow"; texture = "#(argb,8,8,3)color(1,0.8,0.2,1,co)"; }; 
	class sunset { displayName = "Sunset"; texture = "#(argb,8,8,3)color(0.98,0.839,0.647,1,co)"; }; 
	class sunsetorange { displayName = "Sunset Orange"; texture = "#(argb,8,8,3)color(0.992,0.369,0.325,1,co)"; }; 
	class tan { displayName = "Tan"; texture = "#(argb,8,8,3)color(0.824,0.706,0.549,1,co)"; }; 
	class tangelo { displayName = "Tangelo"; texture = "#(argb,8,8,3)color(0.976,0.302,0,1,co)"; }; 
	class tangerine { displayName = "Tangerine"; texture = "#(argb,8,8,3)color(0.949,0.522,0,1,co)"; }; 
	class tangerineyellow { displayName = "Tangerine Yellow"; texture = "#(argb,8,8,3)color(1,0.8,0,1,co)"; }; 
	class taupe { displayName = "Taupe"; texture = "#(argb,8,8,3)color(0.282,0.235,0.196,1,co)"; }; 
	class taupegray { displayName = "Taupe Gray"; texture = "#(argb,8,8,3)color(0.545,0.522,0.537,1,co)"; }; 
	class tawny { displayName = "Tawny"; texture = "#(argb,8,8,3)color(0.804,0.341,0,1,co)"; }; 
	class teagreen { displayName = "Tea Green"; texture = "#(argb,8,8,3)color(0.816,0.941,0.753,1,co)"; }; 
	class tearose { displayName = "Tea Rose"; texture = "#(argb,8,8,3)color(0.957,0.761,0.761,1,co)"; }; 
	class teal { displayName = "Teal"; texture = "#(argb,8,8,3)color(0,0.502,0.502,1,co)"; }; 
	class tealblue { displayName = "Teal Blue"; texture = "#(argb,8,8,3)color(0.212,0.459,0.533,1,co)"; }; 
	class tealgreen { displayName = "Teal Green"; texture = "#(argb,8,8,3)color(0,0.427,0.357,1,co)"; }; 
	class terracotta { displayName = "Terra Cotta"; texture = "#(argb,8,8,3)color(0.886,0.447,0.357,1,co)"; }; 
	class thistle { displayName = "Thistle"; texture = "#(argb,8,8,3)color(0.847,0.749,0.847,1,co)"; }; 
	class thulianpink { displayName = "Thulian Pink"; texture = "#(argb,8,8,3)color(0.871,0.435,0.631,1,co)"; }; 
	class ticklemepink { displayName = "Tickle Me Pink"; texture = "#(argb,8,8,3)color(0.988,0.537,0.675,1,co)"; }; 
	class tiffanyblue { displayName = "Tiffany Blue"; texture = "#(argb,8,8,3)color(0.039,0.729,0.71,1,co)"; }; 
	class tigereye { displayName = "Tiger Eye"; texture = "#(argb,8,8,3)color(0.878,0.553,0.235,1,co)"; }; 
	class timberwolf { displayName = "Timberwolf"; texture = "#(argb,8,8,3)color(0.859,0.843,0.824,1,co)"; }; 
	class titaniumyellow { displayName = "Titanium Yellow"; texture = "#(argb,8,8,3)color(0.933,0.902,0,1,co)"; }; 
	class tomato { displayName = "Tomato"; texture = "#(argb,8,8,3)color(1,0.388,0.278,1,co)"; }; 
	class toolbox { displayName = "Toolbox"; texture = "#(argb,8,8,3)color(0.455,0.424,0.753,1,co)"; }; 
	class topaz { displayName = "Topaz"; texture = "#(argb,8,8,3)color(1,0.784,0.486,1,co)"; }; 
	class tractorred { displayName = "Tractor Red"; texture = "#(argb,8,8,3)color(0.992,0.055,0.208,1,co)"; }; 
	class trolleygrey { displayName = "Trolley Grey"; texture = "#(argb,8,8,3)color(0.502,0.502,0.502,1,co)"; }; 
	class tropicalrainforest { displayName = "Tropical Rain Forest"; texture = "#(argb,8,8,3)color(0,0.459,0.369,1,co)"; }; 
	class trueblue { displayName = "True Blue"; texture = "#(argb,8,8,3)color(0,0.451,0.812,1,co)"; }; 
	class tuftsblue { displayName = "Tufts Blue"; texture = "#(argb,8,8,3)color(0.255,0.49,0.757,1,co)"; }; 
	class tumbleweed { displayName = "Tumbleweed"; texture = "#(argb,8,8,3)color(0.871,0.667,0.533,1,co)"; }; 
	class turkishrose { displayName = "Turkish Rose"; texture = "#(argb,8,8,3)color(0.71,0.447,0.506,1,co)"; }; 
	class turquoise { displayName = "Turquoise"; texture = "#(argb,8,8,3)color(0.188,0.835,0.784,1,co)"; }; 
	class turquoiseblue { displayName = "Turquoise Blue"; texture = "#(argb,8,8,3)color(0,1,0.937,1,co)"; }; 
	class turquoisegreen { displayName = "Turquoise Green"; texture = "#(argb,8,8,3)color(0.627,0.839,0.706,1,co)"; }; 
	class tuscanred { displayName = "Tuscan Red"; texture = "#(argb,8,8,3)color(0.4,0.259,0.302,1,co)"; }; 
	class twilightlavender { displayName = "Twilight Lavender"; texture = "#(argb,8,8,3)color(0.541,0.286,0.42,1,co)"; }; 
	class tyrianpurple { displayName = "Tyrian Purple"; texture = "#(argb,8,8,3)color(0.4,0.008,0.235,1,co)"; }; 
	class uablue { displayName = "UA Blue"; texture = "#(argb,8,8,3)color(0,0.2,0.667,1,co)"; }; 
	class uared { displayName = "UA Red"; texture = "#(argb,8,8,3)color(0.851,0,0.298,1,co)"; }; 
	class uclablue { displayName = "UCLA Blue"; texture = "#(argb,8,8,3)color(0.325,0.408,0.584,1,co)"; }; 
	class uclagold { displayName = "UCLA Gold"; texture = "#(argb,8,8,3)color(1,0.702,0,1,co)"; }; 
	class ufogreen { displayName = "UFO Green"; texture = "#(argb,8,8,3)color(0.235,0.816,0.439,1,co)"; }; 
	class upforestgreen { displayName = "UP Forest Green"; texture = "#(argb,8,8,3)color(0.004,0.267,0.129,1,co)"; }; 
	class upmaroon { displayName = "UP Maroon"; texture = "#(argb,8,8,3)color(0.482,0.067,0.075,1,co)"; }; 
	class usccardinal { displayName = "USC Cardinal"; texture = "#(argb,8,8,3)color(0.6,0,0,1,co)"; }; 
	class uscgold { displayName = "USC Gold"; texture = "#(argb,8,8,3)color(1,0.8,0,1,co)"; }; 
	class ube { displayName = "Ube"; texture = "#(argb,8,8,3)color(0.533,0.471,0.765,1,co)"; }; 
	class ultrapink { displayName = "Ultra Pink"; texture = "#(argb,8,8,3)color(1,0.435,1,1,co)"; }; 
	class ultramarine { displayName = "Ultramarine"; texture = "#(argb,8,8,3)color(0.071,0.039,0.561,1,co)"; }; 
	class ultramarineblue { displayName = "Ultramarine Blue"; texture = "#(argb,8,8,3)color(0.255,0.4,0.961,1,co)"; }; 
	class umber { displayName = "Umber"; texture = "#(argb,8,8,3)color(0.388,0.318,0.278,1,co)"; }; 
	class unitednationsblue { displayName = "United Nations Blue"; texture = "#(argb,8,8,3)color(0.357,0.573,0.898,1,co)"; }; 
	class universityofcaliforniagold { displayName = "University Of California Gold"; texture = "#(argb,8,8,3)color(0.718,0.529,0.153,1,co)"; }; 
	class unmellowyellow { displayName = "Unmellow Yellow"; texture = "#(argb,8,8,3)color(1,1,0.4,1,co)"; }; 
	class upsdellred { displayName = "Upsdell Red"; texture = "#(argb,8,8,3)color(0.682,0.125,0.161,1,co)"; }; 
	class urobilin { displayName = "Urobilin"; texture = "#(argb,8,8,3)color(0.882,0.678,0.129,1,co)"; }; 
	class utahcrimson { displayName = "Utah Crimson"; texture = "#(argb,8,8,3)color(0.827,0,0.247,1,co)"; }; 
	class vanilla { displayName = "Vanilla"; texture = "#(argb,8,8,3)color(0.953,0.898,0.671,1,co)"; }; 
	class vegasgold { displayName = "Vegas Gold"; texture = "#(argb,8,8,3)color(0.773,0.702,0.345,1,co)"; }; 
	class venetianred { displayName = "Venetian Red"; texture = "#(argb,8,8,3)color(0.784,0.031,0.082,1,co)"; }; 
	class verdigris { displayName = "Verdigris"; texture = "#(argb,8,8,3)color(0.263,0.702,0.682,1,co)"; }; 
	class vermilion { displayName = "Vermilion"; texture = "#(argb,8,8,3)color(0.89,0.259,0.204,1,co)"; }; 
	class veronica { displayName = "Veronica"; texture = "#(argb,8,8,3)color(0.627,0.125,0.941,1,co)"; }; 
	class violet { displayName = "Violet"; texture = "#(argb,8,8,3)color(0.933,0.51,0.933,1,co)"; }; 
	class violetblue { displayName = "Violet Blue"; texture = "#(argb,8,8,3)color(0.196,0.29,0.698,1,co)"; }; 
	class violetred { displayName = "Violet Red"; texture = "#(argb,8,8,3)color(0.969,0.325,0.58,1,co)"; }; 
	class viridian { displayName = "Viridian"; texture = "#(argb,8,8,3)color(0.251,0.51,0.427,1,co)"; }; 
	class vividauburn { displayName = "Vivid Auburn"; texture = "#(argb,8,8,3)color(0.573,0.153,0.141,1,co)"; }; 
	class vividburgundy { displayName = "Vivid Burgundy"; texture = "#(argb,8,8,3)color(0.624,0.114,0.208,1,co)"; }; 
	class vividcerise { displayName = "Vivid Cerise"; texture = "#(argb,8,8,3)color(0.855,0.114,0.506,1,co)"; }; 
	class vividtangerine { displayName = "Vivid Tangerine"; texture = "#(argb,8,8,3)color(1,0.627,0.537,1,co)"; }; 
	class vividviolet { displayName = "Vivid Violet"; texture = "#(argb,8,8,3)color(0.624,0,1,1,co)"; }; 
	class warmblack { displayName = "Warm Black"; texture = "#(argb,8,8,3)color(0,0.259,0.259,1,co)"; }; 
	class waterspout { displayName = "Waterspout"; texture = "#(argb,8,8,3)color(0,1,1,1,co)"; }; 
	class wenge { displayName = "Wenge"; texture = "#(argb,8,8,3)color(0.392,0.329,0.322,1,co)"; }; 
	class wheat { displayName = "Wheat"; texture = "#(argb,8,8,3)color(0.961,0.871,0.702,1,co)"; }; 
	class white { displayName = "White"; texture = "#(argb,8,8,3)color(1,1,1,1,co)"; }; 
	class whitesmoke { displayName = "White Smoke"; texture = "#(argb,8,8,3)color(0.961,0.961,0.961,1,co)"; }; 
	class wildstrawberry { displayName = "Wild Strawberry"; texture = "#(argb,8,8,3)color(1,0.263,0.643,1,co)"; }; 
	class wildwatermelon { displayName = "Wild Watermelon"; texture = "#(argb,8,8,3)color(0.988,0.424,0.522,1,co)"; }; 
	class wildblueyonder { displayName = "Wild Blue Yonder"; texture = "#(argb,8,8,3)color(0.635,0.678,0.816,1,co)"; }; 
	class wine { displayName = "Wine"; texture = "#(argb,8,8,3)color(0.447,0.184,0.216,1,co)"; }; 
	class wisteria { displayName = "Wisteria"; texture = "#(argb,8,8,3)color(0.788,0.627,0.863,1,co)"; }; 
	class xanadu { displayName = "Xanadu"; texture = "#(argb,8,8,3)color(0.451,0.525,0.471,1,co)"; }; 
	class yaleblue { displayName = "Yale Blue"; texture = "#(argb,8,8,3)color(0.059,0.302,0.573,1,co)"; }; 
	class yellow { displayName = "Yellow"; texture = "#(argb,8,8,3)color(1,1,0,1,co)"; }; 
	class yelloworange { displayName = "Yellow Orange"; texture = "#(argb,8,8,3)color(1,0.682,0.259,1,co)"; }; 
	class yellowgreen { displayName = "Yellow Green"; texture = "#(argb,8,8,3)color(0.604,0.804,0.196,1,co)"; }; 
	class zaffre { displayName = "Zaffre"; texture = "#(argb,8,8,3)color(0,0.078,0.659,1,co)"; }; 
	class zinnwalditebrown { displayName = "Zinnwaldite Brown"; texture = "#(argb,8,8,3)color(0.173,0.086,0.031,1,co)"; }; 
};

class cfgMagazines
{
	class CA_Magazine;
	class ivory_radar_detector: CA_Magazine
	{
		mass=1;
		scope=2;
		author="Ivory";
		displayName  = "Radar Detector"; 
		picture = "\A3\Weapons_F\Data\UI\gear_item_gps_CA.paa";
		model = "\a3\Weapons_F\Ammo\mag_gps.p3d";
		descriptionShort = "Alerts you when a speed radar is nearby.<br/>Put it inside of your vehicle";
		weaponpoolavailable = 0;
	};
	class ivory_laser_jammer: CA_Magazine
	{
		mass=1;
		scope=2;
		author="Ivory";
		displayName  = "Laser Jammer"; 
		picture = "\A3\Weapons_F\Data\UI\gear_item_gps_CA.paa";
		model = "\a3\Weapons_F\Ammo\mag_gps.p3d";
		descriptionShort = "Jams speed radars to not show your speed.<br/>Put it inside of your vehicle";
		weaponpoolavailable = 0;
	};
};

class CfgVehicles
{
	class FlagCarrierCore;
	class ivory_flag_base: FlagCarrierCore
	{
		author = "Ivory";
		_generalMacro = "FlagCarrier";
		scope = 0;
		scopeCurator = 0;
		displayName = "";
		model = "\ivory_data\ivorymast.p3d";
		icon = "iconObject_circle";
		editorSubcategory = "EdSubcat_Flags";
		vehicleClass = "Flag";
		cost = 1000;
		keepHorizontalPlacement = 1;
		accuracy = 1000;
		animated = 0;
		nameSound = "obj_flag";
		supplyRadius = 2;
viewCargoShadow = 0;
viewDriverShadow = 0;
castCargoShadow = 0;
castDriverShadow = 0;
	};
	class ivory_flag: ivory_flag_base
	{
		author = "Ivory";
		class SimpleObject
		{
			animate[] = {{"ivoryflag",0}};
			hide[] = {};
			verticalOffset = 0;
			verticalOffsetWorld = 0;
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Flag_Vrana_F.jpg";
		_generalMacro = "Flag_Vrana_F";
		scope = 2;
		scopeCurator = 2;
		displayName = "Small Flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\A3\Data_F\Flags\flag_vrana_CO.paa'";
		};
	};
};
class CfgCloth
{
	class ivoryflag
	{
		stepSize = 0.005;
		colPoints = 9;
		rowPoints = 5;
		stretchCoef = 1000;
		fricCoef = 1;
		windCoef = 10;
		gravCoef = 0.75;
	};
};
class CfgNonAiVehicles
{
	class proxyivoryflag
	{
		scope = 1;
		model = "\ivory_data\ivoryflag.p3d";
		autocenter = 0;
		reversed = 0;
		selectionFabric = "latka";
		simulation = "flag";
	};
};

class RscControlsGroup;
class RscStructuredText;
class RscEdit;
class RscButton;

class client_RscScrollBar
{
	color[] = {1,1,1,0.6};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.3};
	thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
	arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
	arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
	border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
	shadow = 0;
	scrollSpeed = 0.06;
	width = 0;
	height = 0;
	autoScrollEnabled = 1;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
};

class client_RscControlsGroup {
	type = 15;
	idc = -1;
	x = 0;
	y = 0;
	w = 1;
	h = 1;
	shadow = 0;
	style = 16;
	
	class VScrollBar : client_RscScrollBar
	{
		width = 0.021;
		autoScrollEnabled = 1;
	};
	
	class HScrollBar : client_RscScrollBar
	{
		height = 0.028;
	};
	
	class Controls {};
};

class RscTitles
{
	#include "A3GPS\menu\hud.hpp"
	#include "A3GPS\menu\quickNav.hpp"
	class IvoryNotification {
		idd = 9155;
		name= "IvoryNotification";
		movingEnable = 0;
		enableSimulation = 1;
		onLoad = "uiNamespace setVariable ['IvoryNotification', _this select 0];"; 
		fadein=0;
		fadeout=0;
		duration = 6;

		class controls {
			class Notification: RscStructuredText
			{
				idc = 4111;
				fadein=0;
				fadeout=0;
				duration = 6;

				font="PuristaLight";
				text = "Loading...";
				size = 0.035;
				sizeEx = 0.01;
				x = "0.386562 * safezoneW + safezoneX"; 
				y = "0.786 * safezoneH + safezoneY";
				w = "0.216563 * safezoneW"; 
				h = "0.077 * safezoneH";
				ColorBackground[] = {0.133333,0.160784,0.188235,1};
				shadow=0;
			};
		};

	};
};



class IvoryComputer {
	idd = 9154;
	name= "IvoryComputer";
	movingEnable = 0;
	enableSimulation = 1;

	class controls {

		class ComputerSubmit: RscButton
		{
			idc = 4123;
			default = 1;
			action = [] call ivory_fnc_computerProcess;
			ColorBackground[] = {0,0,0,0};
			text = "";
			x = -10;
			y = -10;
			w = 0;
			h = 0;
		};

		class ComputerText: RscEdit
		{
			idc = 4122;
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.181 * safezoneH + safezoneY;
			w = 0.4125 * safezoneW;
			h = 0.033 * safezoneH;
			ColorBackground[] = {0,0,0,1};
			ColorText[] = {0,1,0,1};
			sizeEx = 0.035;
		};
				
		class ComputerControlsGroup : RscControlsGroup {

			x = "0.29375 * safezoneW + safezoneX"; 
			y = "0.225 * safezoneH + safezoneY";
			w = "0.4125 * safezoneW"; 
			h = "0.55 * safezoneH";
			class controls {
				class Computer: RscStructuredText
				{
					idc = 4110;
					shadow=0;
					fadein=1;
					fadeout=1;

					class Attributes {
						font="LucidaConsoleB";
						color = "#00FF00";
					};
					text = "";
					size = 0.025;
					sizeEx = 0.01;
					x = 0;
					y = 0;
					w = 1; 
					h = 1;
					ColorBackground[] = {0,0,0,1};
				};
			};
		};
	};
};


class IvoryManual {
	idd = 9154;
	name= "IvoryManual";
	movingEnable = 0;
	enableSimulation = 1;

	class controls {

		class ComputerControlsGroup : RscControlsGroup {
			x = "0.29375 * safezoneW + safezoneX"; 
			y = "0.225 * safezoneH + safezoneY";
			w = "0.4125 * safezoneW"; 
			h = "0.55 * safezoneH";
			class controls {
				class Computer: RscStructuredText
				{
					idc = 4110;
					shadow=0;
					fadein=1;
					fadeout=1;

					font="PuristaLight";
					text = "Loading...";
					size = 0.04;
					sizeEx = 0.01;
					x = 0;
					y = 0;
					w = 1; 
					h = 1;
					ColorBackground[] = {0.133333,0.160784,0.188235,1};
				};
			};
		};
	};
};
