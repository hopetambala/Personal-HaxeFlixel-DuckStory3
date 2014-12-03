#ifndef INCLUDED_AssetPaths
#define INCLUDED_AssetPaths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(AssetPaths)


class HXCPP_CLASS_ATTRIBUTES  AssetPaths_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetPaths_obj OBJ_;
		AssetPaths_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AssetPaths_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetPaths_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AssetPaths"); }

		static ::String __DS_Store;
		static ::String experim1__csv;
		static ::String experim2__csv;
		static ::String experim3__csv;
		static ::String images_go_here__txt;
		static ::String sunset__jpg;
		static ::String sunset__png;
		static ::String wubbles__png;
		static ::String wubbles2__png;
		static ::String mapDoor1__csv;
		static ::String mapDoor2__csv;
		static ::String mapHits2__csv;
		static ::String mapHits3__csv;
		static ::String mapTiles__png;
		static ::String DUCKSONG__wav;
		static ::String music_goes_here__txt;
		static ::String ducksong__wav;
		static ::String tiles2__png;
};


#endif /* INCLUDED_AssetPaths */ 
