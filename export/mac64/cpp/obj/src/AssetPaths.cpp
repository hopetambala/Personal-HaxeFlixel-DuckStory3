#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

Void AssetPaths_obj::__construct()
{
	return null();
}

//AssetPaths_obj::~AssetPaths_obj() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return  new AssetPaths_obj; }
hx::ObjectPtr< AssetPaths_obj > AssetPaths_obj::__new()
{  hx::ObjectPtr< AssetPaths_obj > result = new AssetPaths_obj();
	result->__construct();
	return result;}

Dynamic AssetPaths_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetPaths_obj > result = new AssetPaths_obj();
	result->__construct();
	return result;}

::String AssetPaths_obj::__DS_Store;

::String AssetPaths_obj::experim1__csv;

::String AssetPaths_obj::experim2__csv;

::String AssetPaths_obj::experim3__csv;

::String AssetPaths_obj::images_go_here__txt;

::String AssetPaths_obj::sunset__jpg;

::String AssetPaths_obj::sunset__png;

::String AssetPaths_obj::wubbles__png;

::String AssetPaths_obj::wubbles2__png;

::String AssetPaths_obj::mapDoor1__csv;

::String AssetPaths_obj::mapDoor2__csv;

::String AssetPaths_obj::mapHits2__csv;

::String AssetPaths_obj::mapHits3__csv;

::String AssetPaths_obj::mapTiles__png;

::String AssetPaths_obj::DUCKSONG__wav;

::String AssetPaths_obj::music_goes_here__txt;

::String AssetPaths_obj::ducksong__wav;

::String AssetPaths_obj::tiles2__png;


AssetPaths_obj::AssetPaths_obj()
{
}

Dynamic AssetPaths_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic AssetPaths_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetPaths_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__DS_Store"),
	HX_CSTRING("experim1__csv"),
	HX_CSTRING("experim2__csv"),
	HX_CSTRING("experim3__csv"),
	HX_CSTRING("images_go_here__txt"),
	HX_CSTRING("sunset__jpg"),
	HX_CSTRING("sunset__png"),
	HX_CSTRING("wubbles__png"),
	HX_CSTRING("wubbles2__png"),
	HX_CSTRING("mapDoor1__csv"),
	HX_CSTRING("mapDoor2__csv"),
	HX_CSTRING("mapHits2__csv"),
	HX_CSTRING("mapHits3__csv"),
	HX_CSTRING("mapTiles__png"),
	HX_CSTRING("DUCKSONG__wav"),
	HX_CSTRING("music_goes_here__txt"),
	HX_CSTRING("ducksong__wav"),
	HX_CSTRING("tiles2__png"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__DS_Store,"__DS_Store");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::experim1__csv,"experim1__csv");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::experim2__csv,"experim2__csv");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::experim3__csv,"experim3__csv");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sunset__jpg,"sunset__jpg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sunset__png,"sunset__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::wubbles__png,"wubbles__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::wubbles2__png,"wubbles2__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::mapDoor1__csv,"mapDoor1__csv");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::mapDoor2__csv,"mapDoor2__csv");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::mapHits2__csv,"mapHits2__csv");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::mapHits3__csv,"mapHits3__csv");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::mapTiles__png,"mapTiles__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::DUCKSONG__wav,"DUCKSONG__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::ducksong__wav,"ducksong__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::tiles2__png,"tiles2__png");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__DS_Store,"__DS_Store");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::experim1__csv,"experim1__csv");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::experim2__csv,"experim2__csv");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::experim3__csv,"experim3__csv");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sunset__jpg,"sunset__jpg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sunset__png,"sunset__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::wubbles__png,"wubbles__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::wubbles2__png,"wubbles2__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::mapDoor1__csv,"mapDoor1__csv");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::mapDoor2__csv,"mapDoor2__csv");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::mapHits2__csv,"mapHits2__csv");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::mapHits3__csv,"mapHits3__csv");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::mapTiles__png,"mapTiles__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::DUCKSONG__wav,"DUCKSONG__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::ducksong__wav,"ducksong__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::tiles2__png,"tiles2__png");
};

#endif

Class AssetPaths_obj::__mClass;

void AssetPaths_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("AssetPaths"), hx::TCanCast< AssetPaths_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void AssetPaths_obj::__boot()
{
	__DS_Store= HX_CSTRING("assets/.DS_Store");
	experim1__csv= HX_CSTRING("assets/experim1.csv");
	experim2__csv= HX_CSTRING("assets/experim2.csv");
	experim3__csv= HX_CSTRING("assets/experim3.csv");
	images_go_here__txt= HX_CSTRING("assets/images/images-go-here.txt");
	sunset__jpg= HX_CSTRING("assets/images/sunset.jpg");
	sunset__png= HX_CSTRING("assets/images/sunset.png");
	wubbles__png= HX_CSTRING("assets/images/wubbles.png");
	wubbles2__png= HX_CSTRING("assets/images/wubbles2.png");
	mapDoor1__csv= HX_CSTRING("assets/mapDoor1.csv");
	mapDoor2__csv= HX_CSTRING("assets/mapDoor2.csv");
	mapHits2__csv= HX_CSTRING("assets/mapHits2.csv");
	mapHits3__csv= HX_CSTRING("assets/mapHits3.csv");
	mapTiles__png= HX_CSTRING("assets/mapTiles.png");
	DUCKSONG__wav= HX_CSTRING("assets/music/DUCKSONG.wav");
	music_goes_here__txt= HX_CSTRING("assets/music/music-goes-here.txt");
	ducksong__wav= HX_CSTRING("assets/sounds/ducksong.wav");
	tiles2__png= HX_CSTRING("assets/tiles2.png");
}

