#ifndef INCLUDED_Player2
#define INCLUDED_Player2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(Player2)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Player2_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Player2_obj OBJ_;
		Player2_obj();
		Void __construct(int X,int Y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Player2_obj > __new(int X,int Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player2_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Player2"); }

		virtual Void update( );

};


#endif /* INCLUDED_Player2 */ 
