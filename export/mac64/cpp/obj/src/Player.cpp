#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void Player_obj::__construct(int X,int Y)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",23,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(25)
	super::__construct(X,Y,null());
	HX_STACK_LINE(26)
	::flixel::FlxSprite_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (int)5),null(),null());
	HX_STACK_LINE(30)
	this->loadGraphic(HX_CSTRING("assets/images/wubbles2.png"),true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(31)
	this->animation->add(HX_CSTRING("walk"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)0).Add((int)2),(int)5,true);
	HX_STACK_LINE(32)
	this->animation->play(HX_CSTRING("walk"),null(),null());
	HX_STACK_LINE(34)
	this->maxVelocity->set((int)80,(int)200);
	HX_STACK_LINE(35)
	this->acceleration->set_y((int)175);
	HX_STACK_LINE(36)
	this->drag->set_x((this->maxVelocity->x * (int)4));
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(int X,int Y)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Player_obj::update( ){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",42,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		this->acceleration->set_x((int)0);
		HX_STACK_LINE(44)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)68,::flixel::FlxG_obj::keys->pressed->checkStatus))){
			HX_STACK_LINE(45)
			this->acceleration->set_x((this->maxVelocity->x * (int)4));
		}
		HX_STACK_LINE(48)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)65,::flixel::FlxG_obj::keys->pressed->checkStatus))){
			HX_STACK_LINE(51)
			this->set_flipX(true);
			HX_STACK_LINE(52)
			this->acceleration->set_x((-(this->maxVelocity->x) * (int)4));
			HX_STACK_LINE(54)
			if (((  ((::flixel::FlxG_obj::keys->checkStatus((int)16,::flixel::FlxG_obj::keys->justPressed->checkStatus))) ? bool((((int(this->touching) & int((int)4096))) > (int)0)) : bool(false) ))){
				HX_STACK_LINE(56)
				this->maxVelocity->set_x((int)200);
			}
			HX_STACK_LINE(59)
			if ((::flixel::FlxG_obj::keys->checkStatus((int)16,::flixel::FlxG_obj::keys->justReleased->checkStatus))){
				HX_STACK_LINE(61)
				this->maxVelocity->set_x((int)80);
			}
		}
		HX_STACK_LINE(65)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)68,::flixel::FlxG_obj::keys->pressed->checkStatus))){
			HX_STACK_LINE(68)
			this->set_flipX(false);
			HX_STACK_LINE(69)
			this->acceleration->set_x((this->maxVelocity->x * (int)4));
			HX_STACK_LINE(71)
			if (((  ((::flixel::FlxG_obj::keys->checkStatus((int)16,::flixel::FlxG_obj::keys->pressed->checkStatus))) ? bool((((int(this->touching) & int((int)4096))) > (int)0)) : bool(false) ))){
				HX_STACK_LINE(73)
				this->maxVelocity->set_x((int)200);
			}
			HX_STACK_LINE(76)
			if ((::flixel::FlxG_obj::keys->checkStatus((int)16,::flixel::FlxG_obj::keys->justReleased->checkStatus))){
				HX_STACK_LINE(78)
				this->maxVelocity->set_x((int)80);
			}
		}
		HX_STACK_LINE(83)
		if (((  ((::flixel::FlxG_obj::keys->checkStatus((int)32,::flixel::FlxG_obj::keys->pressed->checkStatus))) ? bool((((int(this->touching) & int((int)4096))) > (int)0)) : bool(false) ))){
			HX_STACK_LINE(85)
			this->velocity->set_y((Float(-(this->maxVelocity->y)) / Float((int)2)));
		}
		HX_STACK_LINE(90)
		if (((  (((  (((((int(this->touching) & int((int)17))) > (int)0))) ? bool(::flixel::FlxG_obj::keys->checkStatus((int)32,::flixel::FlxG_obj::keys->justPressed->checkStatus)) : bool(false) ))) ? bool(::flixel::FlxG_obj::keys->checkStatus((int)68,::flixel::FlxG_obj::keys->pressed->checkStatus)) : bool(false) ))){
			HX_STACK_LINE(92)
			this->velocity->set_x((-(this->maxVelocity->x) * (int)8));
			HX_STACK_LINE(93)
			this->velocity->set_y((Float(-(this->maxVelocity->y)) / Float((int)2)));
		}
		HX_STACK_LINE(97)
		if (((  (((  (((((int(this->touching) & int((int)17))) > (int)0))) ? bool(::flixel::FlxG_obj::keys->checkStatus((int)32,::flixel::FlxG_obj::keys->justPressed->checkStatus)) : bool(false) ))) ? bool(::flixel::FlxG_obj::keys->checkStatus((int)65,::flixel::FlxG_obj::keys->pressed->checkStatus)) : bool(false) ))){
			HX_STACK_LINE(99)
			this->velocity->set_x((this->maxVelocity->x * (int)8));
			HX_STACK_LINE(100)
			this->velocity->set_y((Float(-(this->maxVelocity->y)) / Float((int)2)));
		}
		HX_STACK_LINE(106)
		this->super::update();
	}
return null();
}



Player_obj::Player_obj()
{
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
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

void Player_obj::__boot()
{
}

